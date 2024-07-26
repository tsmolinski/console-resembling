// Fill out your copyright notice in the Description page of Project Settings.


#include "ConsoleHUD.h"
#include "../Widgets/ConsoleWidget.h"
#include "Components/EditableTextBox.h"
#include "Containers/Queue.h"
#include "../Widgets/MessageWidget.h"
#include "Kismet/GameplayStatics.h"
#include "../PlayerController/ConsolePlayerController.h"
#include "../Widgets/ConsoleMessageEntry.h"
#include "Blueprint/WidgetTree.h"
#include "Components/VerticalBox.h"

void AConsoleHUD::ShowConsoleWidget()
{
	if (ConsoleWidgetClass)
	{
		ConsoleWidget = CreateWidget<UConsoleWidget>(GetWorld(), ConsoleWidgetClass);
	}

	if (ConsoleWidget)
	{
		ConsoleWidget->AddToViewport();
		ConsoleWidget->EditableTextBox->OnTextCommitted.AddDynamic(this, &AConsoleHUD::TextCommitted);
	}
	
}

void AConsoleHUD::HideConsoleWidget()
{
	if (ConsoleWidget)
	{
		ConsoleWidget->RemoveFromParent();
		ConsoleWidget->EditableTextBox->OnTextCommitted.RemoveDynamic(this, &AConsoleHUD::TextCommitted);
	}
}

void AConsoleHUD::TextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter)
	{
		FString SourceMessage = Text.ToString();
		ConsoleWidget->EditableTextBox->SetText(Text);
		UE_LOG(LogTemp, Warning, TEXT("Message text: %s"), *SourceMessage);

		//Remove -Flush string from the message and change flag ShouldFlush
		const FString FlushStr = "-Flush";
		if (SourceMessage.Contains(FlushStr))
		{
			TCHAR* FlushChar = TEXT("-Flush");
			TCHAR* BlankChar = TEXT("");
			SourceMessage = SourceMessage.Replace(FlushChar, BlankChar);

			ShouldFlush = true;
		}

		//Remove -Victory string from the message and change flag ShowVictory
		const FString VictoryStr = "-Victory";
		if (SourceMessage.Contains(VictoryStr))
		{
			TCHAR* VictoryChar = TEXT("-Victory");
			TCHAR* BlankChar = TEXT("");
			SourceMessage = SourceMessage.Replace(VictoryChar, BlankChar);

			ShowVictory = true;
		}

		MessageString = SourceMessage;

		//Parse -Format string and change flag HasFormat
		const FString FormatStr = "-Format";
		FString Message;
		FString Format;
		if (SourceMessage.Contains(FormatStr))
		{
			HasFormat = true;

			if (SourceMessage.Split(FormatStr, &Message, &Format))
			{
				Format = Format.TrimStart();
				Format = Format.TrimEnd();
				MessageString = Message;
			}

			if (Format.StartsWith("("))
			{
				//Remove first index
				Format = Format.Mid(1, Format.Len());
			}

			if (Format.EndsWith(")"))
			{
				//Remove last index
				Format = Format.Mid(0, Format.Len() - 1);
			}

			FormatString = Format;

			OnFormatStringSent.Broadcast(Format);
		}

		//Show appropriate widget
		if (!ShowVictory)
		{
			if (!ConsoleMessageEntryWidgetShown)
			{
				ShowConsoleMessageEntryWidget();
			}

			ShowConsoleMessageWidget();

			UVerticalBox* VerBox = Cast<UVerticalBox>(ConsoleMessageEntryWidget->WidgetTree->FindWidget("EntryBox"));
			if (VerBox->GetChildrenCount() < 4)
			{
				VerBox->AddChildToVerticalBox(ConsoleMessageWidget);
			}
			else
			{
				ConsoleMessageWidgetQueue.Enqueue(ConsoleMessageWidget);
			}
		}
		else
		{
			ShowConsoleVictoryScreen();
			ShowVictory = false;
		}
		
		
		FlushQueue();

		SourceMessage = "";

		HasFormat = false;
	}
}

void AConsoleHUD::ShowConsoleMessageWidget()
{
	if (ConsoleMessageWidgetClass)
	{
		ConsoleMessageWidget = CreateWidget<UMessageWidget>(GetWorld(), ConsoleMessageWidgetClass);
	}

	if (ConsoleMessageWidget)
	{
		ConsoleMessageWidget->OnWidgetRemovedDelegate.AddDynamic(this, &AConsoleHUD::PopWidgetFromQueueAndAddToVerBox);
	}
}

void AConsoleHUD::HideConsoleMessageWidget()
{
	if (ConsoleMessageWidget)
	{
		ConsoleMessageWidget->RemoveFromParent();
		ConsoleMessageWidget->OnWidgetRemovedDelegate.RemoveDynamic(this, &AConsoleHUD::PopWidgetFromQueueAndAddToVerBox);
	}
}

void AConsoleHUD::ShowConsoleMessageEntryWidget()
{
	if (ConsoleMessageEntryWidgetClass)
	{
		ConsoleMessageEntryWidget = CreateWidget<UConsoleMessageEntry>(GetWorld(), ConsoleMessageEntryWidgetClass);
	}

	if (ConsoleMessageEntryWidget)
	{
		ConsoleMessageEntryWidget->AddToViewport();

		FInputModeGameAndUI InputModeGameAndUI;
		if (AConsolePlayerController* ConsolePC = Cast<AConsolePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0)))
		{
			ConsolePC->SetInputMode(InputModeGameAndUI);
		}

		ConsoleMessageEntryWidgetShown = true;
	}
}

void AConsoleHUD::HideConsoleMessageEntryWidget()
{
	if (ConsoleMessageEntryWidget)
	{
		ConsoleMessageEntryWidget->RemoveFromParent();

		ConsoleMessageEntryWidgetShown = false;
	}
}

void AConsoleHUD::FlushQueue()
{
	if (ShouldFlush)
	{
		ConsoleMessageWidgetQueue.Empty();
		
		ShouldFlush = false;
	}
}

void AConsoleHUD::ShowConsoleVictoryScreen()
{
	if (ConsoleVictoryWidgetClass)
	{
		ConsoleVictoryWidget = CreateWidget<UUserWidget>(GetWorld(), ConsoleVictoryWidgetClass);
	}

	if (ConsoleVictoryWidget)
	{
		ConsoleVictoryWidget->AddToViewport();

		FInputModeGameAndUI InputModeGameAndUI;
		if (AConsolePlayerController* ConsolePC = Cast<AConsolePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0)))
		{
			ConsolePC->SetInputMode(InputModeGameAndUI);
		}
	}
}

void AConsoleHUD::PopWidgetFromQueueAndAddToVerBox()
{
	UVerticalBox* VerBox = Cast<UVerticalBox>(ConsoleMessageEntryWidget->WidgetTree->FindWidget("EntryBox"));

	if (VerBox->GetChildrenCount() < 4)
	{
		if (!ConsoleMessageWidgetQueue.IsEmpty())
		{
			ConsoleMessageWidgetQueue.Dequeue(ConsoleMessageWidget);

			VerBox->AddChildToVerticalBox(ConsoleMessageWidget);
		}
	}
}

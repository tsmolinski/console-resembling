// Fill out your copyright notice in the Description page of Project Settings.


#include "ConsoleHUD.h"
#include "../Widgets/ConsoleWidget.h"
#include "Components/EditableTextBox.h"
#include "Containers/Queue.h"
#include "../Widgets/ConsoleMessage.h"
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

		const FString FlushStr = "-Flush";
		if (SourceMessage.Contains(FlushStr))
		{
			TCHAR* FlushChar = TEXT("-Flush");
			TCHAR* BlankChar = TEXT("");
			SourceMessage = SourceMessage.Replace(FlushChar, BlankChar);
			//UE_LOG(LogTemp, Warning, TEXT("Message text after FlushRemove: %s"), *SourceMessage);

			ShouldFlush = true;
		}

		const FString VictoryStr = "-Victory";
		if (SourceMessage.Contains(VictoryStr))
		{
			TCHAR* VictoryChar = TEXT("-Victory");
			TCHAR* BlankChar = TEXT("");
			SourceMessage = SourceMessage.Replace(VictoryChar, BlankChar);
			//UE_LOG(LogTemp, Warning, TEXT("Message text after VictoryRemove: %s"), *SourceMessage);

			ShowVictory = true;
		}

		MessageString = SourceMessage;

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
				//UE_LOG(LogTemp, Warning, TEXT("Format(split from message and trim end/start): %s"), *SourceMessage);
			}

			if (Format.StartsWith("("))
			{
				Format = Format.Mid(1, Format.Len());
			}

			if (Format.EndsWith(")"))
			{
				Format = Format.Mid(0, Format.Len() - 1);
			}
			//UE_LOG(LogTemp, Warning, TEXT("Format(split from message and trim end/start, after deleting ()): %s"), *Format);

			FormatString = Format;

			OnFormatStringSent.Broadcast(Format);
		}

		if (!ConsoleMessageEntryWidgetShown)
		{
			ShowConsoleMessageEntryWidget();
		}
		
		ShowConsoleMessageWidget();
		
		
		//Add ConsoleMessageWidget as a child to ConsoleMessageEntryWidget's vertical box
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
}

void AConsoleHUD::ShowConsoleMessageWidget()
{
	if (ConsoleMessageWidgetClass)
	{
		ConsoleMessageWidget = CreateWidget<UConsoleMessage>(GetWorld(), ConsoleMessageWidgetClass);
	}

	if (ConsoleMessageWidget)
	{
		//ConsoleMessageWidget->AddToViewport();
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

void AConsoleHUD::PopWidgetFromQueueAndAddToVerBox()
{
	UVerticalBox* VerBox = Cast<UVerticalBox>(ConsoleMessageEntryWidget->WidgetTree->FindWidget("EntryBox"));

	if (VerBox->GetChildrenCount() < 4)
	{
		//UConsoleMessage* TempWidget = CreateWidget<UConsoleMessage>(GetWorld(), ConsoleMessageWidgetClass);
		if (!ConsoleMessageWidgetQueue.IsEmpty())
		{
			ConsoleMessageWidgetQueue.Dequeue(ConsoleMessageWidget);

			VerBox->AddChildToVerticalBox(ConsoleMessageWidget);
		}
	}
}

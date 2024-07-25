// Fill out your copyright notice in the Description page of Project Settings.


#include "ConsoleHUD.h"
#include "../Widgets/ConsoleWidget.h"
#include "Components/EditableTextBox.h"
#include "Containers/Queue.h"

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
	}
}

void AConsoleHUD::ShowConsoleEntryWidget()
{

}

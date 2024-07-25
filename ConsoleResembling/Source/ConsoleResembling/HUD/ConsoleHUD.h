// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ConsoleHUD.generated.h"

class UConsoleWidget;
class UConsoleMessage;
class UConsoleMessageEntry;

UCLASS()
class CONSOLERESEMBLING_API AConsoleHUD : public AHUD
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFormatStringSent, const FString&, FormatString);
	
public:
	void ShowConsoleWidget();

	void HideConsoleWidget();

	UPROPERTY(BlueprintAssignable)
	FOnFormatStringSent OnFormatStringSent;

	UPROPERTY(BlueprintReadOnly)
	FString FormatString;

	UPROPERTY(BlueprintReadOnly)
	FString MessageString;

	UPROPERTY(BlueprintReadOnly)
	bool ShouldFlush = false;

	UPROPERTY(BlueprintReadOnly)
	bool ShowVictory = false;

	UPROPERTY(BlueprintReadOnly)
	bool HasFormat = false;


protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UConsoleWidget> ConsoleWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UConsoleMessage> ConsoleMessageWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UConsoleMessageEntry> ConsoleMessageEntryWidgetClass;

	UPROPERTY()
	UConsoleWidget* ConsoleWidget;

	UPROPERTY()
	UConsoleMessage* ConsoleMessageWidget;

	UPROPERTY()
	UConsoleMessageEntry* ConsoleMessageEntryWidget;

	TQueue<UConsoleMessage*> ConsoleMessageWidgetQueue;

	bool ConsoleMessageEntryWidgetShown = false;

	UFUNCTION()
	void TextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

	void ShowConsoleMessageWidget();

	void HideConsoleMessageWidget();

	void ShowConsoleMessageEntryWidget();

	void HideConsoleMessageEntryWidget();

	UFUNCTION()
	void PopWidgetFromQueueAndAddToVerBox();

};

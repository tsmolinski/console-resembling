// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ConsoleHUD.generated.h"

class UConsoleWidget;
//class TQueue;

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

	UPROPERTY()
	UConsoleWidget* ConsoleWidget;

	/*UPROPERTY()
	TQueue<UUserWidget*> MessageWidgetQueue;*/

	UFUNCTION()
	void TextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

	void ShowConsoleEntryWidget();

};

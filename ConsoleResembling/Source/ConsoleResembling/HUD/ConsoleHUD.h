// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"

#include "Delegates/DelegateSignatureImpl.inl"

#include "ConsoleHUD.generated.h"

class UConsoleWidget;

UCLASS()
class CONSOLERESEMBLING_API AConsoleHUD : public AHUD
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFormatStringSent, const FString&, FormatString);
	
public:
	void ShowConsoleWidget();

	void HideConsoleWidget();

	UPROPERTY(BlueprintReadOnly)
	FString FormatString;

	UPROPERTY(BlueprintAssignable)
	FOnFormatStringSent OnFormatStringSent;

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UConsoleWidget> ConsoleWidgetClass;

	UPROPERTY()
	UConsoleWidget* ConsoleWidget;

	//TObjectPtr<FString> SourceMessage;
	//FString* SourceMessage;

	UFUNCTION()
	void TextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ConsoleWidget.generated.h"

class UEditableTextBox;

UCLASS()
class CONSOLERESEMBLING_API UConsoleWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	//UEditableTextBlock* EditableTextBlock;
	UEditableTextBox* EditableTextBlock;
	//UEditableText* EditableTextBlock;

};

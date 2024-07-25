// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ConsoleMessageEntry.generated.h"

class UVerticalBox;

UCLASS()
class CONSOLERESEMBLING_API UConsoleMessageEntry : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVerticalBox* EntryBox;
};

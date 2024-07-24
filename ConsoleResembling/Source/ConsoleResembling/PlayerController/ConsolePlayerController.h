// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ConsolePlayerController.generated.h"


UCLASS()
class CONSOLERESEMBLING_API AConsolePlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent();

	void ShowOrHideConsoleWidget();

private:
	bool isConsoleWidgetShown = false;
};

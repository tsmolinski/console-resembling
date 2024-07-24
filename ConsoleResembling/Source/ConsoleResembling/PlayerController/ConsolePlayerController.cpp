// Fill out your copyright notice in the Description page of Project Settings.


#include "ConsolePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "../HUD/ConsoleHUD.h"

void AConsolePlayerController::BeginPlay()
{

}

void AConsolePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (InputComponent)
	{
		InputComponent->BindAction("ShowConsoleWidget", IE_Pressed, this, &AConsolePlayerController::ShowOrHideConsoleWidget);
	}
}

void AConsolePlayerController::ShowOrHideConsoleWidget()
{
	AConsoleHUD* ConsoleHUD = Cast<AConsoleHUD>(this->GetHUD());
	FInputModeGameAndUI InputModeGameAndUI;
	if (ConsoleHUD)
	{
		if (!isConsoleWidgetShown)
		{
			ConsoleHUD->ShowConsoleWidget();
			isConsoleWidgetShown = true;
			this->SetInputMode(InputModeGameAndUI);
		}
		else
		{
			ConsoleHUD->HideConsoleWidget();
			isConsoleWidgetShown = false;
		}
	}
}

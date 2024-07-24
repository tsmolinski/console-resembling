// Fill out your copyright notice in the Description page of Project Settings.


#include "ConsoleHUD.h"
#include "../Widgets/ConsoleWidget.h"

void AConsoleHUD::ShowConsoleWidget()
{
	if (ConsoleWidgetClass)
	{
		ConsoleWidget = CreateWidget<UConsoleWidget>(GetWorld(), ConsoleWidgetClass);
	}

	if (ConsoleWidget)
	{
		ConsoleWidget->AddToViewport();
	}
	
}

void AConsoleHUD::HideConsoleWidget()
{
	if (ConsoleWidget)
	{
		ConsoleWidget->RemoveFromParent();
	}
}

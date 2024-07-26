// Fill out your copyright notice in the Description page of Project Settings.


#include "MessageWidget.h"
#include "Kismet/GameplayStatics.h"
#include "../PlayerController/ConsolePlayerController.h"
#include "../HUD/ConsoleHUD.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"

void UMessageWidget::NativeConstruct()
{
	Super::NativeConstruct();

    CurrentLifetime = Lifetime;

    AConsolePlayerController* ConsolePC = Cast<AConsolePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
    if (ConsolePC)
    {
        AConsoleHUD* ConsoleHUD = Cast<AConsoleHUD>(ConsolePC->GetHUD());

        if (ConsoleHUD)
        {
            TextBlock->SetText(FText::FromString(ConsoleHUD->MessageString));
        }
    }
}

void UMessageWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

    Super::NativeTick(MyGeometry, InDeltaTime);

    if (CurrentLifetime > 0.0)
    {
        CurrentLifetime -= InDeltaTime;

        LifetimeProgressbar->SetPercent(CurrentLifetime / Lifetime);
    }
    else
    {
        this->RemoveFromParent();
        OnWidgetRemovedDelegate.Broadcast();
    }
}

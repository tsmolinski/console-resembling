// Fill out your copyright notice in the Description page of Project Settings.


#include "ConsoleMessage.h"
#include "Components/ProgressBar.h"

void UConsoleMessage::NativeConstruct()
{
    Super::NativeConstruct();

    CurrentLifetime = Lifetime;
}

void UConsoleMessage::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
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

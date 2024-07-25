// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ConsoleMessage.generated.h"

class UProgressBar;

UCLASS()
class CONSOLERESEMBLING_API UConsoleMessage : public UUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWidgetRemoved);

public:
	UPROPERTY(BlueprintAssignable)
	FOnWidgetRemoved OnWidgetRemovedDelegate;

public:
	virtual void NativeConstruct();

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UProgressBar* LifetimeProgressbar;

	UPROPERTY(BlueprintReadWrite)
	float Lifetime = 3;
	
	float CurrentLifetime;
};

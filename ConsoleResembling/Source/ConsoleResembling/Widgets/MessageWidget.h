// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ConsoleUserWidget.h"
#include "MessageWidget.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS()
class CONSOLERESEMBLING_API UMessageWidget : public UConsoleUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWidgetRemoved);

public:
	UPROPERTY(BlueprintAssignable)
	FOnWidgetRemoved OnWidgetRemovedDelegate;

public:
	virtual void NativeConstruct();

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
	
protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UProgressBar* LifetimeProgressbar;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* TextBlock;

	UPROPERTY(BlueprintReadWrite)
	float Lifetime = 3;

	float CurrentLifetime;
};

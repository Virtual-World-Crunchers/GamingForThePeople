// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "NotificationWidget.generated.h"


/**
 *
 */
UCLASS()
class SHOOTERGAME_API UNotificationWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UNotificationWidget(const FObjectInitializer& ObjectInitalizer);

	virtual void NativeConstruct() override;

	void UpdateText(FText text);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TXT;
};
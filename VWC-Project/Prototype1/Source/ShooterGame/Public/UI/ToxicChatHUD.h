// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"
#include "SlateExtras.h"

#include "ToxicChatHUD.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UToxicChatHUD : public UObject
{
	GENERATED_BODY()
    
	public: 
		UFUNCTION(BlueprintImplementableEvent)
		void StartTimer();

		//UFUNCTION(BlueprintImplementableEvent)
		//void UpdateTimer();

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString currentTime = TEXT("");

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool timing = false;


		UToxicChatHUD();
		static FText SelectRandom();
		static void ToggleSlowChat();
		static void ToggleFilterChat();
		static bool GetSlowChat();
		static bool GetFilterChat();
		FString GetCurrentTime();
		bool GetTimerStatus();
		void TimerBP();
		//FReply ToggleFilterChat() const;

	//TSharedPtr<SButton> SlowChatToggle;
	//static TSharedPtr<SButton> FilterChatToggle;
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, noclear, Category = "Class Types")
	//TSubclassOf<class UMG> SlowChatTimer;


//protected:

	
};

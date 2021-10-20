// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "ToxicChatHUD.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SHOOTERGAME_API UToxicChatHUD : public UObject
{
	GENERATED_BODY()
    
	public: 
		/** TODO: Fix the ACCESS_VIOLATION error whenever the UFUNCTION is call
		UFUNCTION(BlueprintImplementableEvent)
		void StartSlowChatTimer();

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString currentTime = TEXT("");

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool timing = false;
		**/

		UToxicChatHUD();
		static FText SelectRandom();
		static void ToggleSlowChat();
		static void ToggleFilterChat();

		static bool GetSlowChat();
		static bool GetFilterChat();
		FString GetCurrentTime();
		bool GetTimerStatus();
		void TimerBP();
		void StartSlowChatTimer();
		FString currentTime = TEXT("");
		

		UFUNCTION()
		void UpdateSlowChatTimer();

		void SetWorldPtr(UWorld* worldPtr);
		
		void StartSlowChatTimerBOT();
		bool GetTimerStatusBOT();
		UFUNCTION()
		void UpdateSlowChatTimerBOT();
};

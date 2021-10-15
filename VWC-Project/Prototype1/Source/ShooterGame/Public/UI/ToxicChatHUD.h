// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"
#include "SlateExtras.h"

#include "ToxicChatHUD.generated.h"

/**
 * 
 */
UCLASS()
class UToxicChatHUD : public UObject
{
	GENERATED_BODY()
    
	public: 
		

		UToxicChatHUD();
		static FText SelectRandom();
		static void ToggleSlowChat();
		static void ToggleFilterChat();
		static bool GetSlowChat();
		static bool GetFilterChat();
		//FReply ToggleFilterChat() const;

public:
	//TSharedPtr<SButton> SlowChatToggle;
	//static TSharedPtr<SButton> FilterChatToggle;
	
//protected:

	
};

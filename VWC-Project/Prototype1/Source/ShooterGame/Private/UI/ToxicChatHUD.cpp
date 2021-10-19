// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/ToxicChatHUD.h"
#include "Math/UnrealMathUtility.h"
#include "UI/Widgets/SChatWidget.h"
#include "Engine/World.h"

static bool slowChat;
static bool filterChat;
//static UClass* SCTimer = FindObject<UClass>(nullptr, TEXT("Blueprints.SlowChatTimer"), true);
static bool timerLoaded;
static FString timer;

#define MAX_TIME 10.0f
float time;
bool timing;
FTimerHandle SCTimerHandle;
UWorld* world;

UToxicChatHUD::UToxicChatHUD() {
	slowChat = false;
	filterChat = false;
	time = 0.0f;
	timing = false;
}


FText UToxicChatHUD::SelectRandom() {

	TArray<FString> samples = { TEXT("Stop being a fucking pussy and shoot"),
		TEXT("Fuck ur shit at this"),
		TEXT("I can tell you're a girl shooting like that"),
		TEXT("If you want to play again, stop camping and fucking do something you dumbass"),
		TEXT("Go fuck yourself"),
		TEXT("Fuck off you stupid noob"),
		TEXT("Does your ass ever get jealous of the amount of shit that comes out of your mouth?"),
		TEXT("Someones pissed, oh is it your time of the month?") };

	int max = samples.Num();
	int index = FMath::RandRange(0, max - 1);

	return FText::FromString(samples[index]);
}

void UToxicChatHUD::ToggleSlowChat() {
	if (slowChat) {
		slowChat = false;
	}
	else {
		slowChat = true;
	}

}

void UToxicChatHUD::ToggleFilterChat() {
	if (filterChat) {
		filterChat = false;
	}
	else {
		filterChat = true;
	}

}

bool UToxicChatHUD::GetSlowChat() {
	return slowChat;
}

bool UToxicChatHUD::GetFilterChat() {
	return filterChat;
}

FString UToxicChatHUD::GetCurrentTime() {
	return currentTime;
}

bool UToxicChatHUD::GetTimerStatus() {
	return timing;
}

void UToxicChatHUD::SetWorldPtr(UWorld* worldPtr) {
	world = worldPtr;
}

void UToxicChatHUD::TimerBP() {
	
	StartSlowChatTimer();

	//StartTimer();
}

void UToxicChatHUD::StartSlowChatTimer() {

	// Reset timer to begin at max time if it is at zero
	if (time == 0.0f) {
		time = MAX_TIME;
	}

	// Start timing
	timing = true;

	
	world->GetTimerManager().SetTimer(SCTimerHandle, this, &UToxicChatHUD::UpdateSlowChatTimer, 1.0f, true, 1.0f);
	
	
}

void UToxicChatHUD::UpdateSlowChatTimer() {
	//if the timer is running, take 1 second from the time and update the string
	if (timing == true) {
		time--;
		currentTime = FString::SanitizeFloat(time);

		// If the time reaches 0, stop the timer.
		if (time <= 0.0f) {
			timing = false;
			time = 0.0f;
			world->GetTimerManager().ClearTimer(SCTimerHandle);
		}
	}
}

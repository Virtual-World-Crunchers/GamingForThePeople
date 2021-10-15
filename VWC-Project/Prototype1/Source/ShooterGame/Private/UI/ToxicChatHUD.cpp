// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/ToxicChatHUD.h"
#include "Math/UnrealMathUtility.h"
#include "UI/Widgets/SChatWidget.h"

static bool slowChat;
static bool filterChat;

UToxicChatHUD::UToxicChatHUD() {
	slowChat = false;
	filterChat = false;
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

/*
FReply UToxicChatHUD::ToggleFilterChat() const{
	if (filterChat) {
		filterChat = false;
	}
	else {
		filterChat = true;
	}

	return FReply::Handled();
}
*/

bool UToxicChatHUD::GetSlowChat() {
	return slowChat;
}

bool UToxicChatHUD::GetFilterChat() {
	return filterChat;
}

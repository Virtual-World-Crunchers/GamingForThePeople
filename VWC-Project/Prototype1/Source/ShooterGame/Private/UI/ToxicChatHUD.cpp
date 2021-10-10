// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/ToxicChatHUD.h"
#include "Math/UnrealMathUtility.h"

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
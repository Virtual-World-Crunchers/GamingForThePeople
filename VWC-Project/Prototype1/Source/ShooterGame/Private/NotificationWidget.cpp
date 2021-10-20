// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterGame.h"
#include "NotificationWidget.h"
#include "ToxicChatHUD.h"

UNotificationWidget::UNotificationWidget(const FObjectInitializer& ObjectInitalizer) :Super(ObjectInitalizer) {

}

void UNotificationWidget::NativeConstruct() {
	Super::NativeConstruct();
}

void UNotificationWidget::UpdateText(FText text) {
	if (TXT) {
		if (TXT->Visibility == ESlateVisibility::Hidden) {
			TXT->SetVisibility(ESlateVisibility::Visible);
		}
		TXT->SetText(text);
	}
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "VGP221_ShootaMan/GUI/PlayerUserWidget.h"

void UPlayerUserWidget::NativeConstruct()
{
	SetHealthBar(1.0f);

	/*if (ButtonWidgetPrefab) {
		for (int i = 0; i < 4; i++)
		{
			UUserWidget* widget = CreateWidget(this, ButtonWidgetPrefab);
			ButtonContainer->AddChildToVerticalBox(widget);

			UButtonWidget* button = Cast<UButtonWidget>(widget); // Get Component in UE5
			button->SetText(i);
		}
	}*/
}

void UPlayerUserWidget::SetHealthBar(float percentage)
{
	if (!HealthBar) return;

	HealthBar->SetPercent(percentage);
}
// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerGameMode.h"

void APlayerGameMode::StartPlay()
{
	Super::StartPlay(); // Calls base function

	check(GEngine != nullptr)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Starting FPS Map")));

	ChangeMenuWidget(UserWidgetPrefab);
}

void APlayerGameMode::ChangeMenuWidget(TSubclassOf<UPlayerUserWidget> NewWidgetClass)
{
	// 1. If we have one, remove it
	if (CurrentWidget != nullptr) {
		CurrentWidget->RemoveFromParent();
		CurrentWidget = nullptr;
	}

	// 2. If we don't one, add it the viewport
	if (NewWidgetClass != nullptr) {
		CurrentWidget = CreateWidget<UPlayerUserWidget>(GetWorld(), NewWidgetClass);
		CurrentWidget->AddToViewport();
	}
}
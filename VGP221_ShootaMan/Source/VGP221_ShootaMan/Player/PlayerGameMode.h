// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Logging/StructuredLog.h"
#include "VGP221_ShootaMan/GUI/PlayerUserWidget.h"
#include "PlayerGameMode.generated.h"

/**
 *
 */
UCLASS()
class VGP221_SHOOTAMAN_API APlayerGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void StartPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GUI")
	TSubclassOf<UPlayerUserWidget> UserWidgetPrefab;

	UFUNCTION(BlueprintCallable, Category = "GUI")
	void ChangeMenuWidget(TSubclassOf<UPlayerUserWidget> NewWidgetClass);

	UPROPERTY()
	UPlayerUserWidget* CurrentWidget;
};

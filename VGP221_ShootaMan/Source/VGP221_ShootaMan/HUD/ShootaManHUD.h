// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "PlayerCharacter.h"
#include "ShootaManHUD.generated.h"

/**
 * 
 */
UCLASS()
class VGP221_SHOOTAMAN_API AShootaManHUD : public AHUD
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* CrosshairTexture;

public:
	virtual void DrawHUD() override;

private:
	void DrawScore();
};

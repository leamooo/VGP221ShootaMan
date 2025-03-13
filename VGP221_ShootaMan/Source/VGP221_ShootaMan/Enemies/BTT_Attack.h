// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Kismet/GameplayStatics.h"
#include "VGP221_ShootaMan/Enemies/EnemyAIController.h"
#include "VGP221_ShootaMan/Public/PlayerCharacter.h"
#include "Engine/DamageEvents.h"
#include "BTT_Attack.generated.h"

/**
 * 
 */
UCLASS()
class VGP221_SHOOTAMAN_API UBTT_Attack : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

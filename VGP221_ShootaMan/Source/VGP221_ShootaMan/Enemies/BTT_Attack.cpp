// Fill out your copyright notice in the Description page of Project Settings.


#include "VGP221_ShootaMan/Enemies/BTT_Attack.h"

EBTNodeResult::Type UBTT_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)

{
	APlayerCharacter* Player = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	//Test code to hurt the player
	float DamageAmount = 5.0f;
	
	AEnemyAIController* AIOwner = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	if (!AIOwner) return EBTNodeResult::Failed;

	// Take Damage
	Player->TakeDamage(DamageAmount, FDamageEvent(), AIOwner, AIOwner->GetPawn());
	
	return EBTNodeResult::Succeeded;
}
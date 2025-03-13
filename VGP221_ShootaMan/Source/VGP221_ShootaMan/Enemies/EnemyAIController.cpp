// Fill out your copyright notice in the Description page of Project Settings.


#include "VGP221_ShootaMan/Enemies/EnemyAIController.h"

AEnemyAIController::AEnemyAIController()
{
	PrimaryActorTick.bCanEverTick = true;

	if (!PawnSensing) {

		PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));

		PawnSensing->OnSeePawn.AddDynamic(this, &AEnemyAIController::OnSeePawn);
	}
}

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	RunBehaviorTree(StartingBehaviorTree);
}

void AEnemyAIController::OnSeePawn(APawn* PlayerPawn)
{
	APlayerCharacter* player = Cast<APlayerCharacter>(PlayerPawn);
	if (!player) return;

	SetCanSeePlayer(true, player);


}

void AEnemyAIController::SetCanSeePlayer(bool SeePlayer, UObject* Player)
{
	UBlackboardComponent* bb = GetBlackboardComponent();
	bb->SetValueAsBool(FName("CanSeePlayer"), SeePlayer);

	if (SeePlayer)
	{
		bb->SetValueAsObject(FName("PlayerTarget"), Player);
	}
}

void AEnemyAIController::RunTriggerableTimer()
{
	GetWorldTimerManager().ClearTimer(RetriggerableTimerHandle);

	FunctionDelegate.BindUFunction(this, FName("SetCanSeePlayer"), false, GetPawn());

	GetWorldTimerManager().SetTimer(RetriggerableTimerHandle, FunctionDelegate, PawnSensing->SensingInterval * 1.0f, false);
}

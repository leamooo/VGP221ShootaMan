#include "PickUp.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"

// Sets default values
APickUp::APickUp()
{
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	RootComponent = SphereComponent;

	SphereComponent->InitSphereRadius(50.f);

	SphereComponent->SetSphereRadius(50.f);
	SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);


	static ConstructorHelpers::FObjectFinder<UStaticMesh> PickUpMesh(TEXT("Engine/Content/EditorMeshes/ArcadeEditorSphere.uasset"));
	if (PickUpMesh.Succeeded())
	{
		MeshComponent->SetStaticMesh(PickUpMesh.Object);
	}

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &APickUp::OnOverlapBegin);

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &APickUp::OnOverlapBegin);
}

void APickUp::BeginPlay()
{
	Super::BeginPlay();
}

void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APickUp::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this && OtherComp)
	{
		APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(OtherActor);
		if (PlayerCharacter)
		{
			PlayerCharacter->AddScore(10);
		}

		Destroy();
	}
}

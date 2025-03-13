#include "PickUp.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"

// Sets default values
APickUp::APickUp()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a Sphere Component and set it as the root component
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	RootComponent = SphereComponent;

	// Set the radius of the sphere
	SphereComponent->InitSphereRadius(50.f);

	// Set the sphere to trigger overlap events
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

	// Bind the overlap event
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &APickUp::OnOverlapBegin);

	// Bind the overlap event
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &APickUp::OnOverlapBegin);
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Function that handles the collision with the player
void APickUp::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	// Check if the player has overlapped
	if (OtherActor && OtherActor != this && OtherComp)
	{
		// Check if the actor is a player character (adjust this check to match your class)
		APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(OtherActor);
		if (PlayerCharacter)
		{
			PlayerCharacter->AddScore(10);
		}

		// Destroy the PickUp
		Destroy();
	}
}

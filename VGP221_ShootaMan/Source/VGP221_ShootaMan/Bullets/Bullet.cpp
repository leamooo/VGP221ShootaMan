// Fill out your copyright notice in the Description page of Project Settings.

#include "VGP221_ShootaMan/Bullets/Bullet.h"
#include "Vgp221_ShootaMan/Enemies/EnemyAICharacter.h"

// Sets default values
ABullet::ABullet()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!CollisionComponent) {
		CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
		CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
		CollisionComponent->InitSphereRadius(15.0f);
		CollisionComponent->OnComponentHit.AddDynamic(this, &ABullet::OnHit);
		RootComponent = CollisionComponent;
	}

	if (!ProjectileMovement) {
		ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
		ProjectileMovement->SetUpdatedComponent(CollisionComponent);
		ProjectileMovement->InitialSpeed = BulletSpeed;
		ProjectileMovement->MaxSpeed = BulletSpeed;
		ProjectileMovement->bRotationFollowsVelocity = true;
		ProjectileMovement->bShouldBounce = false;
		ProjectileMovement->Bounciness = 0.3f;
		ProjectileMovement->ProjectileGravityScale = 0.0f;
	}

	if (!ProjectileMeshComponent)
	{
		ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMesh(TEXT("/Game/Mesh/Projectile/Sphere.Sphere"));
		if (SphereMesh.Succeeded())
		{
			ProjectileMeshComponent->SetStaticMesh(SphereMesh.Object);
		}

		ProjectileMeshComponent->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
		ProjectileMeshComponent->SetupAttachment(RootComponent);
	}

	InitialLifeSpan = 3.0f; // Unity Start Calling Destroy(3.0f)
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Prevent self-collision
	if (!OtherActor || OtherActor == this)
	{
		return;
	}

	// Apply impulse if colliding with a physics object
	if (OtherComp && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(ProjectileMovement->Velocity * 100.0f, Hit.ImpactPoint);
		UE_LOG(LogTemp, Warning, TEXT("Bullet hit a physics object"));
	}

	// Deal damage if hitting an enemy
	AEnemyAICharacter* Enemy = Cast<AEnemyAICharacter>(OtherActor);
	if (Enemy)
	{
		UGameplayStatics::ApplyDamage(Enemy, 25.0f, nullptr, this, UDamageType::StaticClass());
		UE_LOG(LogTemp, Warning, TEXT("Bullet hit an enemy! Dealing damage."));
	}
	// Destroy bullet after dealing 1 instance of damage
	Destroy();
}
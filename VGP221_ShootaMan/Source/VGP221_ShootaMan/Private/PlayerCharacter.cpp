#include "PlayerCharacter.h"
#include "VGP221_ShootaMan/Bullets/Bullet.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Initialize Camera
    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(RootComponent);
    Camera->bUsePawnControlRotation = true;

    // WeaponSocket Location
    WeaponSocketOffset.Set(115.f, 20.f, 0.f);

    // Create WeaponSocket as a child of Camera
    WeaponSocket = CreateDefaultSubobject<USceneComponent>(TEXT("WeaponSocket"));
    WeaponSocket->SetupAttachment(Camera);
    WeaponSocket->SetRelativeLocation(WeaponSocketOffset);

    // Create Weapon Mesh Component
    WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    WeaponMesh->SetupAttachment(WeaponSocket);
    WeaponMesh->SetRelativeScale3D(FVector(0.2f)); // Scale to 0.2
    WeaponMesh->SetRelativeRotation(FRotator(23.f, 0.f, 0.f)); // Rotate 23 degrees on Y-axis

    // Create Muzzle Scene Component
    Muzzle = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle"));
    Muzzle->SetupAttachment(WeaponSocket); // Attach it to WeaponSocket
    Muzzle->SetRelativeLocation(FVector(20.f, 0.f, -10.f));

    // Score Setup
    PlayerScore = 0;

    // Health Setup
    CurrentHealth = MaxHealth;


    // Load Skeletal Mesh in Constructor
    static ConstructorHelpers::FObjectFinder<USkeletalMesh> GunMesh(TEXT("/Game/Guns/Pistol/low-poly_kimber_k6s.low-poly_kimber_k6s"));
    if (GunMesh.Succeeded())
    {
        WeaponMesh->SetSkeletalMesh(GunMesh.Object);
        UE_LOG(LogTemp, Warning, TEXT("Weapon mesh successfully loaded!"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load weapon mesh! Check file path."));
    }

    // Set the bullet class reference (optional, you can set this in the editor too)
    static ConstructorHelpers::FClassFinder<ABullet> BulletObj(TEXT("/Game/Blueprints/BP_Bullet"));
    if (BulletObj.Succeeded())
    {
        BulletActor = BulletObj.Class;
    }
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
    Super::BeginPlay();




}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
    PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);
    PlayerInputComponent->BindAxis("MousePitch", this, &APlayerCharacter::MousePitch);
    PlayerInputComponent->BindAxis("MouseYaw", this, &APlayerCharacter::MouseYaw);
    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayerCharacter::Fire);
}

// Movement and mouse control functions
void APlayerCharacter::MoveForward(float InputValue)
{
    AddMovementInput(GetActorForwardVector(), InputValue);
}

void APlayerCharacter::MoveRight(float InputValue)
{
    AddMovementInput(GetActorRightVector(), InputValue);
}

void APlayerCharacter::MousePitch(float InputValue)
{
    AddControllerPitchInput(InputValue);
}

void APlayerCharacter::MouseYaw(float InputValue)
{
    AddControllerYawInput(InputValue);
}

void APlayerCharacter::AddScore(int32 Amount)
{
    PlayerScore += Amount;
}

void APlayerCharacter::Fire()
{
    if (BulletActor)
    {
        // Get camera location and rotation
        FVector CameraLocation;
        FRotator CameraRotation;
        GetController()->GetPlayerViewPoint(CameraLocation, CameraRotation); // Get aim direction

        // Define the local offset in gun space
        FVector LocalOffset(135.f, 20.f, -10.f);

        // Transform the offset into world space relative to the camera rotation
        FVector SpawnLocation = CameraLocation + CameraRotation.RotateVector(LocalOffset);

        // Ensure the bullet spawns with the correct aim rotation
        FRotator SpawnRotation = CameraRotation;

        // Spawn the projectile
        ABullet* Bullet = GetWorld()->SpawnActor<ABullet>(BulletActor, SpawnLocation, SpawnRotation);

        if (Bullet)
        {
            // Set initial velocity using the camera's actual forward direction
            FVector LaunchDirection = SpawnRotation.Vector(); // Corrected to use SpawnRotation
            Bullet->ProjectileMovement->Velocity = LaunchDirection * 2000.f; // Adjust speed
            Bullet->ProjectileMovement->Activate(); // Start movement

            // Ensure rotation follows the aim
            Bullet->SetActorRotation(SpawnRotation);
        }
    }
}

float APlayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

    //Easy way to acccess the gamemode
   APlayerGameMode* Gamemode = Cast<APlayerGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
    if (Gamemode) 
    {
        CurrentHealth -= DamageAmount;
        float HealthPercent = CurrentHealth / MaxHealth;

        Gamemode->CurrentWidget->SetHealthBar(HealthPercent);
    }

    return FinalDamage;
}
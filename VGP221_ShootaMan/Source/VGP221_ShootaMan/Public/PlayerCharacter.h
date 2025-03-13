#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "VGP221_ShootaMan/Player/PlayerGamemode.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.generated.h"

class ABullet;

UCLASS()
class VGP221_SHOOTAMAN_API APlayerCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    APlayerCharacter();

    UPROPERTY(BlueprintReadWrite, Category = "Score")
    int32 PlayerScore;

    void AddScore(int32 Amount);

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Setup input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(EditDefaultsOnly, Category = "Health")
    float MaxHealth = 100.0f;

    UPROPERTY(VisibleAnywhere, Category = "Health")
    float CurrentHealth;


protected:
    // Camera component for the player character
    UPROPERTY(EditAnywhere)
    class UCameraComponent* Camera;

    // Function to spawn and fire the bullet
	UFUNCTION()
	void Fire();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USceneComponent* Muzzle;


    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector WeaponSocketOffset;

    // Scene component for weapon attachment
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    class USceneComponent* WeaponSocket;

     // Skeletal mesh for the weapon
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    class USkeletalMeshComponent* WeaponMesh;

    // Connecting a prefab in blueprints. Similar to Unity gameobjects drag and drop
    UPROPERTY(EditAnywhere, Category = "Bullet")
    TSubclassOf<class ABullet> BulletActor;

    // Movement and mouse input functions
    void MoveForward(float InputValue);
    void MoveRight(float InputValue);

    void MousePitch(float InputValue);
    void MouseYaw(float InputValue);

public:
    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
};
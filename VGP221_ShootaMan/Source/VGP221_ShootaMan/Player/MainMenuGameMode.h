#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "VGP221_ShootaMan/HUD/MainMenuWidget.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameMode.generated.h"

/**
 *
 */
UCLASS()
class VGP221_SHOOTAMAN_API AMainMenuGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AMainMenuGameMode();

    virtual void StartPlay() override;

    // Field to assign the Main Menu Widget class in the editor
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GUI")
    TSubclassOf<UMainMenuWidget> UserWidgetPrefab;

    // Function to change the widget at runtime
    UFUNCTION(BlueprintCallable, Category = "GUI")
    void ChangeMainMenuWidget(TSubclassOf<UMainMenuWidget> NewWidgetClass);

private:
    // Current instance of the Main Menu Widget
    UPROPERTY()
    UMainMenuWidget* CurrentWidget;
};

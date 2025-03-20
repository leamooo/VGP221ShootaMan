#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainMenuPlayerController.generated.h"

/**
 *
 */
UCLASS()
class VGP221_SHOOTAMAN_API AMainMenuPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    AMainMenuPlayerController();
   
    // Show the main menu
    void ShowMainMenu();


protected:
    virtual void BeginPlay() override;

    // Pointer to the actual widget instance
    UPROPERTY()
    class UMainMenuWidget* MainMenuWidget;

    // Widget class for the main menu
    TSubclassOf<UUserWidget> MainMenuWidgetClass;
private:

};

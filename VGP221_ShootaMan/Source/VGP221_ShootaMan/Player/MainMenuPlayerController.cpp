#include "MainMenuPlayercontroller.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "MainMenuPlayerController.h"
#include "VGP221_ShootaMan/HUD/MainMenuWidget.h"

AMainMenuPlayerController::AMainMenuPlayerController()
{
    // Default widget class for the Main Menu
    static ConstructorHelpers::FClassFinder<UUserWidget> MainMenuWidgetObj(TEXT("/Game/UI/MainMenuWidget"));
    if (MainMenuWidgetObj.Succeeded())
    {
        MainMenuWidgetClass = MainMenuWidgetObj.Class;
    }
}

void AMainMenuPlayerController::BeginPlay()
{
    Super::BeginPlay();

    // Show the main menu
    ShowMainMenu();
}

void AMainMenuPlayerController::ShowMainMenu()
{
    if (MainMenuWidgetClass)
    {
        MainMenuWidget = CreateWidget<UMainMenuWidget>(this, MainMenuWidgetClass);
        if (MainMenuWidget)
        {
            MainMenuWidget->AddToViewport();

            // Set the input mode to UI only so the mouse can interact with the menu
            FInputModeUIOnly InputMode;
            SetInputMode(InputMode);
            bShowMouseCursor = true;
        }
    }
}

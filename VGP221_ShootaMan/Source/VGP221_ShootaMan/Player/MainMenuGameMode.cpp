#include "MainMenuGameMode.h"
#include "MainMenuPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

AMainMenuGameMode::AMainMenuGameMode()
{
    // Set the custom PlayerController class to use in the main menu
    PlayerControllerClass = AMainMenuPlayerController::StaticClass();
}
void AMainMenuGameMode::StartPlay()
{
    Super::StartPlay();

    if (UserWidgetPrefab != nullptr)
    {
        CurrentWidget = CreateWidget<UMainMenuWidget>(GetWorld(), UserWidgetPrefab);
        if (CurrentWidget)
        {
            CurrentWidget->AddToViewport();
            UE_LOG(LogTemp, Warning, TEXT("MainMenuWidget has been added to the viewport"));

            // Set input mode to UIOnly for the menu interaction
            if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0))
            {
                FInputModeUIOnly InputMode;
                PlayerController->SetInputMode(InputMode);
                PlayerController->bShowMouseCursor = true;
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to create MainMenuWidget!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("UserWidgetPrefab is not set!"));
    }
}


void AMainMenuGameMode::ChangeMainMenuWidget(TSubclassOf<UMainMenuWidget> NewWidgetClass)
{
    // If we already have a widget, remove it from the viewport
    if (CurrentWidget != nullptr)
    {
        CurrentWidget->RemoveFromParent();
        CurrentWidget = nullptr;
    }

    // If we have a new widget class, create and add it to the viewport
    if (NewWidgetClass != nullptr)
    {
        CurrentWidget = CreateWidget<UMainMenuWidget>(GetWorld(), NewWidgetClass);
        if (CurrentWidget)
        {
            CurrentWidget->AddToViewport();
        }
    }
}

#include "MainMenuWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "PlayerCharacter.h"  // Include your player character class
#include "Engine/World.h"
#include "TimerManager.h"  // For delayed execution of character possession
#include "GameFramework/Character.h"  // For getting the character after level load

void UMainMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Check if the buttons are valid and bind the onClick events
    if (PlayButton)
    {
        PlayButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnPlayClicked);
    }

    if (OptionsButton)
    {
        OptionsButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnOptionsClicked);
    }

    if (QuitButton)
    {
        QuitButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnQuitClicked);
    }
}

void UMainMenuWidget::OnPlayClicked()
{
    // Define the name of the level you want to load
    FString LevelName = "ShootaManLevel";  // Your level name

    // Specify the game mode to use in the new level
    FName GameModeName = APlayerGameMode::StaticClass()->GetFName(); // Replace with your custom GameMode class

    // Start loading the level with the specified GameMode
    UGameplayStatics::OpenLevel(this, FName(*LevelName), true, FString("GameMode=") + GameModeName.ToString());

    // Set a delay to wait for the level to fully load and the player character to be available
    GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UMainMenuWidget::PossessActiveCharacter);
}

void UMainMenuWidget::PossessActiveCharacter()
{
    // Get the Player Controller
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
    if (PlayerController)
    {
        // Get the currently possessed character (or spawn a new one if necessary)
        ACharacter* Character = Cast<ACharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
        if (Character)
        {
            // Possess the character (ensure the character is properly possessed)
            PlayerController->Possess(Character);
        }
    }
}

void UMainMenuWidget::OnOptionsClicked()
{
    // Logic for options button (e.g., open settings menu)
    UE_LOG(LogTemp, Warning, TEXT("Options button clicked"));

    // You can either open another menu or show settings
    // For example, opening a separate widget for the options menu.
}

void UMainMenuWidget::OnQuitClicked()
{
    // Logic for quitting the game
    UE_LOG(LogTemp, Warning, TEXT("Quit button clicked"));

    // Quit the game
    UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);
}

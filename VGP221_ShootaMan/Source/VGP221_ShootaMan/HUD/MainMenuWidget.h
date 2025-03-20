#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MainMenuWidget.generated.h"

/**
 *
 */
UCLASS()
class VGP221_SHOOTAMAN_API UMainMenuWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    // Setup buttons' actions in the widget
    UFUNCTION(BlueprintCallable, Category = "Main Menu")
    void OnPlayClicked();

    UFUNCTION(BlueprintCallable, Category = "Main Menu")
    void OnOptionsClicked();

    UFUNCTION(BlueprintCallable, Category = "Main Menu")
    void OnQuitClicked();

    void PossessActiveCharacter();

protected:
    virtual void NativeConstruct() override;

    // Button variables that you can bind to in C++ code
    UPROPERTY(meta = (BindWidget))
    UButton* PlayButton;

    UPROPERTY(meta = (BindWidget))
    UButton* OptionsButton;

    UPROPERTY(meta = (BindWidget))
    UButton* QuitButton;
};

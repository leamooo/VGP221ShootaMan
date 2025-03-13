// Fill out your copyright notice in the Description page of Project Settings.


#include "VGP221_ShootaMan/HUD/ShootaManHUD.h"
#include "ShootaManHUD.h"
#include "PlayerCharacter.h"
#include "GameFramework/PlayerController.h"

void AShootaManHUD::DrawHUD()
{
	Super::DrawHUD();
	DrawScore();

		if (!CrosshairTexture) return;

		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5);
		FVector2D CrosshairHalfSize(CrosshairTexture->GetSurfaceWidth() * 0.5, CrosshairTexture->GetSurfaceHeight() * 0.5);
		FVector2D CrosshairDrawPosition(Center.X - CrosshairHalfSize.X, Center.Y - CrosshairHalfSize.Y);

		FCanvasTileItem TileItem(CrosshairDrawPosition, CrosshairTexture->GetResource(), FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
			Canvas->DrawItem(TileItem);
}

void AShootaManHUD::DrawScore()
{
    APlayerController* PlayerController = GetOwningPlayerController();
    if (PlayerController)
    {
        APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(PlayerController->GetPawn());
        if (PlayerCharacter)
        {
            FString ScoreText = FString::Printf(TEXT("Score: %d"), PlayerCharacter->PlayerScore);
            FVector2D ScreenPosition(50.f, 50.f);  // Adjust position as needed
            FCanvasTextItem TextItem(ScreenPosition, FText::FromString(ScoreText), GEngine->GetLargeFont(), FLinearColor::Red);
            TextItem.Scale = FVector2D(2.0f, 2.0f); // Increase scale of text
            Canvas->DrawItem(TextItem);
        }
    }
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"


void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if(HUDOverlayAsset)
	{
		HUDOverlay = CreateWidget<UUserWidget>(this, HUDOverlayAsset);
		if(HUDOverlay)
		{
			HUDOverlay->AddToViewport();
			HUDOverlay->SetVisibility(ESlateVisibility::Visible);
		}
	}

	if(GameoverWidgetAsset)
	{
		GameoverWidget = CreateWidget<UUserWidget>(this, GameoverWidgetAsset);
		if(GameoverWidget)
		{
			GameoverWidget->AddToViewport();
			GameoverWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	
	SetInputMode(FInputModeGameOnly());
}

void AMainPlayerController::ShowGameoverWidget()
{
	if(GameoverWidget)
	{
		GameoverWidget->SetVisibility(ESlateVisibility::Visible);
		SetPause(true);
		SetInputMode(FInputModeUIOnly());		
		bShowMouseCursor = true;
	}
}

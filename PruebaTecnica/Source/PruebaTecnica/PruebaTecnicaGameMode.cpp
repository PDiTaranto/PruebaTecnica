// Copyright Epic Games, Inc. All Rights Reserved.

#include "PruebaTecnicaGameMode.h"
#include "PruebaTecnicaHUD.h"
#include "PruebaTecnicaCharacter.h"
#include "UObject/ConstructorHelpers.h"

APruebaTecnicaGameMode::APruebaTecnicaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APruebaTecnicaHUD::StaticClass();
}

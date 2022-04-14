// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PruebaTecnicaHUD.generated.h"

UCLASS()
class APruebaTecnicaHUD : public AHUD
{
	GENERATED_BODY()

public:
	APruebaTecnicaHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


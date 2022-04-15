// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "EnemyRange.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBATECNICA_API AEnemyRange : public AEnemy
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Attack() override;
	
	
};

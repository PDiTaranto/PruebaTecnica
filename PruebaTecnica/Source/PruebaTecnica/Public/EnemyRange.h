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
	AEnemyRange();
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AEnemyProjectile> ProjectileClass;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USceneComponent* FP_MuzzleLocation;

protected:
	virtual void Attack() override;

	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
	
};

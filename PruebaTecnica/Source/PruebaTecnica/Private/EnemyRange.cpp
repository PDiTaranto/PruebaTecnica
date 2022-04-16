// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyRange.h"
#include "EnemyProjectile.h"


AEnemyRange::AEnemyRange()
{
	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(GetRootComponent());
}

void AEnemyRange::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemyRange::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemyRange::Attack()
{
	if(ProjectileClass != nullptr)
	{
		FVector SpawnLocation = FP_MuzzleLocation->GetComponentLocation();
		FRotator SpawnRotation = GetActorRotation();
		AEnemyProjectile* Projectile = GetWorld()->SpawnActor<AEnemyProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
		Projectile->SetOwner(this);
	}
}

float AEnemyRange::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

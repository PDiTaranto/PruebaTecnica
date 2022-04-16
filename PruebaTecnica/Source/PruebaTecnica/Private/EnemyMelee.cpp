// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyMelee.h"
#include "PruebaTecnica//PruebaTecnicaCharacter.h"
#include "Kismet/GameplayStatics.h"

void AEnemyMelee::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemyMelee::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemyMelee::Attack()
{
	APruebaTecnicaCharacter* Player = Cast<APruebaTecnicaCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (Player)
	{
		//Apply damage using ApplyDamage function
		UGameplayStatics::ApplyDamage(Player, Damage, Player->GetController(), this, nullptr);
	}
	Destroy();
}

float AEnemyMelee::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

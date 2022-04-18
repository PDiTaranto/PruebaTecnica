// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelEnd.h"

#include "MainPlayerController.h"
#include "Components/BoxComponent.h"
#include "PruebaTecnica/PruebaTecnicaCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values
ALevelEnd::ALevelEnd()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(GetRootComponent());
	

}

void ALevelEnd::BeginPlay()
{
	Super::BeginPlay();
	
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ALevelEnd::OnOverlap);

	if(ParticleSystem)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleSystem, GetActorLocation(), FRotator::ZeroRotator, true);
	}
}

void ALevelEnd::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALevelEnd::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult)
{
	if(OtherActor)
	{
		APruebaTecnicaCharacter* Player = Cast<APruebaTecnicaCharacter>(OtherActor);
		if (Player)
		{
			AMainPlayerController* PlayerController = Cast<AMainPlayerController>(Player->GetController());
			if(PlayerController)
			{
				PlayerController->ShowGameoverWidget();
			}
		}
	}
}


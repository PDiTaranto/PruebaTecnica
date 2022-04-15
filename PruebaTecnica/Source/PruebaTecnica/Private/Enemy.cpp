// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
#include "EnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PruebaTecnica/PruebaTecnicaCharacter.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AgroSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AgroSphere"));
	AgroSphere->SetupAttachment(GetRootComponent());
	
	AgroSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	AgroSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);	

	CombatSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CombatSphere"));
	CombatSphere->SetupAttachment(GetRootComponent());
	
	CombatSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CombatSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	AgroSphere->OnComponentBeginOverlap.AddDynamic(
		this,
		&AEnemy::AgroSphereOverlap);

	AgroSphere->OnComponentEndOverlap.AddDynamic(
		this,
		&AEnemy::AgroSphereEndOverlap);

	CombatSphere->OnComponentBeginOverlap.AddDynamic(
		this,
		&AEnemy::CombatSphereOverlap);

	CombatSphere->OnComponentEndOverlap.AddDynamic(
		this,
		&AEnemy::CombatSphereEndOverlap);

	EnemyController = Cast<AEnemyController>(GetController());
	
	const FVector WorldPatrolPoint = UKismetMathLibrary::TransformLocation(
		GetActorTransform(),
		PatrolPoint);
	
	const FVector WorldPatrolPoint2 = UKismetMathLibrary::TransformLocation(
		GetActorTransform(),
		PatrolPoint2);

	DrawDebugSphere(GetWorld(),
					WorldPatrolPoint,
					25.f,
					12,
					FColor::Red,
				true);
	DrawDebugSphere(GetWorld(),
					WorldPatrolPoint2,
					25.f,
					12,
					FColor::Red,
					true);

	if(EnemyController)
	{
		EnemyController->GetBlackboardComponent()->SetValueAsVector(TEXT(
		"PatrolPoint"),
		WorldPatrolPoint);

		EnemyController->GetBlackboardComponent()->SetValueAsVector(TEXT(
		"PatrolPoint2"),
		WorldPatrolPoint2);

		EnemyController->RunBehaviorTree(BehaviorTree);
	}
	
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::AgroSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor == nullptr) return;
	auto Character = Cast<APruebaTecnicaCharacter>(OtherActor);
	if(Character)
	{
		EnemyController->GetBlackboardComponent()->SetValueAsObject(
			TEXT("Target"),
			Character);
	}
}

void AEnemy::AgroSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(OtherActor == nullptr) return;
	auto Character = Cast<APruebaTecnicaCharacter>(OtherActor);
	if(Character)
	{
		EnemyController->GetBlackboardComponent()->SetValueAsObject(
			TEXT("Target"),
			nullptr);
	}
}



void AEnemy::CombatSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor == nullptr) return;
	auto Character = Cast<APruebaTecnicaCharacter>(OtherActor);
	if(Character)
	{
		EnemyController->GetBlackboardComponent()->SetValueAsBool(
			TEXT("TargetInRange"),
			true);
	}
}

void AEnemy::CombatSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(OtherActor == nullptr) return;
	auto Character = Cast<APruebaTecnicaCharacter>(OtherActor);
	if(Character)
	{
		EnemyController->GetBlackboardComponent()->SetValueAsBool(
			TEXT("TargetInRange"),
			false);
	}
}

void AEnemy::Attack()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Attack"));
}

void AEnemy::TargetOnView()
{
	FVector StartPoint = GetActorLocation() + FVector(0.f, 0.f, 20.f);
	//get player pawn
	APruebaTecnicaCharacter* Player = Cast<APruebaTecnicaCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if(Player == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player is null"));
		return;
	}
	FVector EndPoint = Player->GetActorLocation() + FVector(0.f, 0.f, 20.f);
	FHitResult HitResult;
	GetWorld()->LineTraceSingleByChannel(HitResult, StartPoint, EndPoint, ECollisionChannel::ECC_Visibility);
	if(HitResult.bBlockingHit)
	{
		if(HitResult.GetActor() == Player)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player is in view"));
			EnemyController->GetBlackboardComponent()->SetValueAsBool(
				TEXT("TargetOnView"),
				true);
		}
		else
		{
			EnemyController->GetBlackboardComponent()->SetValueAsBool(
				TEXT("TargetOnView"),
				false);
		}
	}
	else
	{
		EnemyController->GetBlackboardComponent()->SetValueAsBool(
			TEXT("TargetOnView"),
			false);
	}
	
}


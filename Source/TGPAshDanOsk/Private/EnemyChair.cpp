// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyChair.h"


// Sets default values
AEnemyChair::AEnemyChair()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyChair::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyChair::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyChair.generated.h"

UCLASS()
class AEnemyChair : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyChair();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* ChairBody;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* ChairLegFrontLeft;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* ChairLegFrontRight;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* ChairLegBackLeft;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* ChairLegBackRight;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

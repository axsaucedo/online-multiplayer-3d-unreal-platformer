// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORM3D_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMovingPlatform();

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float PlatformMoveSpeed = 100;

	UPROPERTY(EditAnywhere, Meta=(MakeEditWidget=true))
	FVector TargetLocation;

private:
	FVector GlobalTargetLocation;
	FVector GlobalStartLocation;
};

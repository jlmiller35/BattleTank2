// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Math/UnrealMathUtility.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK2_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// -1 is max downward movement and +1 is max upward movement
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditAnywhere)
	float MaxDegreesPerSecond = 5;  

	UPROPERTY(EditAnywhere)
	float MaxElevationDegrees = 40;

	UPROPERTY(EditAnywhere)
	float MinElevationDegrees = 0;


};

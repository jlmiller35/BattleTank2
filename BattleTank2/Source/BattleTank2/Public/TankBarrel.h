// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK2_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void Elevate(float DegreesePerSecond);
	
private:
	UPROPERTY(EditAnywhere)
	float MaxDegreesPerSecond = 20;  

	UPROPERTY(EditAnywhere)
	float MaxElevationDegrees = 40;

	UPROPERTY(EditAnywhere)
	float MinElevationDegrees = 0;


};

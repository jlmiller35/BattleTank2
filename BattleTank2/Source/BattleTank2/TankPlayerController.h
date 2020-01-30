// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK2_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

private:	
	ATank* GetControlledTank() const;

	//Start tank moving barrel toward target through crosshair
	void AimTowardsCrosshair();

	//Return an OUT parameter, true if hits landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
	
};

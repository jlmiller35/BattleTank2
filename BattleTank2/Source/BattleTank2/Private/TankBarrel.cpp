// Fill out your copyright notice in the Description page of Project Settings.


#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesePerSecond)
{
	//Move barrel the right amount this frame

	//given max elevation speed
	UE_LOG(LogTemp, Warning, TEXT("BarrelElevate() called at speed %f"), DegreesePerSecond);
}
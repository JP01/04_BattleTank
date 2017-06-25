// Created by JP Mackel 2017

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * Controls AI behaviour 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;
	
	float AcceptanceRadius = 3000; // How close the tank will get to player 
};

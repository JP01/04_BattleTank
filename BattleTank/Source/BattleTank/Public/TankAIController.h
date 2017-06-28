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
	
protected:

	UPROPERTY(EditDefaultsOnly, Category = "Setup") // Consider EditDefaultsOnly
	float AcceptanceRadius = 8000; // How close the tank will get to player 1000 = 10 cm

private:
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;


};

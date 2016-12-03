// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Creep.generated.h"

UCLASS()
class ALPHA_API ACreep : public AActor
{
	GENERATED_BODY()
	int int_health;
	int int_attack;
	int int_speed;
	int int_armor;
	int int_level;
	int int_levCost;
	int int_range;

	float flo_Dir;

	bool b_Alive;

	FVector Location;

public:	
	// Sets default values for this actor's properties
	ACreep();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	//Interactive functions
	void attack();
	void timer();
	void kill();
	
};

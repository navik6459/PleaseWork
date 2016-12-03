// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Tower.generated.h"

UCLASS()
class ALPHA_API ATower : public AActor
{
	GENERATED_BODY()
private:
	int int_health;
	int int_attack;
	int int_speed;
	int int_armor;
	int int_level;
	int int_levCost;
	int int_range;

	bool b_CanAttack;

	FVector TarLoc;
	FVector Location;


public:	
	// Sets default values for this actor's properties
	ATower();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	//Interactive functions
	FVector fetch_Target();
	void attack();
	void timer();

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = StaticMeshComponents)
		UStaticMesh* Ourvisible;
	
};

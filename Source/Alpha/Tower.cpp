// Fill out your copyright notice in the Description page of Project Settings.

#include "Alpha.h"
#include "Tower.h"


// Sets default values
ATower::ATower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATower::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATower::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

FVector ATower::fetch_Target()
{
	FVector temLoc;
	//Creep->GetActorLocation();
	return temLoc;
}
void ATower::attack()
{
	//Creep->GetActorLocation();
	//SpawnActor(UClass Projectile(Creep->GetActorLocation()), Location);
}
void ATower::timer()
{
	b_CanAttack = true;
}
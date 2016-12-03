// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Alpha.h"
#include "AlphaGameMode.h"
#include "AlphaPlayerController.h"
#include "AlphaCharacter.h"

AAlphaGameMode::AAlphaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAlphaPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
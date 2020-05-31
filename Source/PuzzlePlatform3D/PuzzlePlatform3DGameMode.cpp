// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzlePlatform3DGameMode.h"
#include "PuzzlePlatform3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzlePlatform3DGameMode::APuzzlePlatform3DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

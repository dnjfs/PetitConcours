// Copyright Epic Games, Inc. All Rights Reserved.

#include "PetitConcoursGameMode.h"
#include "PetitConcoursCharacter.h"
#include "UObject/ConstructorHelpers.h"

APetitConcoursGameMode::APetitConcoursGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

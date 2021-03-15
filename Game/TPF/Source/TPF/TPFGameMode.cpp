// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPFGameMode.h"
#include "TPFCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPFGameMode::ATPFGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

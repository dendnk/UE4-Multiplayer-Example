// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multiplayer_UE4GameMode.h"
#include "Multiplayer_UE4Character.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayer_UE4GameMode::AMultiplayer_UE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

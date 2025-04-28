// Copyright Epic Games, Inc. All Rights Reserved.

#include "IMGD4000_Tutorial_5GameMode.h"
#include "IMGD4000_Tutorial_5Character.h"
#include "UObject/ConstructorHelpers.h"

AIMGD4000_Tutorial_5GameMode::AIMGD4000_Tutorial_5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

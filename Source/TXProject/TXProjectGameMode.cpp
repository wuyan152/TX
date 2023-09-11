// Copyright Epic Games, Inc. All Rights Reserved.

#include "TXProjectGameMode.h"
#include "TXProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATXProjectGameMode::ATXProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

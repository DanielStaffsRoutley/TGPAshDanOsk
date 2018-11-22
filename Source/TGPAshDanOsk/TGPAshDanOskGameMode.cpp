// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TGPAshDanOskGameMode.h"
#include "TGPAshDanOskHUD.h"
#include "TGPAshDanOskCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATGPAshDanOskGameMode::ATGPAshDanOskGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATGPAshDanOskHUD::StaticClass();
}

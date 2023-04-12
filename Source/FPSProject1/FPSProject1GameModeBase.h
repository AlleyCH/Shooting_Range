// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSProject1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT1_API AFPSProject1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	virtual void StartPlay() override;
};

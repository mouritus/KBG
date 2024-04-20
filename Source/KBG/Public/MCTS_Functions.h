// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MCTS_Functions.generated.h"

/**
 * 
 */
UCLASS()
class KBG_API UMCTS_Functions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		// Every variables or function needs a tag above it for it to be used in UE5
		// does this need to be static?
		UFUNCTION(BlueprintCallable, Category = "MCTS")
			static void SimulateAI(FString name, FString& output);
};

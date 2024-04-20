// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class KBG_API AI_Simulator
{
public:
	AI_Simulator();
	~AI_Simulator();

	// Every variables or function needs a tag above it for it to be used in UE5
	UFUNCTION(BlueprintCallable, Category = "MCTS")
		void SimulateAI(FString name, FString& output);
};

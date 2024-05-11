// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <vector>
#include "CoreMinimal.h"
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
		//1. Nama character = characters | Tipe String
		//2. Tim Char(Ally / Musuh) = characterTeam | Tipe String
		//3. Pos_x(Pos x di board) = pos_X | Tipe int
		//4. Pos_y(Pos Y di board) = pos_Y | Tipe int 
		//5. Attack range tiap character = attackRange_X | Tipe int
		//6. Attack range tiap character = attackRange_Y | Tipe int
		UFUNCTION(BlueprintCallable, Category = "MCTS")
		static void SimulateAI(TArray<int32> input_NPCs, TArray<int32> input_NPC_Team, TArray<int32> input_pos_X, TArray<int32> input_pos_Y, TArray<int32> input_attackRange_X, TArray<int32> input_attackRange_Y, int32& actionTaken);
};

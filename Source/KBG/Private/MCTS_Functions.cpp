// Fill out your copyright notice in the Description page of Project Settings.

#include <vector>
#include "CoreMinimal.h"
#include "MCTS_Functions.h"


void UMCTS_Functions::SimulateAI(TArray<int32> input_NPCs, TArray<int32> input_NPC_Team, TArray<int32> input_pos_X, TArray<int32> input_pos_Y, TArray<int32> input_attackRange_X, TArray<int32> input_attackRange_Y, int32& actionTaken)
{
    // Store FStrings directly in an array
    int32* NPC_IDs = new int32[input_NPCs.Num()];
    for (int32 i = 0; i < input_NPCs.Num(); ++i) {
        NPC_IDs[i] = input_NPCs[i];
    }

    // Convert integers of NPC teams to array
    int32* NPC_Teams = new int32[input_NPC_Team.Num()];
    for (int32 i = 0; i < input_NPC_Team.Num(); ++i) {
        NPC_Teams[i] = input_NPC_Team[i];
    }

    // Convert Int of NPC positions to array
    int32* NPC_PosX = new int32[input_pos_X.Num()];
    for (int32 i = 0; i < input_pos_X.Num(); ++i) {
        NPC_PosX[i] = input_pos_X[i];
    }

    int32* NPC_PosY = new int32[input_pos_Y.Num()];
    for (int32 i = 0; i < input_pos_Y.Num(); ++i) {
        NPC_PosY[i] = input_pos_Y[i];
    }

    // Convert Int of NPC attack range to array
    int32* NPC_AttackRangeX = new int32[input_attackRange_X.Num()];
    for (int32 i = 0; i < input_attackRange_X.Num(); ++i) {
        NPC_AttackRangeX[i] = input_attackRange_X[i];
    }

    int32* NPC_AttackRangeY = new int32[input_attackRange_Y.Num()];
    for (int32 i = 0; i < input_attackRange_Y.Num(); ++i) {
        NPC_AttackRangeY[i] = input_attackRange_Y[i];
    }
}
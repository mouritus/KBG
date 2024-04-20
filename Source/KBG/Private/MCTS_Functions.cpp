// Fill out your copyright notice in the Description page of Project Settings.


#include "MCTS_Functions.h"

void UMCTS_Functions::SimulateAI(FString inputString, FString& outputString) {
	FString temp = inputString;
	temp.AppendInt(12345);

	outputString = temp;
}
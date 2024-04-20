// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_Simulator.h"

AI_Simulator::AI_Simulator()
{
}

AI_Simulator::~AI_Simulator()
{
}

void AI_Simulator::SimulateAI(FString inputString, FString& outputString) {
	FString temp = inputString;
	temp.AppendInt(00012345000);

	outputString = temp;
}

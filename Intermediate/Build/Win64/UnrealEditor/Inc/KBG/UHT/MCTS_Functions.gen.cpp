// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KBG/Public/MCTS_Functions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCTS_Functions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	KBG_API UClass* Z_Construct_UClass_UMCTS_Functions();
	KBG_API UClass* Z_Construct_UClass_UMCTS_Functions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KBG();
// End Cross Module References
	DEFINE_FUNCTION(UMCTS_Functions::execSimulateAI)
	{
		P_GET_TARRAY(int32,Z_Param_input_NPCs);
		P_GET_TARRAY(int32,Z_Param_input_NPC_Team);
		P_GET_TARRAY(int32,Z_Param_input_pos_X);
		P_GET_TARRAY(int32,Z_Param_input_pos_Y);
		P_GET_TARRAY(int32,Z_Param_input_attackRange_X);
		P_GET_TARRAY(int32,Z_Param_input_attackRange_Y);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_actionTaken);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMCTS_Functions::SimulateAI(Z_Param_input_NPCs,Z_Param_input_NPC_Team,Z_Param_input_pos_X,Z_Param_input_pos_Y,Z_Param_input_attackRange_X,Z_Param_input_attackRange_Y,Z_Param_Out_actionTaken);
		P_NATIVE_END;
	}
	void UMCTS_Functions::StaticRegisterNativesUMCTS_Functions()
	{
		UClass* Class = UMCTS_Functions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SimulateAI", &UMCTS_Functions::execSimulateAI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics
	{
		struct MCTS_Functions_eventSimulateAI_Parms
		{
			TArray<int32> input_NPCs;
			TArray<int32> input_NPC_Team;
			TArray<int32> input_pos_X;
			TArray<int32> input_pos_Y;
			TArray<int32> input_attackRange_X;
			TArray<int32> input_attackRange_Y;
			int32 actionTaken;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_input_NPCs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_input_NPCs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_input_NPC_Team_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_input_NPC_Team;
		static const UECodeGen_Private::FIntPropertyParams NewProp_input_pos_X_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_input_pos_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_input_pos_Y_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_input_pos_Y;
		static const UECodeGen_Private::FIntPropertyParams NewProp_input_attackRange_X_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_input_attackRange_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_input_attackRange_Y_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_input_attackRange_Y;
		static const UECodeGen_Private::FIntPropertyParams NewProp_actionTaken;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_NPCs_Inner = { "input_NPCs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_NPCs = { "input_NPCs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MCTS_Functions_eventSimulateAI_Parms, input_NPCs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_NPC_Team_Inner = { "input_NPC_Team", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_NPC_Team = { "input_NPC_Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MCTS_Functions_eventSimulateAI_Parms, input_NPC_Team), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_pos_X_Inner = { "input_pos_X", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_pos_X = { "input_pos_X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MCTS_Functions_eventSimulateAI_Parms, input_pos_X), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_pos_Y_Inner = { "input_pos_Y", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_pos_Y = { "input_pos_Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MCTS_Functions_eventSimulateAI_Parms, input_pos_Y), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_attackRange_X_Inner = { "input_attackRange_X", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_attackRange_X = { "input_attackRange_X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MCTS_Functions_eventSimulateAI_Parms, input_attackRange_X), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_attackRange_Y_Inner = { "input_attackRange_Y", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_attackRange_Y = { "input_attackRange_Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MCTS_Functions_eventSimulateAI_Parms, input_attackRange_Y), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_actionTaken = { "actionTaken", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MCTS_Functions_eventSimulateAI_Parms, actionTaken), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_NPCs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_NPCs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_NPC_Team_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_NPC_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_pos_X_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_pos_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_pos_Y_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_pos_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_attackRange_X_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_attackRange_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_attackRange_Y_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_input_attackRange_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::NewProp_actionTaken,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "MCTS" },
		{ "Comment", "// Every variables or function needs a tag above it for it to be used in UE5\n// does this need to be static?\n//1. Nama character = characters | Tipe String\n//2. Tim Char(Ally / Musuh) = characterTeam | Tipe String\n//3. Pos_x(Pos x di board) = pos_X | Tipe int\n//4. Pos_y(Pos Y di board) = pos_Y | Tipe int \n//5. Attack range tiap character = attackRange_X | Tipe int\n//6. Attack range tiap character = attackRange_Y | Tipe int\n" },
		{ "ModuleRelativePath", "Public/MCTS_Functions.h" },
		{ "ToolTip", "Every variables or function needs a tag above it for it to be used in UE5\ndoes this need to be static?\n1. Nama character = characters | Tipe String\n2. Tim Char(Ally / Musuh) = characterTeam | Tipe String\n3. Pos_x(Pos x di board) = pos_X | Tipe int\n4. Pos_y(Pos Y di board) = pos_Y | Tipe int\n5. Attack range tiap character = attackRange_X | Tipe int\n6. Attack range tiap character = attackRange_Y | Tipe int" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCTS_Functions, nullptr, "SimulateAI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::MCTS_Functions_eventSimulateAI_Parms), Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMCTS_Functions_SimulateAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMCTS_Functions_SimulateAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMCTS_Functions);
	UClass* Z_Construct_UClass_UMCTS_Functions_NoRegister()
	{
		return UMCTS_Functions::StaticClass();
	}
	struct Z_Construct_UClass_UMCTS_Functions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMCTS_Functions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_KBG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMCTS_Functions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMCTS_Functions_SimulateAI, "SimulateAI" }, // 534154806
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCTS_Functions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MCTS_Functions.h" },
		{ "ModuleRelativePath", "Public/MCTS_Functions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMCTS_Functions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMCTS_Functions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMCTS_Functions_Statics::ClassParams = {
		&UMCTS_Functions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMCTS_Functions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMCTS_Functions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMCTS_Functions()
	{
		if (!Z_Registration_Info_UClass_UMCTS_Functions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMCTS_Functions.OuterSingleton, Z_Construct_UClass_UMCTS_Functions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMCTS_Functions.OuterSingleton;
	}
	template<> KBG_API UClass* StaticClass<UMCTS_Functions>()
	{
		return UMCTS_Functions::StaticClass();
	}
	UMCTS_Functions::UMCTS_Functions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMCTS_Functions);
	UMCTS_Functions::~UMCTS_Functions() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Git_KBG_Source_KBG_Public_MCTS_Functions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Git_KBG_Source_KBG_Public_MCTS_Functions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMCTS_Functions, UMCTS_Functions::StaticClass, TEXT("UMCTS_Functions"), &Z_Registration_Info_UClass_UMCTS_Functions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMCTS_Functions), 2493295119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Git_KBG_Source_KBG_Public_MCTS_Functions_h_583637998(TEXT("/Script/KBG"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Git_KBG_Source_KBG_Public_MCTS_Functions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Git_KBG_Source_KBG_Public_MCTS_Functions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Online/ShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameMode() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGameMode_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterAIController_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPickup_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShooterGameMode::execFinishMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterGameMode::execSetAllowBots)
	{
		P_GET_UBOOL(Z_Param_bInAllowBots);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxBots);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowBots(Z_Param_bInAllowBots,Z_Param_InMaxBots);
		P_NATIVE_END;
	}
	void AShooterGameMode::StaticRegisterNativesAShooterGameMode()
	{
		UClass* Class = AShooterGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishMatch", &AShooterGameMode::execFinishMatch },
			{ "SetAllowBots", &AShooterGameMode::execSetAllowBots },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterGameMode_FinishMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterGameMode_FinishMatch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** finish current match and lock players */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
		{ "ToolTip", "finish current match and lock players" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterGameMode_FinishMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterGameMode, nullptr, "FinishMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterGameMode_FinishMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGameMode_FinishMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterGameMode_FinishMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterGameMode_FinishMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics
	{
		struct ShooterGameMode_eventSetAllowBots_Parms
		{
			bool bInAllowBots;
			int32 InMaxBots;
		};
		static void NewProp_bInAllowBots_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAllowBots;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxBots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::NewProp_bInAllowBots_SetBit(void* Obj)
	{
		((ShooterGameMode_eventSetAllowBots_Parms*)Obj)->bInAllowBots = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::NewProp_bInAllowBots = { "bInAllowBots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterGameMode_eventSetAllowBots_Parms), &Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::NewProp_bInAllowBots_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::NewProp_InMaxBots = { "InMaxBots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterGameMode_eventSetAllowBots_Parms, InMaxBots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::NewProp_bInAllowBots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::NewProp_InMaxBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_InMaxBots", "8" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterGameMode, nullptr, "SetAllowBots", nullptr, nullptr, sizeof(ShooterGameMode_eventSetAllowBots_Parms), Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterGameMode_SetAllowBots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterGameMode_SetAllowBots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterGameMode_NoRegister()
	{
		return AShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotPawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BotPawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WarmupTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoundTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenMatches_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeBetweenMatches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeathScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageSelfScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageSelfScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotControllers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BotControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformPlayerControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlatformPlayerControllerClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelPickups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPickups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelPickups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterGameMode_FinishMatch, "FinishMatch" }, // 653315692
		{ &Z_Construct_UFunction_AShooterGameMode_SetAllowBots, "SetAllowBots" }, // 2055920376
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Online/ShooterGameMode.h" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotPawnClass_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** The bot pawn class */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
		{ "ToolTip", "The bot pawn class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotPawnClass = { "BotPawnClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, BotPawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotPawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotPawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_WarmupTime_MetaData[] = {
		{ "Comment", "/** delay between first player login and starting match */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
		{ "ToolTip", "delay between first player login and starting match" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, WarmupTime), METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_WarmupTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_WarmupTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RoundTime_MetaData[] = {
		{ "Comment", "/** match duration */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
		{ "ToolTip", "match duration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RoundTime = { "RoundTime", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, RoundTime), METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RoundTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RoundTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_TimeBetweenMatches_MetaData[] = {
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_TimeBetweenMatches = { "TimeBetweenMatches", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, TimeBetweenMatches), METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_TimeBetweenMatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_TimeBetweenMatches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_KillScore_MetaData[] = {
		{ "Comment", "/** score for kill */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
		{ "ToolTip", "score for kill" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_KillScore = { "KillScore", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, KillScore), METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_KillScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_KillScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_DeathScore_MetaData[] = {
		{ "Comment", "/** score for death */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
		{ "ToolTip", "score for death" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_DeathScore = { "DeathScore", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, DeathScore), METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_DeathScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_DeathScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_DamageSelfScale_MetaData[] = {
		{ "Comment", "/** scale for self instigated damage */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
		{ "ToolTip", "scale for self instigated damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_DamageSelfScale = { "DamageSelfScale", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, DamageSelfScale), METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_DamageSelfScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_DamageSelfScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_MaxBots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_MaxBots = { "MaxBots", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, MaxBots), METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_MaxBots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_MaxBots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotControllers_Inner = { "BotControllers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AShooterAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotControllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotControllers = { "BotControllers", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, BotControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_PlatformPlayerControllerClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_PlatformPlayerControllerClass = { "PlatformPlayerControllerClass", nullptr, (EPropertyFlags)0x0024080000004000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, PlatformPlayerControllerClass), Z_Construct_UClass_AShooterPlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_PlatformPlayerControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_PlatformPlayerControllerClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_LevelPickups_Inner = { "LevelPickups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AShooterPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_LevelPickups_MetaData[] = {
		{ "ModuleRelativePath", "Public/Online/ShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_LevelPickups = { "LevelPickups", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameMode, LevelPickups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_LevelPickups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_LevelPickups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotPawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_WarmupTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RoundTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_TimeBetweenMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_KillScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_DeathScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_DamageSelfScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_MaxBots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_BotControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_PlatformPlayerControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_LevelPickups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_LevelPickups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterGameMode_Statics::ClassParams = {
		&AShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterGameMode, 287522202);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterGameMode>()
	{
		return AShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterGameMode(Z_Construct_UClass_AShooterGameMode, &AShooterGameMode::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

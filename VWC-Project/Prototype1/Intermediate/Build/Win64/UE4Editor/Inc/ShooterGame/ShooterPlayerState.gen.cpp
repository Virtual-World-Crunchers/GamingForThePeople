// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Online/ShooterPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPlayerState() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerState_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShooterPlayerState::execOnRep_TeamColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TeamColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerState::execBroadcastDeath)
	{
		P_GET_OBJECT(AShooterPlayerState,Z_Param_KillerPlayerState);
		P_GET_OBJECT(UDamageType,Z_Param_KillerDamageType);
		P_GET_OBJECT(AShooterPlayerState,Z_Param_KilledPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastDeath_Implementation(Z_Param_KillerPlayerState,Z_Param_KillerDamageType,Z_Param_KilledPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerState::execInformAboutKill)
	{
		P_GET_OBJECT(AShooterPlayerState,Z_Param_KillerPlayerState);
		P_GET_OBJECT(UDamageType,Z_Param_KillerDamageType);
		P_GET_OBJECT(AShooterPlayerState,Z_Param_KilledPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InformAboutKill_Implementation(Z_Param_KillerPlayerState,Z_Param_KillerDamageType,Z_Param_KilledPlayerState);
		P_NATIVE_END;
	}
	static FName NAME_AShooterPlayerState_BroadcastDeath = FName(TEXT("BroadcastDeath"));
	void AShooterPlayerState::BroadcastDeath(AShooterPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AShooterPlayerState* KilledPlayerState)
	{
		ShooterPlayerState_eventBroadcastDeath_Parms Parms;
		Parms.KillerPlayerState=KillerPlayerState;
		Parms.KillerDamageType=KillerDamageType;
		Parms.KilledPlayerState=KilledPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_AShooterPlayerState_BroadcastDeath),&Parms);
	}
	static FName NAME_AShooterPlayerState_InformAboutKill = FName(TEXT("InformAboutKill"));
	void AShooterPlayerState::InformAboutKill(AShooterPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AShooterPlayerState* KilledPlayerState)
	{
		ShooterPlayerState_eventInformAboutKill_Parms Parms;
		Parms.KillerPlayerState=KillerPlayerState;
		Parms.KillerDamageType=KillerDamageType;
		Parms.KilledPlayerState=KilledPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_AShooterPlayerState_InformAboutKill),&Parms);
	}
	void AShooterPlayerState::StaticRegisterNativesAShooterPlayerState()
	{
		UClass* Class = AShooterPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastDeath", &AShooterPlayerState::execBroadcastDeath },
			{ "InformAboutKill", &AShooterPlayerState::execInformAboutKill },
			{ "OnRep_TeamColor", &AShooterPlayerState::execOnRep_TeamColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerDamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::NewProp_KillerPlayerState = { "KillerPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerState_eventBroadcastDeath_Parms, KillerPlayerState), Z_Construct_UClass_AShooterPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::NewProp_KillerDamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::NewProp_KillerDamageType = { "KillerDamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerState_eventBroadcastDeath_Parms, KillerDamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::NewProp_KillerDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::NewProp_KillerDamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::NewProp_KilledPlayerState = { "KilledPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerState_eventBroadcastDeath_Parms, KilledPlayerState), Z_Construct_UClass_AShooterPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::NewProp_KillerPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::NewProp_KillerDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::NewProp_KilledPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** broadcast death to local clients */" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ToolTip", "broadcast death to local clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerState, nullptr, "BroadcastDeath", nullptr, nullptr, sizeof(ShooterPlayerState_eventBroadcastDeath_Parms), Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerDamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::NewProp_KillerPlayerState = { "KillerPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerState_eventInformAboutKill_Parms, KillerPlayerState), Z_Construct_UClass_AShooterPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::NewProp_KillerDamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::NewProp_KillerDamageType = { "KillerDamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerState_eventInformAboutKill_Parms, KillerDamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::NewProp_KillerDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::NewProp_KillerDamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::NewProp_KilledPlayerState = { "KilledPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerState_eventInformAboutKill_Parms, KilledPlayerState), Z_Construct_UClass_AShooterPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::NewProp_KillerPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::NewProp_KillerDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::NewProp_KilledPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sends kill (excluding self) to clients */" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ToolTip", "Sends kill (excluding self) to clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerState, nullptr, "InformAboutKill", nullptr, nullptr, sizeof(ShooterPlayerState_eventInformAboutKill_Parms), Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerState_InformAboutKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerState_InformAboutKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerState_OnRep_TeamColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerState_OnRep_TeamColor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** replicate team colors. Updated the players mesh colors appropriately */" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ToolTip", "replicate team colors. Updated the players mesh colors appropriately" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerState_OnRep_TeamColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerState, nullptr, "OnRep_TeamColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerState_OnRep_TeamColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerState_OnRep_TeamColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerState_OnRep_TeamColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerState_OnRep_TeamColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterPlayerState_NoRegister()
	{
		return AShooterPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDeaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDeaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBulletsFired_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBulletsFired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRocketsFired_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumRocketsFired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQuitter_MetaData[];
#endif
		static void NewProp_bQuitter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterPlayerState_BroadcastDeath, "BroadcastDeath" }, // 1103545928
		{ &Z_Construct_UFunction_AShooterPlayerState_InformAboutKill, "InformAboutKill" }, // 2443509048
		{ &Z_Construct_UFunction_AShooterPlayerState_OnRep_TeamColor, "OnRep_TeamColor" }, // 2409447818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Online/ShooterPlayerState.h" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_TeamNumber_MetaData[] = {
		{ "Comment", "/** team number */" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ToolTip", "team number" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_TeamNumber = { "TeamNumber", "OnRep_TeamColor", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerState, TeamNumber), METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_TeamNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_TeamNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumKills_MetaData[] = {
		{ "Comment", "/** number of kills */" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ToolTip", "number of kills" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumKills = { "NumKills", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerState, NumKills), METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumDeaths_MetaData[] = {
		{ "Comment", "/** number of deaths */" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ToolTip", "number of deaths" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumDeaths = { "NumDeaths", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerState, NumDeaths), METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumDeaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumDeaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumBulletsFired_MetaData[] = {
		{ "Comment", "/** number of bullets fired this match */" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ToolTip", "number of bullets fired this match" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumBulletsFired = { "NumBulletsFired", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerState, NumBulletsFired), METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumBulletsFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumBulletsFired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumRocketsFired_MetaData[] = {
		{ "Comment", "/** number of rockets fired this match */" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ToolTip", "number of rockets fired this match" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumRocketsFired = { "NumRocketsFired", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerState, NumRocketsFired), METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumRocketsFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumRocketsFired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_bQuitter_MetaData[] = {
		{ "Comment", "/** whether the user quit the match */" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ToolTip", "whether the user quit the match" },
	};
#endif
	void Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_bQuitter_SetBit(void* Obj)
	{
		((AShooterPlayerState*)Obj)->bQuitter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_bQuitter = { "bQuitter", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterPlayerState), &Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_bQuitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_bQuitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_bQuitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_MatchId_MetaData[] = {
		{ "Comment", "/** Match id */" },
		{ "ModuleRelativePath", "Public/Online/ShooterPlayerState.h" },
		{ "ToolTip", "Match id" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerState, MatchId), METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_TeamNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumDeaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumBulletsFired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_NumRocketsFired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_bQuitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerState_Statics::NewProp_MatchId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerState_Statics::ClassParams = {
		&AShooterPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerState_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterPlayerState, 1712649318);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterPlayerState>()
	{
		return AShooterPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterPlayerState(Z_Construct_UClass_AShooterPlayerState, &AShooterPlayerState::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterPlayerState"), false, nullptr, nullptr, nullptr);

	void AShooterPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TeamNumber(TEXT("TeamNumber"));
		static const FName Name_NumKills(TEXT("NumKills"));
		static const FName Name_NumDeaths(TEXT("NumDeaths"));
		static const FName Name_MatchId(TEXT("MatchId"));

		const bool bIsValid = true
			&& Name_TeamNumber == ClassReps[(int32)ENetFields_Private::TeamNumber].Property->GetFName()
			&& Name_NumKills == ClassReps[(int32)ENetFields_Private::NumKills].Property->GetFName()
			&& Name_NumDeaths == ClassReps[(int32)ENetFields_Private::NumDeaths].Property->GetFName()
			&& Name_MatchId == ClassReps[(int32)ENetFields_Private::MatchId].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShooterPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

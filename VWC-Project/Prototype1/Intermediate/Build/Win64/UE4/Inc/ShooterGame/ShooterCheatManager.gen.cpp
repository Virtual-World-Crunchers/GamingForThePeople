// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Player/ShooterCheatManager.h"
#include "ShooterGame/Public/Player/ShooterPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCheatManager() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterCheatManager_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterCheatManager();
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	DEFINE_FUNCTION(UShooterCheatManager::execSpawnBot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShooterCheatManager::execCheat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cheat(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShooterCheatManager::execChangeTeam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTeamNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeTeam(Z_Param_NewTeamNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShooterCheatManager::execForceMatchStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceMatchStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShooterCheatManager::execToggleMatchTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleMatchTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShooterCheatManager::execToggleInfiniteClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleInfiniteClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShooterCheatManager::execToggleInfiniteAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleInfiniteAmmo();
		P_NATIVE_END;
	}
	void UShooterCheatManager::StaticRegisterNativesUShooterCheatManager()
	{
		UClass* Class = UShooterCheatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeTeam", &UShooterCheatManager::execChangeTeam },
			{ "Cheat", &UShooterCheatManager::execCheat },
			{ "ForceMatchStart", &UShooterCheatManager::execForceMatchStart },
			{ "SpawnBot", &UShooterCheatManager::execSpawnBot },
			{ "ToggleInfiniteAmmo", &UShooterCheatManager::execToggleInfiniteAmmo },
			{ "ToggleInfiniteClip", &UShooterCheatManager::execToggleInfiniteClip },
			{ "ToggleMatchTimer", &UShooterCheatManager::execToggleMatchTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics
	{
		struct ShooterCheatManager_eventChangeTeam_Parms
		{
			int32 NewTeamNumber;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewTeamNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics::NewProp_NewTeamNumber = { "NewTeamNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCheatManager_eventChangeTeam_Parms, NewTeamNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics::NewProp_NewTeamNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ShooterCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterCheatManager, nullptr, "ChangeTeam", nullptr, nullptr, sizeof(ShooterCheatManager_eventChangeTeam_Parms), Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterCheatManager_ChangeTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShooterCheatManager_ChangeTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics
	{
		struct ShooterCheatManager_eventCheat_Parms
		{
			FString Msg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCheatManager_eventCheat_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::NewProp_Msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ShooterCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterCheatManager, nullptr, "Cheat", nullptr, nullptr, sizeof(ShooterCheatManager_eventCheat_Parms), Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterCheatManager_Cheat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShooterCheatManager_Cheat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShooterCheatManager_ForceMatchStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterCheatManager_ForceMatchStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ShooterCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterCheatManager_ForceMatchStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterCheatManager, nullptr, "ForceMatchStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterCheatManager_ForceMatchStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterCheatManager_ForceMatchStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterCheatManager_ForceMatchStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShooterCheatManager_ForceMatchStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShooterCheatManager_SpawnBot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterCheatManager_SpawnBot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ShooterCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterCheatManager_SpawnBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterCheatManager, nullptr, "SpawnBot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterCheatManager_SpawnBot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterCheatManager_SpawnBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterCheatManager_SpawnBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShooterCheatManager_SpawnBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ShooterCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterCheatManager, nullptr, "ToggleInfiniteAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteClip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ShooterCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterCheatManager, nullptr, "ToggleInfiniteClip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShooterCheatManager_ToggleMatchTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterCheatManager_ToggleMatchTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ShooterCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterCheatManager_ToggleMatchTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterCheatManager, nullptr, "ToggleMatchTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterCheatManager_ToggleMatchTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterCheatManager_ToggleMatchTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterCheatManager_ToggleMatchTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShooterCheatManager_ToggleMatchTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShooterCheatManager_NoRegister()
	{
		return UShooterCheatManager::StaticClass();
	}
	struct Z_Construct_UClass_UShooterCheatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterCheatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShooterCheatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterCheatManager_ChangeTeam, "ChangeTeam" }, // 1529166277
		{ &Z_Construct_UFunction_UShooterCheatManager_Cheat, "Cheat" }, // 953978843
		{ &Z_Construct_UFunction_UShooterCheatManager_ForceMatchStart, "ForceMatchStart" }, // 1506578742
		{ &Z_Construct_UFunction_UShooterCheatManager_SpawnBot, "SpawnBot" }, // 3847812469
		{ &Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteAmmo, "ToggleInfiniteAmmo" }, // 1738007701
		{ &Z_Construct_UFunction_UShooterCheatManager_ToggleInfiniteClip, "ToggleInfiniteClip" }, // 3339086027
		{ &Z_Construct_UFunction_UShooterCheatManager_ToggleMatchTimer, "ToggleMatchTimer" }, // 1802275481
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterCheatManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/ShooterCheatManager.h" },
		{ "ModuleRelativePath", "Public/Player/ShooterCheatManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterCheatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterCheatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterCheatManager_Statics::ClassParams = {
		&UShooterCheatManager::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterCheatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterCheatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterCheatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterCheatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterCheatManager, 3379266711);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterCheatManager>()
	{
		return UShooterCheatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterCheatManager(Z_Construct_UClass_UShooterCheatManager, &UShooterCheatManager::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterCheatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterCheatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

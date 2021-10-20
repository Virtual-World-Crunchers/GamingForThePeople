// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Player/ShooterPersistentUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPersistentUser() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterPersistentUser_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterPersistentUser();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterPersistentUser::StaticRegisterNativesUShooterPersistentUser()
	{
	}
	UClass* Z_Construct_UClass_UShooterPersistentUser_NoRegister()
	{
		return UShooterPersistentUser::StaticClass();
	}
	struct Z_Construct_UClass_UShooterPersistentUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kills_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Deaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Wins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Losses_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Losses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletsFired_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BulletsFired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RocketsFired_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RocketsFired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BotsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRecordingDemos_MetaData[];
#endif
		static void NewProp_bIsRecordingDemos_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRecordingDemos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertedYAxis_MetaData[];
#endif
		static void NewProp_bInvertedYAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertedYAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVibrationOpt_MetaData[];
#endif
		static void NewProp_bVibrationOpt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVibrationOpt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterPersistentUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/ShooterPersistentUser.h" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Kills_MetaData[] = {
		{ "Comment", "/** Lifetime count of kills */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "Lifetime count of kills" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterPersistentUser, Kills), METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Kills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Kills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Deaths_MetaData[] = {
		{ "Comment", "/** Lifetime count of deaths */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "Lifetime count of deaths" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Deaths = { "Deaths", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterPersistentUser, Deaths), METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Deaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Deaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Wins_MetaData[] = {
		{ "Comment", "/** Lifetime count of match wins */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "Lifetime count of match wins" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Wins = { "Wins", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterPersistentUser, Wins), METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Wins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Wins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Losses_MetaData[] = {
		{ "Comment", "/** Lifetime count of match losses */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "Lifetime count of match losses" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Losses = { "Losses", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterPersistentUser, Losses), METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Losses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Losses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_BulletsFired_MetaData[] = {
		{ "Comment", "/** Lifetime count of bullets fired */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "Lifetime count of bullets fired" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_BulletsFired = { "BulletsFired", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterPersistentUser, BulletsFired), METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_BulletsFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_BulletsFired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_RocketsFired_MetaData[] = {
		{ "Comment", "/** Lifetime count of rockets fired */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "Lifetime count of rockets fired" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_RocketsFired = { "RocketsFired", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterPersistentUser, RocketsFired), METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_RocketsFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_RocketsFired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_BotsCount_MetaData[] = {
		{ "Comment", "/** how many bots join hosted game */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "how many bots join hosted game" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_BotsCount = { "BotsCount", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterPersistentUser, BotsCount), METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_BotsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_BotsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bIsRecordingDemos_MetaData[] = {
		{ "Comment", "/** is recording demos? */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "is recording demos?" },
	};
#endif
	void Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bIsRecordingDemos_SetBit(void* Obj)
	{
		((UShooterPersistentUser*)Obj)->bIsRecordingDemos = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bIsRecordingDemos = { "bIsRecordingDemos", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterPersistentUser), &Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bIsRecordingDemos_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bIsRecordingDemos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bIsRecordingDemos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Gamma_MetaData[] = {
		{ "Comment", "/** Holds the gamma correction setting */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "Holds the gamma correction setting" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterPersistentUser, Gamma), METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_AimSensitivity_MetaData[] = {
		{ "Comment", "/** Holds the mouse sensitivity */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "Holds the mouse sensitivity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_AimSensitivity = { "AimSensitivity", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterPersistentUser, AimSensitivity), METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_AimSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_AimSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bInvertedYAxis_MetaData[] = {
		{ "Comment", "/** Is the y axis inverted or not? */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
		{ "ToolTip", "Is the y axis inverted or not?" },
	};
#endif
	void Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bInvertedYAxis_SetBit(void* Obj)
	{
		((UShooterPersistentUser*)Obj)->bInvertedYAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bInvertedYAxis = { "bInvertedYAxis", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterPersistentUser), &Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bInvertedYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bInvertedYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bInvertedYAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bVibrationOpt_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/ShooterPersistentUser.h" },
	};
#endif
	void Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bVibrationOpt_SetBit(void* Obj)
	{
		((UShooterPersistentUser*)Obj)->bVibrationOpt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bVibrationOpt = { "bVibrationOpt", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterPersistentUser), &Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bVibrationOpt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bVibrationOpt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bVibrationOpt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterPersistentUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Kills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Deaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Wins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Losses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_BulletsFired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_RocketsFired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_BotsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bIsRecordingDemos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_Gamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_AimSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bInvertedYAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPersistentUser_Statics::NewProp_bVibrationOpt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterPersistentUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterPersistentUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterPersistentUser_Statics::ClassParams = {
		&UShooterPersistentUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterPersistentUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterPersistentUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPersistentUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterPersistentUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterPersistentUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterPersistentUser, 345983388);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterPersistentUser>()
	{
		return UShooterPersistentUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterPersistentUser(Z_Construct_UClass_UShooterPersistentUser, &UShooterPersistentUser::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterPersistentUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterPersistentUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

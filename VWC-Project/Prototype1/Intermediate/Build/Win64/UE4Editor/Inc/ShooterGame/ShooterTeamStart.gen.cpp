// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/ShooterTeamStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterTeamStart() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterTeamStart_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterTeamStart();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterTeamStart::StaticRegisterNativesAShooterTeamStart()
	{
	}
	UClass* Z_Construct_UClass_AShooterTeamStart_NoRegister()
	{
		return AShooterTeamStart::StaticClass();
	}
	struct Z_Construct_UClass_AShooterTeamStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotForPlayers_MetaData[];
#endif
		static void NewProp_bNotForPlayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotForPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotForBots_MetaData[];
#endif
		static void NewProp_bNotForBots_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotForBots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterTeamStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterTeamStart_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "ShooterTeamStart.h" },
		{ "ModuleRelativePath", "Public/ShooterTeamStart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_SpawnTeam_MetaData[] = {
		{ "Category", "Team" },
		{ "Comment", "/** Which team can start at this point */" },
		{ "ModuleRelativePath", "Public/ShooterTeamStart.h" },
		{ "ToolTip", "Which team can start at this point" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_SpawnTeam = { "SpawnTeam", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterTeamStart, SpawnTeam), METADATA_PARAMS(Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_SpawnTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_SpawnTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForPlayers_MetaData[] = {
		{ "Category", "Team" },
		{ "Comment", "/** Whether players can start at this point */" },
		{ "ModuleRelativePath", "Public/ShooterTeamStart.h" },
		{ "ToolTip", "Whether players can start at this point" },
	};
#endif
	void Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForPlayers_SetBit(void* Obj)
	{
		((AShooterTeamStart*)Obj)->bNotForPlayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForPlayers = { "bNotForPlayers", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterTeamStart), &Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForPlayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForBots_MetaData[] = {
		{ "Category", "Team" },
		{ "Comment", "/** Whether bots can start at this point */" },
		{ "ModuleRelativePath", "Public/ShooterTeamStart.h" },
		{ "ToolTip", "Whether bots can start at this point" },
	};
#endif
	void Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForBots_SetBit(void* Obj)
	{
		((AShooterTeamStart*)Obj)->bNotForBots = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForBots = { "bNotForBots", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterTeamStart), &Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForBots_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForBots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForBots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterTeamStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_SpawnTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterTeamStart_Statics::NewProp_bNotForBots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterTeamStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterTeamStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterTeamStart_Statics::ClassParams = {
		&AShooterTeamStart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterTeamStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTeamStart_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterTeamStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTeamStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterTeamStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterTeamStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterTeamStart, 131919918);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterTeamStart>()
	{
		return AShooterTeamStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterTeamStart(Z_Construct_UClass_AShooterTeamStart, &AShooterTeamStart::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterTeamStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterTeamStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

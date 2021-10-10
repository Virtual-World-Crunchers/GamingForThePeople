// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Weapons/ShooterWeapon_Instant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterWeapon_Instant() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInstantWeaponData();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInstantHitInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterWeapon_Instant_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterWeapon_Instant();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterWeapon();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterImpactEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FInstantWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FInstantWeaponData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstantWeaponData, Z_Construct_UPackage__Script_ShooterGame(), TEXT("InstantWeaponData"), sizeof(FInstantWeaponData), Get_Z_Construct_UScriptStruct_FInstantWeaponData_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FInstantWeaponData>()
{
	return FInstantWeaponData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstantWeaponData(FInstantWeaponData::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("InstantWeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFInstantWeaponData
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFInstantWeaponData()
	{
		UScriptStruct::DeferCppStructOps<FInstantWeaponData>(FName(TEXT("InstantWeaponData")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFInstantWeaponData;
	struct Z_Construct_UScriptStruct_FInstantWeaponData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingSpreadMod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetingSpreadMod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringSpreadIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiringSpreadIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringSpreadMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiringSpreadMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSideHitLeeway_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientSideHitLeeway;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedViewDotHitDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedViewDotHitDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstantWeaponData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_WeaponSpread_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "Comment", "/** base weapon spread (degrees) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "base weapon spread (degrees)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_WeaponSpread = { "WeaponSpread", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantWeaponData, WeaponSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_WeaponSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_WeaponSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_TargetingSpreadMod_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "Comment", "/** targeting spread modifier */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "targeting spread modifier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_TargetingSpreadMod = { "TargetingSpreadMod", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantWeaponData, TargetingSpreadMod), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_TargetingSpreadMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_TargetingSpreadMod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_FiringSpreadIncrement_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "Comment", "/** continuous firing: spread increment */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "continuous firing: spread increment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_FiringSpreadIncrement = { "FiringSpreadIncrement", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantWeaponData, FiringSpreadIncrement), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_FiringSpreadIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_FiringSpreadIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_FiringSpreadMax_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "Comment", "/** continuous firing: max increment */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "continuous firing: max increment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_FiringSpreadMax = { "FiringSpreadMax", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantWeaponData, FiringSpreadMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_FiringSpreadMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_FiringSpreadMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_WeaponRange_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** weapon range */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "weapon range" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantWeaponData, WeaponRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_WeaponRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_WeaponRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_HitDamage_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** damage amount */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "damage amount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_HitDamage = { "HitDamage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantWeaponData, HitDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_HitDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_HitDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** type of damage */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "type of damage" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantWeaponData, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_ClientSideHitLeeway_MetaData[] = {
		{ "Category", "HitVerification" },
		{ "Comment", "/** hit verification: scale for bounding box of hit actor */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "hit verification: scale for bounding box of hit actor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_ClientSideHitLeeway = { "ClientSideHitLeeway", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantWeaponData, ClientSideHitLeeway), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_ClientSideHitLeeway_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_ClientSideHitLeeway_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_AllowedViewDotHitDir_MetaData[] = {
		{ "Category", "HitVerification" },
		{ "Comment", "/** hit verification: threshold for dot product between view direction and hit direction */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "hit verification: threshold for dot product between view direction and hit direction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_AllowedViewDotHitDir = { "AllowedViewDotHitDir", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantWeaponData, AllowedViewDotHitDir), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_AllowedViewDotHitDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_AllowedViewDotHitDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstantWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_WeaponSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_TargetingSpreadMod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_FiringSpreadIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_FiringSpreadMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_WeaponRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_HitDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_ClientSideHitLeeway,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantWeaponData_Statics::NewProp_AllowedViewDotHitDir,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstantWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		nullptr,
		&NewStructOps,
		"InstantWeaponData",
		sizeof(FInstantWeaponData),
		alignof(FInstantWeaponData),
		Z_Construct_UScriptStruct_FInstantWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantWeaponData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstantWeaponData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstantWeaponData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstantWeaponData"), sizeof(FInstantWeaponData), Get_Z_Construct_UScriptStruct_FInstantWeaponData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstantWeaponData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstantWeaponData_Hash() { return 252100079U; }
class UScriptStruct* FInstantHitInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FInstantHitInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstantHitInfo, Z_Construct_UPackage__Script_ShooterGame(), TEXT("InstantHitInfo"), sizeof(FInstantHitInfo), Get_Z_Construct_UScriptStruct_FInstantHitInfo_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FInstantHitInfo>()
{
	return FInstantHitInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstantHitInfo(FInstantHitInfo::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("InstantHitInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFInstantHitInfo
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFInstantHitInfo()
	{
		UScriptStruct::DeferCppStructOps<FInstantHitInfo>(FName(TEXT("InstantHitInfo")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFInstantHitInfo;
	struct Z_Construct_UScriptStruct_FInstantHitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantHitInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstantHitInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantHitInfo, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_ReticleSpread_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_ReticleSpread = { "ReticleSpread", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantHitInfo, ReticleSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_ReticleSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_ReticleSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstantHitInfo, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_RandomSeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstantHitInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_ReticleSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstantHitInfo_Statics::NewProp_RandomSeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstantHitInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		nullptr,
		&NewStructOps,
		"InstantHitInfo",
		sizeof(FInstantHitInfo),
		alignof(FInstantHitInfo),
		Z_Construct_UScriptStruct_FInstantHitInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantHitInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantHitInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantHitInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstantHitInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstantHitInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstantHitInfo"), sizeof(FInstantHitInfo), Get_Z_Construct_UScriptStruct_FInstantHitInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstantHitInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstantHitInfo_Hash() { return 4190712991U; }
	DEFINE_FUNCTION(AShooterWeapon_Instant::execOnRep_HitNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HitNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon_Instant::execServerNotifyMiss)
	{
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ShootDir);
		P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReticleSpread);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNotifyMiss_Validate(Z_Param_ShootDir,Z_Param_RandomSeed,Z_Param_ReticleSpread))
		{
			RPC_ValidateFailed(TEXT("ServerNotifyMiss_Validate"));
			return;
		}
		P_THIS->ServerNotifyMiss_Implementation(Z_Param_ShootDir,Z_Param_RandomSeed,Z_Param_ReticleSpread);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon_Instant::execServerNotifyHit)
	{
		P_GET_STRUCT(FHitResult,Z_Param_Impact);
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ShootDir);
		P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReticleSpread);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNotifyHit_Validate(Z_Param_Impact,Z_Param_ShootDir,Z_Param_RandomSeed,Z_Param_ReticleSpread))
		{
			RPC_ValidateFailed(TEXT("ServerNotifyHit_Validate"));
			return;
		}
		P_THIS->ServerNotifyHit_Implementation(Z_Param_Impact,Z_Param_ShootDir,Z_Param_RandomSeed,Z_Param_ReticleSpread);
		P_NATIVE_END;
	}
	static FName NAME_AShooterWeapon_Instant_ServerNotifyHit = FName(TEXT("ServerNotifyHit"));
	void AShooterWeapon_Instant::ServerNotifyHit(FHitResult const& Impact, FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread)
	{
		ShooterWeapon_Instant_eventServerNotifyHit_Parms Parms;
		Parms.Impact=Impact;
		Parms.ShootDir=ShootDir;
		Parms.RandomSeed=RandomSeed;
		Parms.ReticleSpread=ReticleSpread;
		ProcessEvent(FindFunctionChecked(NAME_AShooterWeapon_Instant_ServerNotifyHit),&Parms);
	}
	static FName NAME_AShooterWeapon_Instant_ServerNotifyMiss = FName(TEXT("ServerNotifyMiss"));
	void AShooterWeapon_Instant::ServerNotifyMiss(FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread)
	{
		ShooterWeapon_Instant_eventServerNotifyMiss_Parms Parms;
		Parms.ShootDir=ShootDir;
		Parms.RandomSeed=RandomSeed;
		Parms.ReticleSpread=ReticleSpread;
		ProcessEvent(FindFunctionChecked(NAME_AShooterWeapon_Instant_ServerNotifyMiss),&Parms);
	}
	void AShooterWeapon_Instant::StaticRegisterNativesAShooterWeapon_Instant()
	{
		UClass* Class = AShooterWeapon_Instant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HitNotify", &AShooterWeapon_Instant::execOnRep_HitNotify },
			{ "ServerNotifyHit", &AShooterWeapon_Instant::execServerNotifyHit },
			{ "ServerNotifyMiss", &AShooterWeapon_Instant::execServerNotifyMiss },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterWeapon_Instant_OnRep_HitNotify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_Instant_OnRep_HitNotify_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Effects replication\n" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "Effects replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_Instant_OnRep_HitNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon_Instant, nullptr, "OnRep_HitNotify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_Instant_OnRep_HitNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_Instant_OnRep_HitNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_Instant_OnRep_HitNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_Instant_OnRep_HitNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impact_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impact;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDir;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleSpread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_Impact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterWeapon_Instant_eventServerNotifyHit_Parms, Impact), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_Impact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_Impact_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_ShootDir = { "ShootDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterWeapon_Instant_eventServerNotifyHit_Parms, ShootDir), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterWeapon_Instant_eventServerNotifyHit_Parms, RandomSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_ReticleSpread = { "ReticleSpread", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterWeapon_Instant_eventServerNotifyHit_Parms, ReticleSpread), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_Impact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_ShootDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_RandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::NewProp_ReticleSpread,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** server notified of hit from client to verify */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "server notified of hit from client to verify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon_Instant, nullptr, "ServerNotifyHit", nullptr, nullptr, sizeof(ShooterWeapon_Instant_eventServerNotifyHit_Parms), Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDir;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleSpread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::NewProp_ShootDir = { "ShootDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterWeapon_Instant_eventServerNotifyMiss_Parms, ShootDir), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterWeapon_Instant_eventServerNotifyMiss_Parms, RandomSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::NewProp_ReticleSpread = { "ReticleSpread", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterWeapon_Instant_eventServerNotifyMiss_Parms, ReticleSpread), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::NewProp_ShootDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::NewProp_RandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::NewProp_ReticleSpread,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** server notified of miss to show trail FX */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "server notified of miss to show trail FX" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon_Instant, nullptr, "ServerNotifyMiss", nullptr, nullptr, sizeof(ShooterWeapon_Instant_eventServerNotifyMiss_Parms), Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterWeapon_Instant_NoRegister()
	{
		return AShooterWeapon_Instant::StaticClass();
	}
	struct Z_Construct_UClass_AShooterWeapon_Instant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstantConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstantConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ImpactTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrailFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailTargetParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrailTargetParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNotify;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterWeapon_Instant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooterWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterWeapon_Instant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterWeapon_Instant_OnRep_HitNotify, "OnRep_HitNotify" }, // 2712896244
		{ &Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyHit, "ServerNotifyHit" }, // 2120861310
		{ &Z_Construct_UFunction_AShooterWeapon_Instant_ServerNotifyMiss, "ServerNotifyMiss" }, // 1988684683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Instant_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A weapon where the damage impact occurs instantly upon firing\n" },
		{ "IncludePath", "Weapons/ShooterWeapon_Instant.h" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "A weapon where the damage impact occurs instantly upon firing" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_InstantConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** weapon config */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "weapon config" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_InstantConfig = { "InstantConfig", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon_Instant, InstantConfig), Z_Construct_UScriptStruct_FInstantWeaponData, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_InstantConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_InstantConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_ImpactTemplate_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** impact effects */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "impact effects" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_ImpactTemplate = { "ImpactTemplate", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon_Instant, ImpactTemplate), Z_Construct_UClass_AShooterImpactEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_ImpactTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_ImpactTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_TrailFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** smoke trail */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "smoke trail" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_TrailFX = { "TrailFX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon_Instant, TrailFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_TrailFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_TrailFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_TrailTargetParam_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** param name for beam target in smoke trail */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "param name for beam target in smoke trail" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_TrailTargetParam = { "TrailTargetParam", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon_Instant, TrailTargetParam), METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_TrailTargetParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_TrailTargetParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_HitNotify_MetaData[] = {
		{ "Comment", "/** instant hit notify for replication */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Instant.h" },
		{ "ToolTip", "instant hit notify for replication" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_HitNotify = { "HitNotify", "OnRep_HitNotify", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon_Instant, HitNotify), Z_Construct_UScriptStruct_FInstantHitInfo, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_HitNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_HitNotify_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterWeapon_Instant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_InstantConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_ImpactTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_TrailFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_TrailTargetParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Instant_Statics::NewProp_HitNotify,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterWeapon_Instant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterWeapon_Instant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterWeapon_Instant_Statics::ClassParams = {
		&AShooterWeapon_Instant::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterWeapon_Instant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Instant_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Instant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Instant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterWeapon_Instant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterWeapon_Instant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterWeapon_Instant, 2809585120);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterWeapon_Instant>()
	{
		return AShooterWeapon_Instant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterWeapon_Instant(Z_Construct_UClass_AShooterWeapon_Instant, &AShooterWeapon_Instant::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterWeapon_Instant"), false, nullptr, nullptr, nullptr);

	void AShooterWeapon_Instant::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_HitNotify(TEXT("HitNotify"));

		const bool bIsValid = true
			&& Name_HitNotify == ClassReps[(int32)ENetFields_Private::HitNotify].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShooterWeapon_Instant"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterWeapon_Instant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

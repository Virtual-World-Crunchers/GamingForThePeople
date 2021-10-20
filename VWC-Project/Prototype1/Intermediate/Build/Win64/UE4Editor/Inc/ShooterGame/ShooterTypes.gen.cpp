// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/ShooterTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterTypes() {}
// Cross Module References
	SHOOTERGAME_API UEnum* Z_Construct_UEnum_ShooterGame_EShooterPhysMaterialType();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FTakeHitInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent();
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDecalData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	static UEnum* EShooterPhysMaterialType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShooterGame_EShooterPhysMaterialType, Z_Construct_UPackage__Script_ShooterGame(), TEXT("EShooterPhysMaterialType"));
		}
		return Singleton;
	}
	template<> SHOOTERGAME_API UEnum* StaticEnum<EShooterPhysMaterialType::Type>()
	{
		return EShooterPhysMaterialType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShooterPhysMaterialType(EShooterPhysMaterialType_StaticEnum, TEXT("/Script/ShooterGame"), TEXT("EShooterPhysMaterialType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShooterGame_EShooterPhysMaterialType_Hash() { return 4031778192U; }
	UEnum* Z_Construct_UEnum_ShooterGame_EShooterPhysMaterialType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShooterPhysMaterialType"), 0, Get_Z_Construct_UEnum_ShooterGame_EShooterPhysMaterialType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShooterPhysMaterialType::Unknown", (int64)EShooterPhysMaterialType::Unknown },
				{ "EShooterPhysMaterialType::Concrete", (int64)EShooterPhysMaterialType::Concrete },
				{ "EShooterPhysMaterialType::Dirt", (int64)EShooterPhysMaterialType::Dirt },
				{ "EShooterPhysMaterialType::Water", (int64)EShooterPhysMaterialType::Water },
				{ "EShooterPhysMaterialType::Metal", (int64)EShooterPhysMaterialType::Metal },
				{ "EShooterPhysMaterialType::Wood", (int64)EShooterPhysMaterialType::Wood },
				{ "EShooterPhysMaterialType::Grass", (int64)EShooterPhysMaterialType::Grass },
				{ "EShooterPhysMaterialType::Glass", (int64)EShooterPhysMaterialType::Glass },
				{ "EShooterPhysMaterialType::Flesh", (int64)EShooterPhysMaterialType::Flesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** keep in sync with ShooterImpactEffect */" },
				{ "Concrete.Name", "EShooterPhysMaterialType::Concrete" },
				{ "Dirt.Name", "EShooterPhysMaterialType::Dirt" },
				{ "Flesh.Name", "EShooterPhysMaterialType::Flesh" },
				{ "Glass.Name", "EShooterPhysMaterialType::Glass" },
				{ "Grass.Name", "EShooterPhysMaterialType::Grass" },
				{ "Metal.Name", "EShooterPhysMaterialType::Metal" },
				{ "ModuleRelativePath", "Public/ShooterTypes.h" },
				{ "ToolTip", "keep in sync with ShooterImpactEffect" },
				{ "Unknown.Name", "EShooterPhysMaterialType::Unknown" },
				{ "Water.Name", "EShooterPhysMaterialType::Water" },
				{ "Wood.Name", "EShooterPhysMaterialType::Wood" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShooterGame,
				nullptr,
				"EShooterPhysMaterialType",
				"EShooterPhysMaterialType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTakeHitInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FTakeHitInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTakeHitInfo, Z_Construct_UPackage__Script_ShooterGame(), TEXT("TakeHitInfo"), sizeof(FTakeHitInfo), Get_Z_Construct_UScriptStruct_FTakeHitInfo_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FTakeHitInfo>()
{
	return FTakeHitInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTakeHitInfo(FTakeHitInfo::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("TakeHitInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFTakeHitInfo
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFTakeHitInfo()
	{
		UScriptStruct::DeferCppStructOps<FTakeHitInfo>(FName(TEXT("TakeHitInfo")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFTakeHitInfo;
	struct Z_Construct_UScriptStruct_FTakeHitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActualDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PawnInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCauser_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_DamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEventClassID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageEventClassID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKilled_MetaData[];
#endif
		static void NewProp_bKilled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKilled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnsureReplicationByte_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnsureReplicationByte;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneralDamageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointDamageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadialDamageEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** replicated information on a hit we've taken */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "replicated information on a hit we've taken" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTakeHitInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_ActualDamage_MetaData[] = {
		{ "Comment", "/** The amount of damage actually applied */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "The amount of damage actually applied" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_ActualDamage = { "ActualDamage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, ActualDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_ActualDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_ActualDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "Comment", "/** The damage type we were hit with. */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "The damage type we were hit with." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, DamageTypeClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PawnInstigator_MetaData[] = {
		{ "Comment", "/** Who hit us */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "Who hit us" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PawnInstigator = { "PawnInstigator", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, PawnInstigator), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PawnInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PawnInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageCauser_MetaData[] = {
		{ "Comment", "/** Who actually caused the damage */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "Who actually caused the damage" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageCauser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageEventClassID_MetaData[] = {
		{ "Comment", "/** Specifies which DamageEvent below describes the damage received. */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "Specifies which DamageEvent below describes the damage received." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageEventClassID = { "DamageEventClassID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, DamageEventClassID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageEventClassID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageEventClassID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled_MetaData[] = {
		{ "Comment", "/** Rather this was a kill */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "Rather this was a kill" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled_SetBit(void* Obj)
	{
		((FTakeHitInfo*)Obj)->bKilled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled = { "bKilled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTakeHitInfo), &Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_EnsureReplicationByte_MetaData[] = {
		{ "Comment", "/** A rolling counter used to ensure the struct is dirty and will replicate. */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "A rolling counter used to ensure the struct is dirty and will replicate." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_EnsureReplicationByte = { "EnsureReplicationByte", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, EnsureReplicationByte), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_EnsureReplicationByte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_EnsureReplicationByte_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_GeneralDamageEvent_MetaData[] = {
		{ "Comment", "/** Describes general damage. */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "Describes general damage." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_GeneralDamageEvent = { "GeneralDamageEvent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, GeneralDamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_GeneralDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_GeneralDamageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PointDamageEvent_MetaData[] = {
		{ "Comment", "/** Describes point damage, if that is what was received. */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "Describes point damage, if that is what was received." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PointDamageEvent = { "PointDamageEvent", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, PointDamageEvent), Z_Construct_UScriptStruct_FPointDamageEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PointDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PointDamageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_RadialDamageEvent_MetaData[] = {
		{ "Comment", "/** Describes radial damage, if that is what was received. */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "Describes radial damage, if that is what was received." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_RadialDamageEvent = { "RadialDamageEvent", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, RadialDamageEvent), Z_Construct_UScriptStruct_FRadialDamageEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_RadialDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_RadialDamageEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTakeHitInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_ActualDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PawnInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageEventClassID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_EnsureReplicationByte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_GeneralDamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PointDamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_RadialDamageEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		nullptr,
		&NewStructOps,
		"TakeHitInfo",
		sizeof(FTakeHitInfo),
		alignof(FTakeHitInfo),
		Z_Construct_UScriptStruct_FTakeHitInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTakeHitInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTakeHitInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TakeHitInfo"), sizeof(FTakeHitInfo), Get_Z_Construct_UScriptStruct_FTakeHitInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTakeHitInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTakeHitInfo_Hash() { return 3785252123U; }
class UScriptStruct* FDecalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FDecalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecalData, Z_Construct_UPackage__Script_ShooterGame(), TEXT("DecalData"), sizeof(FDecalData), Get_Z_Construct_UScriptStruct_FDecalData_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FDecalData>()
{
	return FDecalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDecalData(FDecalData::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("DecalData"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFDecalData
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFDecalData()
	{
		UScriptStruct::DeferCppStructOps<FDecalData>(FName(TEXT("DecalData")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFDecalData;
	struct Z_Construct_UScriptStruct_FDecalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/** material */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, DecalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DecalSize_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/** quad size (width & height) */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "quad size (width & height)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, DecalSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeSpan_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/** lifespan */" },
		{ "ModuleRelativePath", "Public/ShooterTypes.h" },
		{ "ToolTip", "lifespan" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, LifeSpan), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeSpan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeSpan,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		nullptr,
		&NewStructOps,
		"DecalData",
		sizeof(FDecalData),
		alignof(FDecalData),
		Z_Construct_UScriptStruct_FDecalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDecalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDecalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DecalData"), sizeof(FDecalData), Get_Z_Construct_UScriptStruct_FDecalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDecalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDecalData_Hash() { return 3576985588U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

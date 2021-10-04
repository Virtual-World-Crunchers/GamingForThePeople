// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Weapons/ShooterWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterWeapon() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnim();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterWeapon_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasIcon();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMatineeCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
class UScriptStruct* FWeaponAnim::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponAnim_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponAnim, Z_Construct_UPackage__Script_ShooterGame(), TEXT("WeaponAnim"), sizeof(FWeaponAnim), Get_Z_Construct_UScriptStruct_FWeaponAnim_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FWeaponAnim>()
{
	return FWeaponAnim::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponAnim(FWeaponAnim::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("WeaponAnim"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFWeaponAnim
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFWeaponAnim()
	{
		UScriptStruct::DeferCppStructOps<FWeaponAnim>(FName(TEXT("WeaponAnim")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFWeaponAnim;
	struct Z_Construct_UScriptStruct_FWeaponAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn3P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnim_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponAnim>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Pawn1P_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** animation played on pawn (1st person view) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "animation played on pawn (1st person view)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Pawn1P = { "Pawn1P", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAnim, Pawn1P), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Pawn1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Pawn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Pawn3P_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** animation played on pawn (3rd person view) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "animation played on pawn (3rd person view)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Pawn3P = { "Pawn3P", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAnim, Pawn3P), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Pawn3P_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Pawn3P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Pawn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Pawn3P,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		nullptr,
		&NewStructOps,
		"WeaponAnim",
		sizeof(FWeaponAnim),
		alignof(FWeaponAnim),
		Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnim_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnim_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnim()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponAnim_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponAnim"), sizeof(FWeaponAnim), Get_Z_Construct_UScriptStruct_FWeaponAnim_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponAnim_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponAnim_Hash() { return 2204522188U; }
class UScriptStruct* FWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, Z_Construct_UPackage__Script_ShooterGame(), TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponData(FWeaponData::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("WeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFWeaponData
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFWeaponData()
	{
		UScriptStruct::DeferCppStructOps<FWeaponData>(FName(TEXT("WeaponData")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFWeaponData;
	struct Z_Construct_UScriptStruct_FWeaponData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfiniteAmmo_MetaData[];
#endif
		static void NewProp_bInfiniteAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfiniteAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfiniteClip_MetaData[];
#endif
		static void NewProp_bInfiniteClip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfiniteClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPerClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoPerClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialClips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialClips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoAnimReloadDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoAnimReloadDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "Comment", "/** inifite ammo for reloads */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "inifite ammo for reloads" },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteAmmo_SetBit(void* Obj)
	{
		((FWeaponData*)Obj)->bInfiniteAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteAmmo = { "bInfiniteAmmo", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponData), &Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteAmmo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteClip_MetaData[] = {
		{ "Category", "Ammo" },
		{ "Comment", "/** infinite ammo in clip, no reload required */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "infinite ammo in clip, no reload required" },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteClip_SetBit(void* Obj)
	{
		((FWeaponData*)Obj)->bInfiniteClip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteClip = { "bInfiniteClip", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponData), &Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteClip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "Comment", "/** max ammo */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "max ammo" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, MaxAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_AmmoPerClip_MetaData[] = {
		{ "Category", "Ammo" },
		{ "Comment", "/** clip size */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "clip size" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_AmmoPerClip = { "AmmoPerClip", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, AmmoPerClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_AmmoPerClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_AmmoPerClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_InitialClips_MetaData[] = {
		{ "Category", "Ammo" },
		{ "Comment", "/** initial clips */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "initial clips" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_InitialClips = { "InitialClips", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, InitialClips), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_InitialClips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_InitialClips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** time between two consecutive shots */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "time between two consecutive shots" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, TimeBetweenShots), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NoAnimReloadDuration_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** failsafe reload duration if weapon doesn't have any animation for it */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "failsafe reload duration if weapon doesn't have any animation for it" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NoAnimReloadDuration = { "NoAnimReloadDuration", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, NoAnimReloadDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NoAnimReloadDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NoAnimReloadDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_bInfiniteClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_AmmoPerClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_InitialClips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NoAnimReloadDuration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		nullptr,
		&NewStructOps,
		"WeaponData",
		sizeof(FWeaponData),
		alignof(FWeaponData),
		Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash() { return 2011948333U; }
	DEFINE_FUNCTION(AShooterWeapon::execServerHandleFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerHandleFiring_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerHandleFiring_Validate"));
			return;
		}
		P_THIS->ServerHandleFiring_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon::execOnRep_Reload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon::execOnRep_BurstCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BurstCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon::execOnRep_MyPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MyPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon::execServerStopReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStopReload_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerStopReload_Validate"));
			return;
		}
		P_THIS->ServerStopReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon::execServerStartReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStartReload_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerStartReload_Validate"));
			return;
		}
		P_THIS->ServerStartReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon::execServerStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStopFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerStopFire_Validate"));
			return;
		}
		P_THIS->ServerStopFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon::execServerStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStartFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerStartFire_Validate"));
			return;
		}
		P_THIS->ServerStartFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon::execGetPawnOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AShooterCharacter**)Z_Param__Result=P_THIS->GetPawnOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterWeapon::execClientStartReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStartReload_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AShooterWeapon_ClientStartReload = FName(TEXT("ClientStartReload"));
	void AShooterWeapon::ClientStartReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterWeapon_ClientStartReload),NULL);
	}
	static FName NAME_AShooterWeapon_ServerHandleFiring = FName(TEXT("ServerHandleFiring"));
	void AShooterWeapon::ServerHandleFiring()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterWeapon_ServerHandleFiring),NULL);
	}
	static FName NAME_AShooterWeapon_ServerStartFire = FName(TEXT("ServerStartFire"));
	void AShooterWeapon::ServerStartFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterWeapon_ServerStartFire),NULL);
	}
	static FName NAME_AShooterWeapon_ServerStartReload = FName(TEXT("ServerStartReload"));
	void AShooterWeapon::ServerStartReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterWeapon_ServerStartReload),NULL);
	}
	static FName NAME_AShooterWeapon_ServerStopFire = FName(TEXT("ServerStopFire"));
	void AShooterWeapon::ServerStopFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterWeapon_ServerStopFire),NULL);
	}
	static FName NAME_AShooterWeapon_ServerStopReload = FName(TEXT("ServerStopReload"));
	void AShooterWeapon::ServerStopReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterWeapon_ServerStopReload),NULL);
	}
	void AShooterWeapon::StaticRegisterNativesAShooterWeapon()
	{
		UClass* Class = AShooterWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientStartReload", &AShooterWeapon::execClientStartReload },
			{ "GetPawnOwner", &AShooterWeapon::execGetPawnOwner },
			{ "OnRep_BurstCounter", &AShooterWeapon::execOnRep_BurstCounter },
			{ "OnRep_MyPawn", &AShooterWeapon::execOnRep_MyPawn },
			{ "OnRep_Reload", &AShooterWeapon::execOnRep_Reload },
			{ "ServerHandleFiring", &AShooterWeapon::execServerHandleFiring },
			{ "ServerStartFire", &AShooterWeapon::execServerStartFire },
			{ "ServerStartReload", &AShooterWeapon::execServerStartReload },
			{ "ServerStopFire", &AShooterWeapon::execServerStopFire },
			{ "ServerStopReload", &AShooterWeapon::execServerStopReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterWeapon_ClientStartReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_ClientStartReload_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** trigger reload from server */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "trigger reload from server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_ClientStartReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "ClientStartReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_ClientStartReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_ClientStartReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_ClientStartReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_ClientStartReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics
	{
		struct ShooterWeapon_eventGetPawnOwner_Parms
		{
			AShooterCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterWeapon_eventGetPawnOwner_Parms, ReturnValue), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Weapon" },
		{ "Comment", "/** get pawn owner */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "get pawn owner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "GetPawnOwner", nullptr, nullptr, sizeof(ShooterWeapon_eventGetPawnOwner_Parms), Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_GetPawnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_GetPawnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_OnRep_BurstCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_OnRep_BurstCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_OnRep_BurstCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "OnRep_BurstCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_OnRep_BurstCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_OnRep_BurstCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_OnRep_BurstCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_OnRep_BurstCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_OnRep_MyPawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_OnRep_MyPawn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Replication & effects\n" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "Replication & effects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_OnRep_MyPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "OnRep_MyPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_OnRep_MyPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_OnRep_MyPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_OnRep_MyPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_OnRep_MyPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_OnRep_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_OnRep_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_OnRep_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "OnRep_Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_OnRep_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_OnRep_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_OnRep_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_OnRep_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_ServerHandleFiring_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_ServerHandleFiring_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** [server] fire & update ammo */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "[server] fire & update ammo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_ServerHandleFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "ServerHandleFiring", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_ServerHandleFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_ServerHandleFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_ServerHandleFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_ServerHandleFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_ServerStartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_ServerStartFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Input - server side\n" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "Input - server side" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_ServerStartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "ServerStartFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_ServerStartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_ServerStartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_ServerStartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_ServerStartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_ServerStartReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_ServerStartReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_ServerStartReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "ServerStartReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_ServerStartReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_ServerStartReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_ServerStartReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_ServerStartReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_ServerStopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_ServerStopFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_ServerStopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "ServerStopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_ServerStopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_ServerStopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_ServerStopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_ServerStopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterWeapon_ServerStopReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_ServerStopReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_ServerStopReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon, nullptr, "ServerStopReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_ServerStopReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_ServerStopReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_ServerStopReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_ServerStopReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterWeapon_NoRegister()
	{
		return AShooterWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AShooterWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryClipIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryClipIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryClipIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryClipIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoIconsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoIconsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryClipIconOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrimaryClipIconOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryClipIconOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondaryClipIconOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Crosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimingCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseLaserDot_MetaData[];
#endif
		static void NewProp_UseLaserDot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseLaserDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomCrosshair_MetaData[];
#endif
		static void NewProp_UseCustomCrosshair_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomAimingCrosshair_MetaData[];
#endif
		static void NewProp_UseCustomAimingCrosshair_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomAimingCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideCrosshairWhileNotAiming_MetaData[];
#endif
		static void NewProp_bHideCrosshairWhileNotAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideCrosshairWhileNotAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerIntervalAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerIntervalAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowAutomaticWeaponCatchup_MetaData[];
#endif
		static void NewProp_bAllowAutomaticWeaponCatchup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowAutomaticWeaponCatchup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzlePSC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzlePSC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzlePSCSecondary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzlePSCSecondary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireCameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireForceFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireForceFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireLoopSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireLoopSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireFinishSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireFinishSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutOfAmmoSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutOfAmmoSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReloadAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopedMuzzleFX_MetaData[];
#endif
		static void NewProp_bLoopedMuzzleFX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopedMuzzleFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopedFireSound_MetaData[];
#endif
		static void NewProp_bLoopedFireSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopedFireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopedFireAnim_MetaData[];
#endif
		static void NewProp_bLoopedFireAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopedFireAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingReload_MetaData[];
#endif
		static void NewProp_bPendingReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmoInClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmoInClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BurstCounter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterWeapon_ClientStartReload, "ClientStartReload" }, // 3760225510
		{ &Z_Construct_UFunction_AShooterWeapon_GetPawnOwner, "GetPawnOwner" }, // 2453805032
		{ &Z_Construct_UFunction_AShooterWeapon_OnRep_BurstCounter, "OnRep_BurstCounter" }, // 1765653075
		{ &Z_Construct_UFunction_AShooterWeapon_OnRep_MyPawn, "OnRep_MyPawn" }, // 2209966756
		{ &Z_Construct_UFunction_AShooterWeapon_OnRep_Reload, "OnRep_Reload" }, // 461748387
		{ &Z_Construct_UFunction_AShooterWeapon_ServerHandleFiring, "ServerHandleFiring" }, // 3552465296
		{ &Z_Construct_UFunction_AShooterWeapon_ServerStartFire, "ServerStartFire" }, // 1991177739
		{ &Z_Construct_UFunction_AShooterWeapon_ServerStartReload, "ServerStartReload" }, // 3018345308
		{ &Z_Construct_UFunction_AShooterWeapon_ServerStopFire, "ServerStopFire" }, // 3256406247
		{ &Z_Construct_UFunction_AShooterWeapon_ServerStopReload, "ServerStopReload" }, // 1810931372
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/ShooterWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryIcon_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** icon displayed on the HUD when weapon is equipped as primary */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "icon displayed on the HUD when weapon is equipped as primary" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryIcon = { "PrimaryIcon", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, PrimaryIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryIcon_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** icon displayed on the HUD when weapon is secondary */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "icon displayed on the HUD when weapon is secondary" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryIcon = { "SecondaryIcon", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, SecondaryIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryClipIcon_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** bullet icon used to draw current clip (left side) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "bullet icon used to draw current clip (left side)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryClipIcon = { "PrimaryClipIcon", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, PrimaryClipIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryClipIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryClipIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryClipIcon_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** bullet icon used to draw secondary clip (left side) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "bullet icon used to draw secondary clip (left side)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryClipIcon = { "SecondaryClipIcon", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, SecondaryClipIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryClipIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryClipIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AmmoIconsCount_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** how many icons to draw per clip */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "how many icons to draw per clip" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AmmoIconsCount = { "AmmoIconsCount", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, AmmoIconsCount), METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AmmoIconsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AmmoIconsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryClipIconOffset_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** defines spacing between primary ammo icons (left side) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "defines spacing between primary ammo icons (left side)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryClipIconOffset = { "PrimaryClipIconOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, PrimaryClipIconOffset), METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryClipIconOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryClipIconOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryClipIconOffset_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** defines spacing between secondary ammo icons (left side) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "defines spacing between secondary ammo icons (left side)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryClipIconOffset = { "SecondaryClipIconOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, SecondaryClipIconOffset), METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryClipIconOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryClipIconOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Crosshair_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** crosshair parts icons (left, top, right, bottom and center) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "crosshair parts icons (left, top, right, bottom and center)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Crosshair = { "Crosshair", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Crosshair, AShooterWeapon), STRUCT_OFFSET(AShooterWeapon, Crosshair), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Crosshair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Crosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AimingCrosshair_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** crosshair parts icons when targeting (left, top, right, bottom and center) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "crosshair parts icons when targeting (left, top, right, bottom and center)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AimingCrosshair = { "AimingCrosshair", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(AimingCrosshair, AShooterWeapon), STRUCT_OFFSET(AShooterWeapon, AimingCrosshair), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AimingCrosshair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AimingCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseLaserDot_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** only use red colored center part of aiming crosshair */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "only use red colored center part of aiming crosshair" },
	};
#endif
	void Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseLaserDot_SetBit(void* Obj)
	{
		((AShooterWeapon*)Obj)->UseLaserDot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseLaserDot = { "UseLaserDot", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterWeapon), &Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseLaserDot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseLaserDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseLaserDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomCrosshair_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** false = default crosshair */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "false = default crosshair" },
	};
#endif
	void Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomCrosshair_SetBit(void* Obj)
	{
		((AShooterWeapon*)Obj)->UseCustomCrosshair = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomCrosshair = { "UseCustomCrosshair", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterWeapon), &Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomCrosshair_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomCrosshair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomAimingCrosshair_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** false = use custom one if set, otherwise default crosshair */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "false = use custom one if set, otherwise default crosshair" },
	};
#endif
	void Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomAimingCrosshair_SetBit(void* Obj)
	{
		((AShooterWeapon*)Obj)->UseCustomAimingCrosshair = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomAimingCrosshair = { "UseCustomAimingCrosshair", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterWeapon), &Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomAimingCrosshair_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomAimingCrosshair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomAimingCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bHideCrosshairWhileNotAiming_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** true - crosshair will not be shown unless aiming with the weapon */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "true - crosshair will not be shown unless aiming with the weapon" },
	};
#endif
	void Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bHideCrosshairWhileNotAiming_SetBit(void* Obj)
	{
		((AShooterWeapon*)Obj)->bHideCrosshairWhileNotAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bHideCrosshairWhileNotAiming = { "bHideCrosshairWhileNotAiming", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterWeapon), &Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bHideCrosshairWhileNotAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bHideCrosshairWhileNotAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bHideCrosshairWhileNotAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_TimerIntervalAdjustment_MetaData[] = {
		{ "Comment", "/** Adjustment to handle frame rate affecting actual timer interval. */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "Adjustment to handle frame rate affecting actual timer interval." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_TimerIntervalAdjustment = { "TimerIntervalAdjustment", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, TimerIntervalAdjustment), METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_TimerIntervalAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_TimerIntervalAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_MetaData[] = {
		{ "Comment", "/** Whether to allow automatic weapons to catch up with shorter refire cycles */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "Whether to allow automatic weapons to catch up with shorter refire cycles" },
	};
#endif
	void Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_SetBit(void* Obj)
	{
		((AShooterWeapon*)Obj)->bAllowAutomaticWeaponCatchup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup = { "bAllowAutomaticWeaponCatchup", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterWeapon), &Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MyPawn_MetaData[] = {
		{ "Comment", "/** pawn owner */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "pawn owner" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MyPawn = { "MyPawn", "OnRep_MyPawn", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, MyPawn), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MyPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MyPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_WeaponConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** weapon data */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "weapon data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_WeaponConfig = { "WeaponConfig", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, WeaponConfig), Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_WeaponConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_WeaponConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** weapon mesh: 1st person view */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "weapon mesh: 1st person view" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Mesh3P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** weapon mesh: 3rd person view */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "weapon mesh: 3rd person view" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Mesh3P = { "Mesh3P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, Mesh3P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Mesh3P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Mesh3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireAC_MetaData[] = {
		{ "Comment", "/** firing audio (bLoopedFireSound set) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "firing audio (bLoopedFireSound set)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireAC = { "FireAC", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, FireAC), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireAC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireAC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleAttachPoint_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** name of bone/socket for muzzle in weapon mesh */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "name of bone/socket for muzzle in weapon mesh" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleAttachPoint = { "MuzzleAttachPoint", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, MuzzleAttachPoint), METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** FX for muzzle flash */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "FX for muzzle flash" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleFX = { "MuzzleFX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, MuzzleFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzlePSC_MetaData[] = {
		{ "Comment", "/** spawned component for muzzle FX */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "spawned component for muzzle FX" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzlePSC = { "MuzzlePSC", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, MuzzlePSC), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzlePSC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzlePSC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzlePSCSecondary_MetaData[] = {
		{ "Comment", "/** spawned component for second muzzle FX (Needed for split screen) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "spawned component for second muzzle FX (Needed for split screen)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzlePSCSecondary = { "MuzzlePSCSecondary", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, MuzzlePSCSecondary), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzlePSCSecondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzlePSCSecondary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireCameraShake_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** camera shake on firing */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "camera shake on firing" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireCameraShake = { "FireCameraShake", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, FireCameraShake), Z_Construct_UClass_UMatineeCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireCameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireCameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireForceFeedback_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** force feedback effect to play when the weapon is fired */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "force feedback effect to play when the weapon is fired" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireForceFeedback = { "FireForceFeedback", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, FireForceFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireForceFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** single fire sound (bLoopedFireSound not set) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "single fire sound (bLoopedFireSound not set)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, FireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireLoopSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** looped fire sound (bLoopedFireSound set) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "looped fire sound (bLoopedFireSound set)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireLoopSound = { "FireLoopSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, FireLoopSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireLoopSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireLoopSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireFinishSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** finished burst sound (bLoopedFireSound set) */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "finished burst sound (bLoopedFireSound set)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireFinishSound = { "FireFinishSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, FireFinishSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireFinishSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireFinishSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_OutOfAmmoSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** out of ammo sound */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "out of ammo sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_OutOfAmmoSound = { "OutOfAmmoSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, OutOfAmmoSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_OutOfAmmoSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_OutOfAmmoSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ReloadSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** reload sound */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "reload sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ReloadSound = { "ReloadSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, ReloadSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ReloadSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ReloadSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ReloadAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** reload animations */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "reload animations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ReloadAnim = { "ReloadAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, ReloadAnim), Z_Construct_UScriptStruct_FWeaponAnim, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ReloadAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ReloadAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_EquipSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** equip sound */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "equip sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_EquipSound = { "EquipSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, EquipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_EquipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_EquipSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_EquipAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** equip animations */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "equip animations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_EquipAnim = { "EquipAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, EquipAnim), Z_Construct_UScriptStruct_FWeaponAnim, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_EquipAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_EquipAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** fire animations */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "fire animations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireAnim = { "FireAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, FireAnim), Z_Construct_UScriptStruct_FWeaponAnim, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedMuzzleFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** is muzzle FX looped? */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "is muzzle FX looped?" },
	};
#endif
	void Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedMuzzleFX_SetBit(void* Obj)
	{
		((AShooterWeapon*)Obj)->bLoopedMuzzleFX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedMuzzleFX = { "bLoopedMuzzleFX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterWeapon), &Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedMuzzleFX_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedMuzzleFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedMuzzleFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** is fire sound looped? */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "is fire sound looped?" },
	};
#endif
	void Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireSound_SetBit(void* Obj)
	{
		((AShooterWeapon*)Obj)->bLoopedFireSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireSound = { "bLoopedFireSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterWeapon), &Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** is fire animation looped? */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "is fire animation looped?" },
	};
#endif
	void Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireAnim_SetBit(void* Obj)
	{
		((AShooterWeapon*)Obj)->bLoopedFireAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireAnim = { "bLoopedFireAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterWeapon), &Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bPendingReload_MetaData[] = {
		{ "Comment", "/** is reload animation playing? */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "is reload animation playing?" },
	};
#endif
	void Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bPendingReload_SetBit(void* Obj)
	{
		((AShooterWeapon*)Obj)->bPendingReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bPendingReload = { "bPendingReload", "OnRep_Reload", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterWeapon), &Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bPendingReload_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bPendingReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bPendingReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Comment", "/** current total ammo */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "current total ammo" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_CurrentAmmoInClip_MetaData[] = {
		{ "Comment", "/** current ammo - inside clip */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "current ammo - inside clip" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_CurrentAmmoInClip = { "CurrentAmmoInClip", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, CurrentAmmoInClip), METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_CurrentAmmoInClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_CurrentAmmoInClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Statics::NewProp_BurstCounter_MetaData[] = {
		{ "Comment", "/** burst counter, used for replicating fire events to remote clients */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon.h" },
		{ "ToolTip", "burst counter, used for replicating fire events to remote clients" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterWeapon_Statics::NewProp_BurstCounter = { "BurstCounter", "OnRep_BurstCounter", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon, BurstCounter), METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_BurstCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::NewProp_BurstCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryClipIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryClipIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AmmoIconsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_PrimaryClipIconOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_SecondaryClipIconOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Crosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_AimingCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseLaserDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_UseCustomAimingCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bHideCrosshairWhileNotAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_TimerIntervalAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MyPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_WeaponConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_Mesh3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireAC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzleFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzlePSC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_MuzzlePSCSecondary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireCameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireForceFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireLoopSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireFinishSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_OutOfAmmoSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ReloadSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_ReloadAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_EquipSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_EquipAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_FireAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedMuzzleFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bLoopedFireAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_bPendingReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_CurrentAmmoInClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Statics::NewProp_BurstCounter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterWeapon_Statics::ClassParams = {
		&AShooterWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterWeapon, 1411026543);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterWeapon>()
	{
		return AShooterWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterWeapon(Z_Construct_UClass_AShooterWeapon, &AShooterWeapon::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterWeapon"), false, nullptr, nullptr, nullptr);

	void AShooterWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MyPawn(TEXT("MyPawn"));
		static const FName Name_bPendingReload(TEXT("bPendingReload"));
		static const FName Name_CurrentAmmo(TEXT("CurrentAmmo"));
		static const FName Name_CurrentAmmoInClip(TEXT("CurrentAmmoInClip"));
		static const FName Name_BurstCounter(TEXT("BurstCounter"));

		const bool bIsValid = true
			&& Name_MyPawn == ClassReps[(int32)ENetFields_Private::MyPawn].Property->GetFName()
			&& Name_bPendingReload == ClassReps[(int32)ENetFields_Private::bPendingReload].Property->GetFName()
			&& Name_CurrentAmmo == ClassReps[(int32)ENetFields_Private::CurrentAmmo].Property->GetFName()
			&& Name_CurrentAmmoInClip == ClassReps[(int32)ENetFields_Private::CurrentAmmoInClip].Property->GetFName()
			&& Name_BurstCounter == ClassReps[(int32)ENetFields_Private::BurstCounter].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShooterWeapon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

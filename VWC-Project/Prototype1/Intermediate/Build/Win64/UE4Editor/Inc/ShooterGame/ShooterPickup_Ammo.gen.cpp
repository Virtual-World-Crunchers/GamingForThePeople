// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Pickups/ShooterPickup_Ammo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPickup_Ammo() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPickup_Ammo_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPickup_Ammo();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPickup();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterWeapon_NoRegister();
// End Cross Module References
	void AShooterPickup_Ammo::StaticRegisterNativesAShooterPickup_Ammo()
	{
	}
	UClass* Z_Construct_UClass_AShooterPickup_Ammo_NoRegister()
	{
		return AShooterPickup_Ammo::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPickup_Ammo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoClips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoClips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPickup_Ammo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooterPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Ammo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A pickup object that replenishes ammunition for a weapon\n" },
		{ "IncludePath", "Pickups/ShooterPickup_Ammo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup_Ammo.h" },
		{ "ToolTip", "A pickup object that replenishes ammunition for a weapon" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Ammo_Statics::NewProp_AmmoClips_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/** how much ammo does it give? */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup_Ammo.h" },
		{ "ToolTip", "how much ammo does it give?" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterPickup_Ammo_Statics::NewProp_AmmoClips = { "AmmoClips", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPickup_Ammo, AmmoClips), METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Ammo_Statics::NewProp_AmmoClips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Ammo_Statics::NewProp_AmmoClips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Ammo_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/** which weapon gets ammo? */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup_Ammo.h" },
		{ "ToolTip", "which weapon gets ammo?" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPickup_Ammo_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPickup_Ammo, WeaponType), Z_Construct_UClass_AShooterWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Ammo_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Ammo_Statics::NewProp_WeaponType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPickup_Ammo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Ammo_Statics::NewProp_AmmoClips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Ammo_Statics::NewProp_WeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPickup_Ammo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPickup_Ammo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterPickup_Ammo_Statics::ClassParams = {
		&AShooterPickup_Ammo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterPickup_Ammo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Ammo_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Ammo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Ammo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPickup_Ammo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterPickup_Ammo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterPickup_Ammo, 3391196534);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterPickup_Ammo>()
	{
		return AShooterPickup_Ammo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterPickup_Ammo(Z_Construct_UClass_AShooterPickup_Ammo, &AShooterPickup_Ammo::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterPickup_Ammo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPickup_Ammo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

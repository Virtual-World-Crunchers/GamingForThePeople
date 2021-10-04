// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Effects/ShooterExplosionEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterExplosionEffect() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterExplosionEffect_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterExplosionEffect();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDecalData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	void AShooterExplosionEffect::StaticRegisterNativesAShooterExplosionEffect()
	{
	}
	UClass* Z_Construct_UClass_AShooterExplosionEffect_NoRegister()
	{
		return AShooterExplosionEffect::StaticClass();
	}
	struct Z_Construct_UClass_AShooterExplosionEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionLightFadeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionLightFadeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Decal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterExplosionEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterExplosionEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// Spawnable effect for explosion - NOT replicated to clients\n// Each explosion type should be defined as separate blueprint\n//\n" },
		{ "IncludePath", "Effects/ShooterExplosionEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effects/ShooterExplosionEffect.h" },
		{ "ToolTip", "Spawnable effect for explosion - NOT replicated to clients\nEach explosion type should be defined as separate blueprint" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionFX_MetaData[] = {
		{ "Category", "Effect" },
		{ "Comment", "/** explosion FX */" },
		{ "ModuleRelativePath", "Public/Effects/ShooterExplosionEffect.h" },
		{ "ToolTip", "explosion FX" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionFX = { "ExplosionFX", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterExplosionEffect, ExplosionFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionLight_MetaData[] = {
		{ "Category", "Effect" },
		{ "Comment", "/** explosion light */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/ShooterExplosionEffect.h" },
		{ "ToolTip", "explosion light" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionLight = { "ExplosionLight", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterExplosionEffect, ExplosionLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionLightFadeOut_MetaData[] = {
		{ "Category", "Effect" },
		{ "Comment", "/** how long keep explosion light on? */" },
		{ "ModuleRelativePath", "Public/Effects/ShooterExplosionEffect.h" },
		{ "ToolTip", "how long keep explosion light on?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionLightFadeOut = { "ExplosionLightFadeOut", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterExplosionEffect, ExplosionLightFadeOut), METADATA_PARAMS(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionLightFadeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionLightFadeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionSound_MetaData[] = {
		{ "Category", "Effect" },
		{ "Comment", "/** explosion sound */" },
		{ "ModuleRelativePath", "Public/Effects/ShooterExplosionEffect.h" },
		{ "ToolTip", "explosion sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionSound = { "ExplosionSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterExplosionEffect, ExplosionSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_Decal_MetaData[] = {
		{ "Category", "Effect" },
		{ "Comment", "/** explosion decals */" },
		{ "ModuleRelativePath", "Public/Effects/ShooterExplosionEffect.h" },
		{ "ToolTip", "explosion decals" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_Decal = { "Decal", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterExplosionEffect, Decal), Z_Construct_UScriptStruct_FDecalData, METADATA_PARAMS(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_Decal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_Decal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_SurfaceHit_MetaData[] = {
		{ "Category", "Surface" },
		{ "Comment", "/** surface data for spawning */" },
		{ "ModuleRelativePath", "Public/Effects/ShooterExplosionEffect.h" },
		{ "ToolTip", "surface data for spawning" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_SurfaceHit = { "SurfaceHit", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterExplosionEffect, SurfaceHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_SurfaceHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_SurfaceHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterExplosionEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionLightFadeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_ExplosionSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_Decal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterExplosionEffect_Statics::NewProp_SurfaceHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterExplosionEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterExplosionEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterExplosionEffect_Statics::ClassParams = {
		&AShooterExplosionEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterExplosionEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterExplosionEffect_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterExplosionEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterExplosionEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterExplosionEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterExplosionEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterExplosionEffect, 2426668779);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterExplosionEffect>()
	{
		return AShooterExplosionEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterExplosionEffect(Z_Construct_UClass_AShooterExplosionEffect, &AShooterExplosionEffect::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterExplosionEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterExplosionEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

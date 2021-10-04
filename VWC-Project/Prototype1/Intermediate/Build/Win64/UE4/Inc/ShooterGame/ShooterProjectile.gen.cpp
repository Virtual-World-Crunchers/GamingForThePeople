// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Weapons/ShooterProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterProjectile() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterProjectile_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterExplosionEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShooterProjectile::execOnRep_Exploded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Exploded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterProjectile::execOnImpact)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImpact(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	void AShooterProjectile::StaticRegisterNativesAShooterProjectile()
	{
		UClass* Class = AShooterProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnImpact", &AShooterProjectile::execOnImpact },
			{ "OnRep_Exploded", &AShooterProjectile::execOnRep_Exploded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics
	{
		struct ShooterProjectile_eventOnImpact_Parms
		{
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterProjectile_eventOnImpact_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** handle hit */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterProjectile.h" },
		{ "ToolTip", "handle hit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterProjectile, nullptr, "OnImpact", nullptr, nullptr, sizeof(ShooterProjectile_eventOnImpact_Parms), Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterProjectile_OnImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterProjectile_OnImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterProjectile_OnRep_Exploded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterProjectile_OnRep_Exploded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** [client] explosion happened */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterProjectile.h" },
		{ "ToolTip", "[client] explosion happened" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterProjectile_OnRep_Exploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterProjectile, nullptr, "OnRep_Exploded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterProjectile_OnRep_Exploded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterProjectile_OnRep_Exploded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterProjectile_OnRep_Exploded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterProjectile_OnRep_Exploded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterProjectile_NoRegister()
	{
		return AShooterProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AShooterProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExplosionTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExploded_MetaData[];
#endif
		static void NewProp_bExploded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExploded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterProjectile_OnImpact, "OnImpact" }, // 3299060750
		{ &Z_Construct_UFunction_AShooterProjectile_OnRep_Exploded, "OnRep_Exploded" }, // 3184358000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterProjectile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// \n" },
		{ "IncludePath", "Weapons/ShooterProjectile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterProjectile_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterProjectile.h" },
		{ "ToolTip", "movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterProjectile_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterProjectile, MovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterProjectile_Statics::NewProp_MovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::NewProp_MovementComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterProjectile_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** collisions */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterProjectile.h" },
		{ "ToolTip", "collisions" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterProjectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterProjectile_Statics::NewProp_CollisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ParticleComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ParticleComp = { "ParticleComp", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterProjectile, ParticleComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ParticleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ParticleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ExplosionTemplate_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** effects for explosion */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterProjectile.h" },
		{ "ToolTip", "effects for explosion" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ExplosionTemplate = { "ExplosionTemplate", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterProjectile, ExplosionTemplate), Z_Construct_UClass_AShooterExplosionEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ExplosionTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ExplosionTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterProjectile_Statics::NewProp_bExploded_MetaData[] = {
		{ "Comment", "/** did it explode? */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterProjectile.h" },
		{ "ToolTip", "did it explode?" },
	};
#endif
	void Z_Construct_UClass_AShooterProjectile_Statics::NewProp_bExploded_SetBit(void* Obj)
	{
		((AShooterProjectile*)Obj)->bExploded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterProjectile_Statics::NewProp_bExploded = { "bExploded", "OnRep_Exploded", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterProjectile), &Z_Construct_UClass_AShooterProjectile_Statics::NewProp_bExploded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterProjectile_Statics::NewProp_bExploded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::NewProp_bExploded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterProjectile_Statics::NewProp_MovementComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterProjectile_Statics::NewProp_CollisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ParticleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ExplosionTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterProjectile_Statics::NewProp_bExploded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterProjectile_Statics::ClassParams = {
		&AShooterProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterProjectile, 4130542663);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterProjectile>()
	{
		return AShooterProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterProjectile(Z_Construct_UClass_AShooterProjectile, &AShooterProjectile::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterProjectile"), false, nullptr, nullptr, nullptr);

	void AShooterProjectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bExploded(TEXT("bExploded"));

		const bool bIsValid = true
			&& Name_bExploded == ClassReps[(int32)ENetFields_Private::bExploded].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShooterProjectile"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

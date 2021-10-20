// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Weapons/ShooterWeapon_Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterWeapon_Projectile() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileWeaponData();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterWeapon_Projectile_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterWeapon_Projectile();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterWeapon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
// End Cross Module References
class UScriptStruct* FProjectileWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FProjectileWeaponData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileWeaponData, Z_Construct_UPackage__Script_ShooterGame(), TEXT("ProjectileWeaponData"), sizeof(FProjectileWeaponData), Get_Z_Construct_UScriptStruct_FProjectileWeaponData_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FProjectileWeaponData>()
{
	return FProjectileWeaponData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProjectileWeaponData(FProjectileWeaponData::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("ProjectileWeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFProjectileWeaponData
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFProjectileWeaponData()
	{
		UScriptStruct::DeferCppStructOps<FProjectileWeaponData>(FName(TEXT("ProjectileWeaponData")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFProjectileWeaponData;
	struct Z_Construct_UScriptStruct_FProjectileWeaponData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExplosionDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Projectile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileWeaponData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** projectile class */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Projectile.h" },
		{ "ToolTip", "projectile class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileWeaponData, ProjectileClass), Z_Construct_UClass_AShooterProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ProjectileLife_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** life time */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Projectile.h" },
		{ "ToolTip", "life time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ProjectileLife = { "ProjectileLife", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileWeaponData, ProjectileLife), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ProjectileLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ProjectileLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** damage at impact point */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Projectile.h" },
		{ "ToolTip", "damage at impact point" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileWeaponData, ExplosionDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ExplosionDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ExplosionDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** radius of damage */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Projectile.h" },
		{ "ToolTip", "radius of damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileWeaponData, ExplosionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** type of damage */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Projectile.h" },
		{ "ToolTip", "type of damage" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileWeaponData, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ProjectileLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ExplosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_ExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::NewProp_DamageType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		nullptr,
		&NewStructOps,
		"ProjectileWeaponData",
		sizeof(FProjectileWeaponData),
		alignof(FProjectileWeaponData),
		Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectileWeaponData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProjectileWeaponData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProjectileWeaponData"), sizeof(FProjectileWeaponData), Get_Z_Construct_UScriptStruct_FProjectileWeaponData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProjectileWeaponData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProjectileWeaponData_Hash() { return 784122718U; }
	DEFINE_FUNCTION(AShooterWeapon_Projectile::execServerFireProjectile)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ShootDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerFireProjectile_Validate(Z_Param_Origin,Z_Param_ShootDir))
		{
			RPC_ValidateFailed(TEXT("ServerFireProjectile_Validate"));
			return;
		}
		P_THIS->ServerFireProjectile_Implementation(Z_Param_Origin,Z_Param_ShootDir);
		P_NATIVE_END;
	}
	static FName NAME_AShooterWeapon_Projectile_ServerFireProjectile = FName(TEXT("ServerFireProjectile"));
	void AShooterWeapon_Projectile::ServerFireProjectile(FVector Origin, FVector_NetQuantizeNormal ShootDir)
	{
		ShooterWeapon_Projectile_eventServerFireProjectile_Parms Parms;
		Parms.Origin=Origin;
		Parms.ShootDir=ShootDir;
		ProcessEvent(FindFunctionChecked(NAME_AShooterWeapon_Projectile_ServerFireProjectile),&Parms);
	}
	void AShooterWeapon_Projectile::StaticRegisterNativesAShooterWeapon_Projectile()
	{
		UClass* Class = AShooterWeapon_Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerFireProjectile", &AShooterWeapon_Projectile::execServerFireProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterWeapon_Projectile_eventServerFireProjectile_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::NewProp_ShootDir = { "ShootDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterWeapon_Projectile_eventServerFireProjectile_Parms, ShootDir), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::NewProp_ShootDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** spawn projectile on server */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Projectile.h" },
		{ "ToolTip", "spawn projectile on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterWeapon_Projectile, nullptr, "ServerFireProjectile", nullptr, nullptr, sizeof(ShooterWeapon_Projectile_eventServerFireProjectile_Parms), Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterWeapon_Projectile_NoRegister()
	{
		return AShooterWeapon_Projectile::StaticClass();
	}
	struct Z_Construct_UClass_AShooterWeapon_Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterWeapon_Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooterWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterWeapon_Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterWeapon_Projectile_ServerFireProjectile, "ServerFireProjectile" }, // 3635240926
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Projectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A weapon that fires a visible projectile\n" },
		{ "IncludePath", "Weapons/ShooterWeapon_Projectile.h" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Projectile.h" },
		{ "ToolTip", "A weapon that fires a visible projectile" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterWeapon_Projectile_Statics::NewProp_ProjectileConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** weapon config */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterWeapon_Projectile.h" },
		{ "ToolTip", "weapon config" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterWeapon_Projectile_Statics::NewProp_ProjectileConfig = { "ProjectileConfig", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterWeapon_Projectile, ProjectileConfig), Z_Construct_UScriptStruct_FProjectileWeaponData, METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Projectile_Statics::NewProp_ProjectileConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Projectile_Statics::NewProp_ProjectileConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterWeapon_Projectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterWeapon_Projectile_Statics::NewProp_ProjectileConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterWeapon_Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterWeapon_Projectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterWeapon_Projectile_Statics::ClassParams = {
		&AShooterWeapon_Projectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterWeapon_Projectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Projectile_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterWeapon_Projectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterWeapon_Projectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterWeapon_Projectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterWeapon_Projectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterWeapon_Projectile, 2713989505);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterWeapon_Projectile>()
	{
		return AShooterWeapon_Projectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterWeapon_Projectile(Z_Construct_UClass_AShooterWeapon_Projectile, &AShooterWeapon_Projectile::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterWeapon_Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterWeapon_Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

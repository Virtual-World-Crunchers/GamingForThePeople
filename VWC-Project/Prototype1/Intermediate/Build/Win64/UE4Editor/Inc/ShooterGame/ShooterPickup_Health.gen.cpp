// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Pickups/ShooterPickup_Health.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPickup_Health() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPickup_Health_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPickup_Health();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPickup();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterPickup_Health::StaticRegisterNativesAShooterPickup_Health()
	{
	}
	UClass* Z_Construct_UClass_AShooterPickup_Health_NoRegister()
	{
		return AShooterPickup_Health::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPickup_Health_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPickup_Health_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooterPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Health_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A pickup object that replenishes character health\n" },
		{ "IncludePath", "Pickups/ShooterPickup_Health.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup_Health.h" },
		{ "ToolTip", "A pickup object that replenishes character health" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Health_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/** how much health does it give? */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup_Health.h" },
		{ "ToolTip", "how much health does it give?" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterPickup_Health_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPickup_Health, Health), METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Health_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Health_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPickup_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Health_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPickup_Health_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPickup_Health>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterPickup_Health_Statics::ClassParams = {
		&AShooterPickup_Health::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterPickup_Health_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Health_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Health_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Health_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPickup_Health()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterPickup_Health_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterPickup_Health, 1784164646);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterPickup_Health>()
	{
		return AShooterPickup_Health::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterPickup_Health(Z_Construct_UClass_AShooterPickup_Health, &AShooterPickup_Health::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterPickup_Health"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPickup_Health);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

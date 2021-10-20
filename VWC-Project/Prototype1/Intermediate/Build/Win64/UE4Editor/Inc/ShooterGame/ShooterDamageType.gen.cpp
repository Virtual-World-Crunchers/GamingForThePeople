// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Weapons/ShooterDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterDamageType() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterDamageType_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasIcon();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
// End Cross Module References
	void UShooterDamageType::StaticRegisterNativesUShooterDamageType()
	{
	}
	UClass* Z_Construct_UClass_UShooterDamageType_NoRegister()
	{
		return UShooterDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UShooterDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitForceFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitForceFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledForceFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledForceFeedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// DamageType class that specifies an icon to display\n" },
		{ "IncludePath", "Weapons/ShooterDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterDamageType.h" },
		{ "ToolTip", "DamageType class that specifies an icon to display" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterDamageType_Statics::NewProp_KillIcon_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** icon displayed in death messages log when killed with this weapon */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterDamageType.h" },
		{ "ToolTip", "icon displayed in death messages log when killed with this weapon" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooterDamageType_Statics::NewProp_KillIcon = { "KillIcon", nullptr, (EPropertyFlags)0x0010000000010011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterDamageType, KillIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_UShooterDamageType_Statics::NewProp_KillIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterDamageType_Statics::NewProp_KillIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterDamageType_Statics::NewProp_HitForceFeedback_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** force feedback effect to play on a player hit by this damage type */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterDamageType.h" },
		{ "ToolTip", "force feedback effect to play on a player hit by this damage type" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterDamageType_Statics::NewProp_HitForceFeedback = { "HitForceFeedback", nullptr, (EPropertyFlags)0x0010000000010011, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterDamageType, HitForceFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterDamageType_Statics::NewProp_HitForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterDamageType_Statics::NewProp_HitForceFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterDamageType_Statics::NewProp_KilledForceFeedback_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** force feedback effect to play on a player killed by this damage type */" },
		{ "ModuleRelativePath", "Public/Weapons/ShooterDamageType.h" },
		{ "ToolTip", "force feedback effect to play on a player killed by this damage type" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterDamageType_Statics::NewProp_KilledForceFeedback = { "KilledForceFeedback", nullptr, (EPropertyFlags)0x0010000000010011, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterDamageType, KilledForceFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterDamageType_Statics::NewProp_KilledForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterDamageType_Statics::NewProp_KilledForceFeedback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterDamageType_Statics::NewProp_KillIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterDamageType_Statics::NewProp_HitForceFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterDamageType_Statics::NewProp_KilledForceFeedback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterDamageType_Statics::ClassParams = {
		&UShooterDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterDamageType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterDamageType_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterDamageType, 3650911752);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterDamageType>()
	{
		return UShooterDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterDamageType(Z_Construct_UClass_UShooterDamageType, &UShooterDamageType::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

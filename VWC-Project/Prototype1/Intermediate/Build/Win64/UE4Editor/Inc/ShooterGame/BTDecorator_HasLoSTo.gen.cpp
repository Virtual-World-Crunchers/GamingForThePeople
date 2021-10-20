// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Bots/BTDecorator_HasLoSTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_HasLoSTo() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UBTDecorator_HasLoSTo_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UBTDecorator_HasLoSTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_HasLoSTo::StaticRegisterNativesUBTDecorator_HasLoSTo()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_HasLoSTo_NoRegister()
	{
		return UBTDecorator_HasLoSTo::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Checks if the AI pawn has Line of sight to the specified Actor or Location(Vector).\n" },
		{ "IncludePath", "Bots/BTDecorator_HasLoSTo.h" },
		{ "ModuleRelativePath", "Public/Bots/BTDecorator_HasLoSTo.h" },
		{ "ToolTip", "Checks if the AI pawn has Line of sight to the specified Actor or Location(Vector)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::NewProp_EnemyKey_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Bots/BTDecorator_HasLoSTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::NewProp_EnemyKey = { "EnemyKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_HasLoSTo, EnemyKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::NewProp_EnemyKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::NewProp_EnemyKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::NewProp_EnemyKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_HasLoSTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::ClassParams = {
		&UBTDecorator_HasLoSTo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_HasLoSTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_HasLoSTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_HasLoSTo, 1518733899);
	template<> SHOOTERGAME_API UClass* StaticClass<UBTDecorator_HasLoSTo>()
	{
		return UBTDecorator_HasLoSTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_HasLoSTo(Z_Construct_UClass_UBTDecorator_HasLoSTo, &UBTDecorator_HasLoSTo::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UBTDecorator_HasLoSTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_HasLoSTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

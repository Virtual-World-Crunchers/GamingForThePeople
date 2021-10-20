// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Bots/BTTask_FindPointNearEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindPointNearEnemy() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UBTTask_FindPointNearEnemy_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UBTTask_FindPointNearEnemy();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UBTTask_FindPointNearEnemy::StaticRegisterNativesUBTTask_FindPointNearEnemy()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_FindPointNearEnemy_NoRegister()
	{
		return UBTTask_FindPointNearEnemy::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindPointNearEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindPointNearEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindPointNearEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Bot AI task that tries to find a location near the current enemy\n" },
		{ "IncludePath", "Bots/BTTask_FindPointNearEnemy.h" },
		{ "ModuleRelativePath", "Public/Bots/BTTask_FindPointNearEnemy.h" },
		{ "ToolTip", "Bot AI task that tries to find a location near the current enemy" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindPointNearEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindPointNearEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindPointNearEnemy_Statics::ClassParams = {
		&UBTTask_FindPointNearEnemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindPointNearEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPointNearEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FindPointNearEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_FindPointNearEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_FindPointNearEnemy, 3162202948);
	template<> SHOOTERGAME_API UClass* StaticClass<UBTTask_FindPointNearEnemy>()
	{
		return UBTTask_FindPointNearEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_FindPointNearEnemy(Z_Construct_UClass_UBTTask_FindPointNearEnemy, &UBTTask_FindPointNearEnemy::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UBTTask_FindPointNearEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindPointNearEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

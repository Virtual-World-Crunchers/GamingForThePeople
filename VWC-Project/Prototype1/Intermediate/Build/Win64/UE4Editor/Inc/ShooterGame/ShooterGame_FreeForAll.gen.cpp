// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Online/ShooterGame_FreeForAll.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGame_FreeForAll() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGame_FreeForAll_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGame_FreeForAll();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGameMode();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerState_NoRegister();
// End Cross Module References
	void AShooterGame_FreeForAll::StaticRegisterNativesAShooterGame_FreeForAll()
	{
	}
	UClass* Z_Construct_UClass_AShooterGame_FreeForAll_NoRegister()
	{
		return AShooterGame_FreeForAll::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGame_FreeForAll_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WinnerPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGame_FreeForAll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooterGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGame_FreeForAll_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Online/ShooterGame_FreeForAll.h" },
		{ "ModuleRelativePath", "Public/Online/ShooterGame_FreeForAll.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGame_FreeForAll_Statics::NewProp_WinnerPlayerState_MetaData[] = {
		{ "Comment", "/** best player */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGame_FreeForAll.h" },
		{ "ToolTip", "best player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterGame_FreeForAll_Statics::NewProp_WinnerPlayerState = { "WinnerPlayerState", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGame_FreeForAll, WinnerPlayerState), Z_Construct_UClass_AShooterPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterGame_FreeForAll_Statics::NewProp_WinnerPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGame_FreeForAll_Statics::NewProp_WinnerPlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterGame_FreeForAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGame_FreeForAll_Statics::NewProp_WinnerPlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGame_FreeForAll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGame_FreeForAll>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterGame_FreeForAll_Statics::ClassParams = {
		&AShooterGame_FreeForAll::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterGame_FreeForAll_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGame_FreeForAll_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShooterGame_FreeForAll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGame_FreeForAll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterGame_FreeForAll()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterGame_FreeForAll_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterGame_FreeForAll, 1537239050);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterGame_FreeForAll>()
	{
		return AShooterGame_FreeForAll::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterGame_FreeForAll(Z_Construct_UClass_AShooterGame_FreeForAll, &AShooterGame_FreeForAll::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterGame_FreeForAll"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGame_FreeForAll);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

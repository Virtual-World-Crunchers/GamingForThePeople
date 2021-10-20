// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Player/ShooterCharacterMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacterMovement() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterCharacterMovement_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterCharacterMovement();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterCharacterMovement::StaticRegisterNativesUShooterCharacterMovement()
	{
	}
	UClass* Z_Construct_UClass_UShooterCharacterMovement_NoRegister()
	{
		return UShooterCharacterMovement::StaticClass();
	}
	struct Z_Construct_UClass_UShooterCharacterMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterCharacterMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterCharacterMovement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/ShooterCharacterMovement.h" },
		{ "ModuleRelativePath", "Public/Player/ShooterCharacterMovement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterCharacterMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterCharacterMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterCharacterMovement_Statics::ClassParams = {
		&UShooterCharacterMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterCharacterMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterCharacterMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterCharacterMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterCharacterMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterCharacterMovement, 1255270140);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterCharacterMovement>()
	{
		return UShooterCharacterMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterCharacterMovement(Z_Construct_UClass_UShooterCharacterMovement, &UShooterCharacterMovement::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterCharacterMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterCharacterMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

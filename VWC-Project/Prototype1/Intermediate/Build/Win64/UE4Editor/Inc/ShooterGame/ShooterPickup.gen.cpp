// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Pickups/ShooterPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPickup() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPickup_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShooterPickup::execOnRep_IsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsActive();
		P_NATIVE_END;
	}
	static FName NAME_AShooterPickup_OnPickedUpEvent = FName(TEXT("OnPickedUpEvent"));
	void AShooterPickup::OnPickedUpEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterPickup_OnPickedUpEvent),NULL);
	}
	static FName NAME_AShooterPickup_OnRespawnEvent = FName(TEXT("OnRespawnEvent"));
	void AShooterPickup::OnRespawnEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterPickup_OnRespawnEvent),NULL);
	}
	void AShooterPickup::StaticRegisterNativesAShooterPickup()
	{
		UClass* Class = AShooterPickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsActive", &AShooterPickup::execOnRep_IsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterPickup_OnPickedUpEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPickup_OnPickedUpEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** blueprint event: pickup disappears */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "blueprint event: pickup disappears" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPickup_OnPickedUpEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPickup, nullptr, "OnPickedUpEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPickup_OnPickedUpEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPickup_OnPickedUpEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPickup_OnPickedUpEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPickup_OnPickedUpEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPickup_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPickup_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPickup_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPickup, nullptr, "OnRep_IsActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPickup_OnRep_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPickup_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPickup_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPickup_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPickup_OnRespawnEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPickup_OnRespawnEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** blueprint event: pickup appears */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "blueprint event: pickup appears" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPickup_OnRespawnEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPickup, nullptr, "OnRespawnEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPickup_OnRespawnEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPickup_OnRespawnEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPickup_OnRespawnEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPickup_OnRespawnEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterPickup_NoRegister()
	{
		return AShooterPickup::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupPSC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupPSC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawningFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RespawningFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RespawnSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickedUpBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickedUpBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterPickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterPickup_OnPickedUpEvent, "OnPickedUpEvent" }, // 869474820
		{ &Z_Construct_UFunction_AShooterPickup_OnRep_IsActive, "OnRep_IsActive" }, // 2469284047
		{ &Z_Construct_UFunction_AShooterPickup_OnRespawnEvent, "OnRespawnEvent" }, // 3073237865
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base class for pickup objects that can be placed in the world\n" },
		{ "IncludePath", "Pickups/ShooterPickup.h" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "Base class for pickup objects that can be placed in the world" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickupPSC_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** FX component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "FX component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickupPSC = { "PickupPSC", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPickup, PickupPSC), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickupPSC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickupPSC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Statics::NewProp_ActiveFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** FX of active pickup */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "FX of active pickup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_ActiveFX = { "ActiveFX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPickup, ActiveFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Statics::NewProp_ActiveFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::NewProp_ActiveFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawningFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** FX of pickup on respawn timer */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "FX of pickup on respawn timer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawningFX = { "RespawningFX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPickup, RespawningFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawningFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawningFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickupSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** sound played when player picks it up */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "sound played when player picks it up" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPickup, PickupSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickupSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickupSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** sound played on respawn */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "sound played on respawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnSound = { "RespawnSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPickup, RespawnSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/** how long it takes to respawn? */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "how long it takes to respawn?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPickup, RespawnTime), METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Comment", "/** is it ready for interactions? */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "is it ready for interactions?" },
	};
#endif
	void Z_Construct_UClass_AShooterPickup_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((AShooterPickup*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_bIsActive = { "bIsActive", "OnRep_IsActive", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterPickup), &Z_Construct_UClass_AShooterPickup_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickedUpBy_MetaData[] = {
		{ "Comment", "/* The character who has picked up this pickup */" },
		{ "ModuleRelativePath", "Public/Pickups/ShooterPickup.h" },
		{ "ToolTip", "The character who has picked up this pickup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickedUpBy = { "PickedUpBy", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPickup, PickedUpBy), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickedUpBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickedUpBy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickupPSC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_ActiveFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawningFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickupSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_RespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPickup_Statics::NewProp_PickedUpBy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterPickup_Statics::ClassParams = {
		&AShooterPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterPickup, 865083634);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterPickup>()
	{
		return AShooterPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterPickup(Z_Construct_UClass_AShooterPickup, &AShooterPickup::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterPickup"), false, nullptr, nullptr, nullptr);

	void AShooterPickup::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsActive(TEXT("bIsActive"));
		static const FName Name_PickedUpBy(TEXT("PickedUpBy"));

		const bool bIsValid = true
			&& Name_bIsActive == ClassReps[(int32)ENetFields_Private::bIsActive].Property->GetFName()
			&& Name_PickedUpBy == ClassReps[(int32)ENetFields_Private::PickedUpBy].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShooterPickup"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

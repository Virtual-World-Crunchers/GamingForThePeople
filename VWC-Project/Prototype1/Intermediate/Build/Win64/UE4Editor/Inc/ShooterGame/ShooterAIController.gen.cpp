// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Bots/ShooterAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAIController() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterAIController_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShooterAIController::execFindClosestEnemyWithLOS)
	{
		P_GET_OBJECT(AShooterCharacter,Z_Param_ExcludeEnemy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindClosestEnemyWithLOS(Z_Param_ExcludeEnemy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterAIController::execFindClosestEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindClosestEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterAIController::execShootEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootEnemy();
		P_NATIVE_END;
	}
	void AShooterAIController::StaticRegisterNativesAShooterAIController()
	{
		UClass* Class = AShooterAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindClosestEnemy", &AShooterAIController::execFindClosestEnemy },
			{ "FindClosestEnemyWithLOS", &AShooterAIController::execFindClosestEnemyWithLOS },
			{ "ShootEnemy", &AShooterAIController::execShootEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterAIController_FindClosestEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterAIController_FindClosestEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/* Finds the closest enemy and sets them as current target */" },
		{ "ModuleRelativePath", "Public/Bots/ShooterAIController.h" },
		{ "ToolTip", "Finds the closest enemy and sets them as current target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterAIController_FindClosestEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterAIController, nullptr, "FindClosestEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterAIController_FindClosestEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_FindClosestEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterAIController_FindClosestEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterAIController_FindClosestEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics
	{
		struct ShooterAIController_eventFindClosestEnemyWithLOS_Parms
		{
			AShooterCharacter* ExcludeEnemy;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExcludeEnemy;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::NewProp_ExcludeEnemy = { "ExcludeEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterAIController_eventFindClosestEnemyWithLOS_Parms, ExcludeEnemy), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShooterAIController_eventFindClosestEnemyWithLOS_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterAIController_eventFindClosestEnemyWithLOS_Parms), &Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::NewProp_ExcludeEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Bots/ShooterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterAIController, nullptr, "FindClosestEnemyWithLOS", nullptr, nullptr, sizeof(ShooterAIController_eventFindClosestEnemyWithLOS_Parms), Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterAIController_ShootEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterAIController_ShootEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/* If there is line of sight to current enemy, start firing at them */" },
		{ "ModuleRelativePath", "Public/Bots/ShooterAIController.h" },
		{ "ToolTip", "If there is line of sight to current enemy, start firing at them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterAIController_ShootEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterAIController, nullptr, "ShootEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterAIController_ShootEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterAIController_ShootEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterAIController_ShootEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterAIController_ShootEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterAIController_NoRegister()
	{
		return AShooterAIController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterAIController_FindClosestEnemy, "FindClosestEnemy" }, // 1777920612
		{ &Z_Construct_UFunction_AShooterAIController_FindClosestEnemyWithLOS, "FindClosestEnemyWithLOS" }, // 972380884
		{ &Z_Construct_UFunction_AShooterAIController_ShootEnemy, "ShootEnemy" }, // 208595426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Bots/ShooterAIController.h" },
		{ "ModuleRelativePath", "Public/Bots/ShooterAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterAIController_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bots/ShooterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterAIController_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterAIController, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterAIController_Statics::NewProp_BlackboardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::NewProp_BlackboardComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterAIController_Statics::NewProp_BehaviorComp_MetaData[] = {
		{ "Comment", "/* Cached BT component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bots/ShooterAIController.h" },
		{ "ToolTip", "Cached BT component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterAIController_Statics::NewProp_BehaviorComp = { "BehaviorComp", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterAIController, BehaviorComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterAIController_Statics::NewProp_BehaviorComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::NewProp_BehaviorComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAIController_Statics::NewProp_BlackboardComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAIController_Statics::NewProp_BehaviorComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterAIController_Statics::ClassParams = {
		&AShooterAIController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterAIController, 3372042702);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterAIController>()
	{
		return AShooterAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterAIController(Z_Construct_UClass_AShooterAIController, &AShooterAIController::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

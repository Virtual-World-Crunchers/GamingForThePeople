// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/UI/ToxicChatHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToxicChatHUD() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UToxicChatHUD_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UToxicChatHUD();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	static FName NAME_UToxicChatHUD_StartTimer = FName(TEXT("StartTimer"));
	void UToxicChatHUD::StartTimer()
	{
		ProcessEvent(FindFunctionChecked(NAME_UToxicChatHUD_StartTimer),NULL);
	}
	void UToxicChatHUD::StaticRegisterNativesUToxicChatHUD()
	{
	}
	struct Z_Construct_UFunction_UToxicChatHUD_StartTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToxicChatHUD_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ToxicChatHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToxicChatHUD_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToxicChatHUD, nullptr, "StartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToxicChatHUD_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToxicChatHUD_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToxicChatHUD_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToxicChatHUD_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UToxicChatHUD_NoRegister()
	{
		return UToxicChatHUD::StaticClass();
	}
	struct Z_Construct_UClass_UToxicChatHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timing_MetaData[];
#endif
		static void NewProp_timing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_timing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToxicChatHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToxicChatHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToxicChatHUD_StartTimer, "StartTimer" }, // 3861561294
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToxicChatHUD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ToxicChatHUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ToxicChatHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_currentTime_MetaData[] = {
		{ "Category", "ToxicChatHUD" },
		{ "Comment", "//UFUNCTION(BlueprintImplementableEvent)\n//void UpdateTimer();\n" },
		{ "ModuleRelativePath", "Public/UI/ToxicChatHUD.h" },
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent)\nvoid UpdateTimer();" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UToxicChatHUD, currentTime), METADATA_PARAMS(Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_currentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_currentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_timing_MetaData[] = {
		{ "Category", "ToxicChatHUD" },
		{ "ModuleRelativePath", "Public/UI/ToxicChatHUD.h" },
	};
#endif
	void Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_timing_SetBit(void* Obj)
	{
		((UToxicChatHUD*)Obj)->timing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_timing = { "timing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UToxicChatHUD), &Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_timing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_timing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_timing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToxicChatHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_currentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToxicChatHUD_Statics::NewProp_timing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToxicChatHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToxicChatHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToxicChatHUD_Statics::ClassParams = {
		&UToxicChatHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UToxicChatHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UToxicChatHUD_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToxicChatHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToxicChatHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToxicChatHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToxicChatHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToxicChatHUD, 1758161270);
	template<> SHOOTERGAME_API UClass* StaticClass<UToxicChatHUD>()
	{
		return UToxicChatHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToxicChatHUD(Z_Construct_UClass_UToxicChatHUD, &UToxicChatHUD::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UToxicChatHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToxicChatHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

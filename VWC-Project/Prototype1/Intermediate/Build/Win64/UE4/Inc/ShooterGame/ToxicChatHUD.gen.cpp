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
	DEFINE_FUNCTION(UToxicChatHUD::execUpdateSlowChatTimerBOT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSlowChatTimerBOT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToxicChatHUD::execUpdateSlowChatTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSlowChatTimer();
		P_NATIVE_END;
	}
	void UToxicChatHUD::StaticRegisterNativesUToxicChatHUD()
	{
		UClass* Class = UToxicChatHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSlowChatTimer", &UToxicChatHUD::execUpdateSlowChatTimer },
			{ "UpdateSlowChatTimerBOT", &UToxicChatHUD::execUpdateSlowChatTimerBOT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ToxicChatHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToxicChatHUD, nullptr, "UpdateSlowChatTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimerBOT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimerBOT_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ToxicChatHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimerBOT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToxicChatHUD, nullptr, "UpdateSlowChatTimerBOT", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimerBOT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimerBOT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimerBOT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimerBOT_Statics::FuncParams);
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToxicChatHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToxicChatHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimer, "UpdateSlowChatTimer" }, // 1904155414
		{ &Z_Construct_UFunction_UToxicChatHUD_UpdateSlowChatTimerBOT, "UpdateSlowChatTimerBOT" }, // 4014503987
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToxicChatHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToxicChatHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToxicChatHUD_Statics::ClassParams = {
		&UToxicChatHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
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
	IMPLEMENT_CLASS(UToxicChatHUD, 3399732146);
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

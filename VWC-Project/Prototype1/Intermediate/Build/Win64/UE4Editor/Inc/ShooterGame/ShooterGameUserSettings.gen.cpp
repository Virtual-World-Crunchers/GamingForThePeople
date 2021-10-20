// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/ShooterGameUserSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameUserSettings() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterGameUserSettings_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterGameUserSettings();
	ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterGameUserSettings::StaticRegisterNativesUShooterGameUserSettings()
	{
	}
	UClass* Z_Construct_UClass_UShooterGameUserSettings_NoRegister()
	{
		return UShooterGameUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UShooterGameUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphicsQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GraphicsQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NVIDIAReflex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NVIDIAReflex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatencyFlashIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LatencyFlashIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramerateVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FramerateVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameToRenderVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameToRenderVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLatencyVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameLatencyVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderLatencyVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RenderLatencyVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLanMatch_MetaData[];
#endif
		static void NewProp_bIsLanMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLanMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDedicatedServer_MetaData[];
#endif
		static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsForceSystemResolution_MetaData[];
#endif
		static void NewProp_bIsForceSystemResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForceSystemResolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterGameUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShooterGameUserSettings.h" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GraphicsQuality_MetaData[] = {
		{ "Comment", "/**\n\x09 * Graphics Quality\n\x09 *\x09""0 = Low\n\x09 *\x09""1 = High\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
		{ "ToolTip", "Graphics Quality\n     0 = Low\n     1 = High" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GraphicsQuality = { "GraphicsQuality", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterGameUserSettings, GraphicsQuality), METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GraphicsQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GraphicsQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_NVIDIAReflex_MetaData[] = {
		{ "Comment", "/** NVIDIA Reflex */" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
		{ "ToolTip", "NVIDIA Reflex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_NVIDIAReflex = { "NVIDIAReflex", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterGameUserSettings, NVIDIAReflex), METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_NVIDIAReflex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_NVIDIAReflex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_LatencyFlashIndicator_MetaData[] = {
		{ "Comment", "/** Latency Flash Indicator */" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
		{ "ToolTip", "Latency Flash Indicator" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_LatencyFlashIndicator = { "LatencyFlashIndicator", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterGameUserSettings, LatencyFlashIndicator), METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_LatencyFlashIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_LatencyFlashIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_FramerateVisibility_MetaData[] = {
		{ "Comment", "/** Framerate meter */" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
		{ "ToolTip", "Framerate meter" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_FramerateVisibility = { "FramerateVisibility", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterGameUserSettings, FramerateVisibility), METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_FramerateVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_FramerateVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GameToRenderVisibility_MetaData[] = {
		{ "Comment", "/** Game to render latency meter */" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
		{ "ToolTip", "Game to render latency meter" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GameToRenderVisibility = { "GameToRenderVisibility", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterGameUserSettings, GameToRenderVisibility), METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GameToRenderVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GameToRenderVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GameLatencyVisibility_MetaData[] = {
		{ "Comment", "/** Game latency meter */" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
		{ "ToolTip", "Game latency meter" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GameLatencyVisibility = { "GameLatencyVisibility", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterGameUserSettings, GameLatencyVisibility), METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GameLatencyVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GameLatencyVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_RenderLatencyVisibility_MetaData[] = {
		{ "Comment", "/** Render latency meter */" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
		{ "ToolTip", "Render latency meter" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_RenderLatencyVisibility = { "RenderLatencyVisibility", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterGameUserSettings, RenderLatencyVisibility), METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_RenderLatencyVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_RenderLatencyVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsLanMatch_MetaData[] = {
		{ "Comment", "/** is lan match? */" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
		{ "ToolTip", "is lan match?" },
	};
#endif
	void Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsLanMatch_SetBit(void* Obj)
	{
		((UShooterGameUserSettings*)Obj)->bIsLanMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsLanMatch = { "bIsLanMatch", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterGameUserSettings), &Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsLanMatch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsLanMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsLanMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsDedicatedServer_MetaData[] = {
		{ "Comment", "/** is dedicated server? */" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
		{ "ToolTip", "is dedicated server?" },
	};
#endif
	void Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
	{
		((UShooterGameUserSettings*)Obj)->bIsDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterGameUserSettings), &Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsForceSystemResolution_MetaData[] = {
		{ "Comment", "/** Enable if UShooterGameUserSettings is not the authority on resolution */" },
		{ "ModuleRelativePath", "Public/ShooterGameUserSettings.h" },
		{ "ToolTip", "Enable if UShooterGameUserSettings is not the authority on resolution" },
	};
#endif
	void Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsForceSystemResolution_SetBit(void* Obj)
	{
		((UShooterGameUserSettings*)Obj)->bIsForceSystemResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsForceSystemResolution = { "bIsForceSystemResolution", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterGameUserSettings), &Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsForceSystemResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsForceSystemResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsForceSystemResolution_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterGameUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GraphicsQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_NVIDIAReflex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_LatencyFlashIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_FramerateVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GameToRenderVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_GameLatencyVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_RenderLatencyVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsLanMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameUserSettings_Statics::NewProp_bIsForceSystemResolution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterGameUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterGameUserSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterGameUserSettings_Statics::ClassParams = {
		&UShooterGameUserSettings::StaticClass,
		"GameUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterGameUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::PropPointers),
		0,
		0x408000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterGameUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterGameUserSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterGameUserSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterGameUserSettings, 2150659630);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterGameUserSettings>()
	{
		return UShooterGameUserSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterGameUserSettings(Z_Construct_UClass_UShooterGameUserSettings, &UShooterGameUserSettings::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterGameUserSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterGameUserSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

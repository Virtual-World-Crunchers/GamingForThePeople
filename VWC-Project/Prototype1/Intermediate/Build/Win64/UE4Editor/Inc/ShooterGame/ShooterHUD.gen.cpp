// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/UI/ShooterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterHUD() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterHUD_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasIcon();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShooterHUD::execUpdateText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateText(Z_Param_text);
		P_NATIVE_END;
	}
	void AShooterHUD::StaticRegisterNativesAShooterHUD()
	{
		UClass* Class = AShooterHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateText", &AShooterHUD::execUpdateText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterHUD_UpdateText_Statics
	{
		struct ShooterHUD_eventUpdateText_Parms
		{
			FText text;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AShooterHUD_UpdateText_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterHUD_eventUpdateText_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterHUD_UpdateText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterHUD_UpdateText_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterHUD_UpdateText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterHUD_UpdateText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterHUD, nullptr, "UpdateText", nullptr, nullptr, sizeof(ShooterHUD_eventUpdateText_Parms), Z_Construct_UFunction_AShooterHUD_UpdateText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterHUD_UpdateText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterHUD_UpdateText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterHUD_UpdateText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterHUD_UpdateText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterHUD_UpdateText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterHUD_NoRegister()
	{
		return AShooterHUD::StaticClass();
	}
	struct Z_Construct_UClass_AShooterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NotificationWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNotifyIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNotifyIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillsBg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillsBg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimePlaceBg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimePlaceBg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeapBg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryWeapBg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapBg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryWeapBg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Crosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNotifyCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNotifyCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathMessagesBg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeathMessagesBg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBarBg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HealthBarBg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HealthIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillsIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillsIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KilledIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaceIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNotifyTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitNotifyTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDMainTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDMainTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDAssets02Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDAssets02Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowHealthOverlayTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LowHealthOverlayTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BigFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NormalFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterHUD_UpdateText, "UpdateText" }, // 2130290348
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/ShooterHUD.h" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_NotificationWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_NotificationWidgetClass = { "NotificationWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, NotificationWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_NotificationWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_NotificationWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyIcon_MetaData[] = {
		{ "Comment", "/** Icons for hit indicator. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Icons for hit indicator." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyIcon = { "HitNotifyIcon", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(HitNotifyIcon, AShooterHUD), STRUCT_OFFSET(AShooterHUD, HitNotifyIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_KillsBg_MetaData[] = {
		{ "Comment", "/** kills background icon. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "kills background icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_KillsBg = { "KillsBg", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, KillsBg), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_KillsBg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_KillsBg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_TimePlaceBg_MetaData[] = {
		{ "Comment", "/** Match timer and player position background icon. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Match timer and player position background icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_TimePlaceBg = { "TimePlaceBg", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, TimePlaceBg), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_TimePlaceBg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_TimePlaceBg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_PrimaryWeapBg_MetaData[] = {
		{ "Comment", "/** Primary weapon background icon. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Primary weapon background icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_PrimaryWeapBg = { "PrimaryWeapBg", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, PrimaryWeapBg), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_PrimaryWeapBg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_PrimaryWeapBg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_SecondaryWeapBg_MetaData[] = {
		{ "Comment", "/** Secondary weapon background icon */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Secondary weapon background icon" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_SecondaryWeapBg = { "SecondaryWeapBg", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, SecondaryWeapBg), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_SecondaryWeapBg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_SecondaryWeapBg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_Crosshair_MetaData[] = {
		{ "Comment", "/** Crosshair icons (left, top, right, bottom and center). */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Crosshair icons (left, top, right, bottom and center)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_Crosshair = { "Crosshair", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Crosshair, AShooterHUD), STRUCT_OFFSET(AShooterHUD, Crosshair), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_Crosshair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_Crosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyCrosshair_MetaData[] = {
		{ "Comment", "/** On crosshair indicator that we hit someone. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "On crosshair indicator that we hit someone." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyCrosshair = { "HitNotifyCrosshair", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, HitNotifyCrosshair), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyCrosshair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_DeathMessagesBg_MetaData[] = {
		{ "Comment", "/** Death messages background icon. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Death messages background icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_DeathMessagesBg = { "DeathMessagesBg", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, DeathMessagesBg), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_DeathMessagesBg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_DeathMessagesBg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthBarBg_MetaData[] = {
		{ "Comment", "/** Health bar background icon. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Health bar background icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthBarBg = { "HealthBarBg", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, HealthBarBg), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthBarBg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthBarBg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthBar_MetaData[] = {
		{ "Comment", "/** Health bar icon. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Health bar icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, HealthBar), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthIcon_MetaData[] = {
		{ "Comment", "/** Health icon on the health bar. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Health icon on the health bar." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthIcon = { "HealthIcon", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, HealthIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_KillsIcon_MetaData[] = {
		{ "Comment", "/** Kills icon. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Kills icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_KillsIcon = { "KillsIcon", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, KillsIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_KillsIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_KillsIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_KilledIcon_MetaData[] = {
		{ "Comment", "/** Bigger killed icon. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Bigger killed icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_KilledIcon = { "KilledIcon", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, KilledIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_KilledIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_KilledIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_TimerIcon_MetaData[] = {
		{ "Comment", "/** Timer icon. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Timer icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_TimerIcon = { "TimerIcon", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, TimerIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_TimerIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_TimerIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_PlaceIcon_MetaData[] = {
		{ "Comment", "/** Podium icon. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Podium icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_PlaceIcon = { "PlaceIcon", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, PlaceIcon), Z_Construct_UScriptStruct_FCanvasIcon, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_PlaceIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_PlaceIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyTexture_MetaData[] = {
		{ "Comment", "/** Texture for hit indicator. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Texture for hit indicator." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyTexture = { "HitNotifyTexture", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, HitNotifyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_HUDMainTexture_MetaData[] = {
		{ "Comment", "/** texture for HUD elements. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "texture for HUD elements." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_HUDMainTexture = { "HUDMainTexture", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, HUDMainTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HUDMainTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HUDMainTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_HUDAssets02Texture_MetaData[] = {
		{ "Comment", "/** Texture for HUD elements. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Texture for HUD elements." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_HUDAssets02Texture = { "HUDAssets02Texture", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, HUDAssets02Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HUDAssets02Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_HUDAssets02Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_LowHealthOverlayTexture_MetaData[] = {
		{ "Comment", "/** Overlay shown when health is low. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Overlay shown when health is low." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_LowHealthOverlayTexture = { "LowHealthOverlayTexture", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, LowHealthOverlayTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_LowHealthOverlayTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_LowHealthOverlayTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_BigFont_MetaData[] = {
		{ "Comment", "/** Large font - used for ammo display etc. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Large font - used for ammo display etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_BigFont = { "BigFont", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, BigFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_BigFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_BigFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_NormalFont_MetaData[] = {
		{ "Comment", "/** Normal font - used for death messages and such. */" },
		{ "ModuleRelativePath", "Public/UI/ShooterHUD.h" },
		{ "ToolTip", "Normal font - used for death messages and such." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_NormalFont = { "NormalFont", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, NormalFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_NormalFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_NormalFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_NotificationWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_KillsBg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_TimePlaceBg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_PrimaryWeapBg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_SecondaryWeapBg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_Crosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_DeathMessagesBg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthBarBg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_HealthIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_KillsIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_KilledIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_TimerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_PlaceIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_HitNotifyTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_HUDMainTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_HUDAssets02Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_LowHealthOverlayTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_BigFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_NormalFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterHUD_Statics::ClassParams = {
		&AShooterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterHUD, 1907377208);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterHUD>()
	{
		return AShooterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterHUD(Z_Construct_UClass_AShooterHUD, &AShooterHUD::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

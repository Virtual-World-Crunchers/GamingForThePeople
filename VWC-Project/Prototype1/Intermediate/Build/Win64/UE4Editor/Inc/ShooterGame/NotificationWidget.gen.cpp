// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/NotificationWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotificationWidget() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UNotificationWidget_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UNotificationWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UNotificationWidget::StaticRegisterNativesUNotificationWidget()
	{
	}
	UClass* Z_Construct_UClass_UNotificationWidget_NoRegister()
	{
		return UNotificationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UNotificationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TXT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TXT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotificationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotificationWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "NotificationWidget.h" },
		{ "ModuleRelativePath", "Public/NotificationWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotificationWidget_Statics::NewProp_TXT_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "NotificationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNotificationWidget_Statics::NewProp_TXT = { "TXT", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNotificationWidget, TXT), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNotificationWidget_Statics::NewProp_TXT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotificationWidget_Statics::NewProp_TXT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotificationWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotificationWidget_Statics::NewProp_TXT,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotificationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotificationWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNotificationWidget_Statics::ClassParams = {
		&UNotificationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNotificationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNotificationWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotificationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotificationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotificationWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNotificationWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNotificationWidget, 2823071087);
	template<> SHOOTERGAME_API UClass* StaticClass<UNotificationWidget>()
	{
		return UNotificationWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNotificationWidget(Z_Construct_UClass_UNotificationWidget, &UNotificationWidget::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UNotificationWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotificationWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Private/Online/ShooterReplicationGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterReplicationGraph() {}
// Cross Module References
	SHOOTERGAME_API UEnum* Z_Construct_UEnum_ShooterGame_EClassRepNodeMapping();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterReplicationGraph_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterReplicationGraph();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	REPLICATIONGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter();
// End Cross Module References
	static UEnum* EClassRepNodeMapping_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShooterGame_EClassRepNodeMapping, Z_Construct_UPackage__Script_ShooterGame(), TEXT("EClassRepNodeMapping"));
		}
		return Singleton;
	}
	template<> SHOOTERGAME_API UEnum* StaticEnum<EClassRepNodeMapping>()
	{
		return EClassRepNodeMapping_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClassRepNodeMapping(EClassRepNodeMapping_StaticEnum, TEXT("/Script/ShooterGame"), TEXT("EClassRepNodeMapping"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShooterGame_EClassRepNodeMapping_Hash() { return 925369777U; }
	UEnum* Z_Construct_UEnum_ShooterGame_EClassRepNodeMapping()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClassRepNodeMapping"), 0, Get_Z_Construct_UEnum_ShooterGame_EClassRepNodeMapping_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClassRepNodeMapping::NotRouted", (int64)EClassRepNodeMapping::NotRouted },
				{ "EClassRepNodeMapping::RelevantAllConnections", (int64)EClassRepNodeMapping::RelevantAllConnections },
				{ "EClassRepNodeMapping::Spatialize_Static", (int64)EClassRepNodeMapping::Spatialize_Static },
				{ "EClassRepNodeMapping::Spatialize_Dynamic", (int64)EClassRepNodeMapping::Spatialize_Dynamic },
				{ "EClassRepNodeMapping::Spatialize_Dormancy", (int64)EClassRepNodeMapping::Spatialize_Dormancy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// This is the main enum we use to route actors to the right replication node. Each class maps to one enum.\n" },
				{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
				{ "NotRouted.Name", "EClassRepNodeMapping::NotRouted" },
				{ "RelevantAllConnections.Comment", "// Doesn't map to any node. Used for special case actors that handled by special case nodes (UShooterReplicationGraphNode_PlayerStateFrequencyLimiter)\n" },
				{ "RelevantAllConnections.Name", "EClassRepNodeMapping::RelevantAllConnections" },
				{ "RelevantAllConnections.ToolTip", "Doesn't map to any node. Used for special case actors that handled by special case nodes (UShooterReplicationGraphNode_PlayerStateFrequencyLimiter)" },
				{ "Spatialize_Dormancy.Comment", "// Routes to GridNode: these actors mode frequently and are updated once per frame.\n" },
				{ "Spatialize_Dormancy.Name", "EClassRepNodeMapping::Spatialize_Dormancy" },
				{ "Spatialize_Dormancy.ToolTip", "Routes to GridNode: these actors mode frequently and are updated once per frame." },
				{ "Spatialize_Dynamic.Comment", "// Routes to GridNode: these actors don't move and don't need to be updated every frame.\n" },
				{ "Spatialize_Dynamic.Name", "EClassRepNodeMapping::Spatialize_Dynamic" },
				{ "Spatialize_Dynamic.ToolTip", "Routes to GridNode: these actors don't move and don't need to be updated every frame." },
				{ "Spatialize_Static.Comment", "// ONLY SPATIALIZED Enums below here! See UShooterReplicationGraph::IsSpatialized\n" },
				{ "Spatialize_Static.Name", "EClassRepNodeMapping::Spatialize_Static" },
				{ "Spatialize_Static.ToolTip", "ONLY SPATIALIZED Enums below here! See UShooterReplicationGraph::IsSpatialized" },
				{ "ToolTip", "This is the main enum we use to route actors to the right replication node. Each class maps to one enum." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShooterGame,
				nullptr,
				"EClassRepNodeMapping",
				"EClassRepNodeMapping",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UShooterReplicationGraph::StaticRegisterNativesUShooterReplicationGraph()
	{
	}
	UClass* Z_Construct_UClass_UShooterReplicationGraph_NoRegister()
	{
		return UShooterReplicationGraph::StaticClass();
	}
	struct Z_Construct_UClass_UShooterReplicationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpatializedClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializedClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpatializedClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NonSpatializedChildClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonSpatializedChildClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NonSpatializedChildClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AlwaysRelevantClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlwaysRelevantClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlwaysRelevantNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterReplicationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterReplicationGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** ShooterGame Replication Graph implementation. See additional notes in ShooterReplicationGraph.cpp! */" },
		{ "IncludePath", "Online/ShooterReplicationGraph.h" },
		{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
		{ "ToolTip", "ShooterGame Replication Graph implementation. See additional notes in ShooterReplicationGraph.cpp!" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_SpatializedClasses_Inner = { "SpatializedClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_SpatializedClasses_MetaData[] = {
		{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_SpatializedClasses = { "SpatializedClasses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterReplicationGraph, SpatializedClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_SpatializedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_SpatializedClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_NonSpatializedChildClasses_Inner = { "NonSpatializedChildClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_NonSpatializedChildClasses_MetaData[] = {
		{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_NonSpatializedChildClasses = { "NonSpatializedChildClasses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterReplicationGraph, NonSpatializedChildClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_NonSpatializedChildClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_NonSpatializedChildClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_Inner = { "AlwaysRelevantClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_MetaData[] = {
		{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantClasses = { "AlwaysRelevantClasses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterReplicationGraph, AlwaysRelevantClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_GridNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_GridNode = { "GridNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterReplicationGraph, GridNode), Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_GridNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_GridNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantNode = { "AlwaysRelevantNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterReplicationGraph, AlwaysRelevantNode), Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterReplicationGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_SpatializedClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_SpatializedClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_NonSpatializedChildClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_NonSpatializedChildClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_GridNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraph_Statics::NewProp_AlwaysRelevantNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterReplicationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterReplicationGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterReplicationGraph_Statics::ClassParams = {
		&UShooterReplicationGraph::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterReplicationGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraph_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UShooterReplicationGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterReplicationGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterReplicationGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterReplicationGraph, 1335247100);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterReplicationGraph>()
	{
		return UShooterReplicationGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterReplicationGraph(Z_Construct_UClass_UShooterReplicationGraph, &UShooterReplicationGraph::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterReplicationGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterReplicationGraph);
	void UShooterReplicationGraphNode_AlwaysRelevant_ForConnection::StaticRegisterNativesUShooterReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
	}
	UClass* Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister()
	{
		return UShooterReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	struct Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastPawn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PastRelevantActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PastRelevantActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PastRelevantActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Online/ShooterReplicationGraph.h" },
		{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastPawn_MetaData[] = {
		{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastPawn = { "LastPawn", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterReplicationGraphNode_AlwaysRelevant_ForConnection, LastPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastPawn_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors_Inner = { "PastRelevantActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors_MetaData[] = {
		{ "Comment", "/** List of previously (or currently if nothing changed last tick) focused actor data per connection */" },
		{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
		{ "ToolTip", "List of previously (or currently if nothing changed last tick) focused actor data per connection" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors = { "PastRelevantActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterReplicationGraphNode_AlwaysRelevant_ForConnection, PastRelevantActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterReplicationGraphNode_AlwaysRelevant_ForConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams = {
		&UShooterReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterReplicationGraphNode_AlwaysRelevant_ForConnection, 2286273422);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterReplicationGraphNode_AlwaysRelevant_ForConnection>()
	{
		return UShooterReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection(Z_Construct_UClass_UShooterReplicationGraphNode_AlwaysRelevant_ForConnection, &UShooterReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterReplicationGraphNode_AlwaysRelevant_ForConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterReplicationGraphNode_AlwaysRelevant_ForConnection);
	void UShooterReplicationGraphNode_PlayerStateFrequencyLimiter::StaticRegisterNativesUShooterReplicationGraphNode_PlayerStateFrequencyLimiter()
	{
	}
	UClass* Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter_NoRegister()
	{
		return UShooterReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass();
	}
	struct Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This is a specialized node for handling PlayerState replication in a frequency limited fashion. It tracks all player states but only returns a subset of them to the replication driver each frame. */" },
		{ "IncludePath", "Online/ShooterReplicationGraph.h" },
		{ "ModuleRelativePath", "Private/Online/ShooterReplicationGraph.h" },
		{ "ToolTip", "This is a specialized node for handling PlayerState replication in a frequency limited fashion. It tracks all player states but only returns a subset of them to the replication driver each frame." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterReplicationGraphNode_PlayerStateFrequencyLimiter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::ClassParams = {
		&UShooterReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterReplicationGraphNode_PlayerStateFrequencyLimiter, 4196175272);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterReplicationGraphNode_PlayerStateFrequencyLimiter>()
	{
		return UShooterReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter(Z_Construct_UClass_UShooterReplicationGraphNode_PlayerStateFrequencyLimiter, &UShooterReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterReplicationGraphNode_PlayerStateFrequencyLimiter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterReplicationGraphNode_PlayerStateFrequencyLimiter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

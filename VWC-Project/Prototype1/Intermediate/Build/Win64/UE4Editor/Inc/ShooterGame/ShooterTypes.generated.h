// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterTypes_generated_h
#error "ShooterTypes.generated.h already included, missing '#pragma once' in ShooterTypes.h"
#endif
#define SHOOTERGAME_ShooterTypes_generated_h

#define Prototype1_Source_ShooterGame_Public_ShooterTypes_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTakeHitInfo_Statics; \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__EnsureReplicationByte() { return STRUCT_OFFSET(FTakeHitInfo, EnsureReplicationByte); } \
	FORCEINLINE static uint32 __PPO__GeneralDamageEvent() { return STRUCT_OFFSET(FTakeHitInfo, GeneralDamageEvent); } \
	FORCEINLINE static uint32 __PPO__PointDamageEvent() { return STRUCT_OFFSET(FTakeHitInfo, PointDamageEvent); } \
	FORCEINLINE static uint32 __PPO__RadialDamageEvent() { return STRUCT_OFFSET(FTakeHitInfo, RadialDamageEvent); }


template<> SHOOTERGAME_API UScriptStruct* StaticStruct<struct FTakeHitInfo>();

#define Prototype1_Source_ShooterGame_Public_ShooterTypes_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDecalData_Statics; \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SHOOTERGAME_API UScriptStruct* StaticStruct<struct FDecalData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_ShooterTypes_h


#define FOREACH_ENUM_ESHOOTERPHYSMATERIALTYPE(op) \
	op(EShooterPhysMaterialType::Unknown) \
	op(EShooterPhysMaterialType::Concrete) \
	op(EShooterPhysMaterialType::Dirt) \
	op(EShooterPhysMaterialType::Water) \
	op(EShooterPhysMaterialType::Metal) \
	op(EShooterPhysMaterialType::Wood) \
	op(EShooterPhysMaterialType::Grass) \
	op(EShooterPhysMaterialType::Glass) \
	op(EShooterPhysMaterialType::Flesh) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
struct FVector;
struct FRotator;
#ifdef SHOOTERGAME_ShooterPlayerController_generated_h
#error "ShooterPlayerController.generated.h already included, missing '#pragma once' in ShooterPlayerController.h"
#endif
#define SHOOTERGAME_ShooterPlayerController_generated_h

#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_RPC_WRAPPERS \
	virtual bool ServerSuicide_Validate(); \
	virtual void ServerSuicide_Implementation(); \
	virtual bool ServerSay_Validate(const FString& ); \
	virtual void ServerSay_Implementation(const FString& Msg); \
	virtual bool ServerCheat_Validate(const FString& ); \
	virtual void ServerCheat_Implementation(const FString& Msg); \
	virtual void ClientSendRoundEndEvent_Implementation(bool bIsWinner, int32 ExpendedTimeInSeconds); \
	virtual void ClientEndOnlineGame_Implementation(); \
	virtual void ClientStartOnlineGame_Implementation(); \
	virtual void ClientGameStarted_Implementation(); \
	virtual void ClientSetSpectatorCamera_Implementation(FVector CameraLocation, FRotator CameraRotation); \
 \
	DECLARE_FUNCTION(execServerSuicide); \
	DECLARE_FUNCTION(execSuicide); \
	DECLARE_FUNCTION(execOnLeaderboardReadComplete); \
	DECLARE_FUNCTION(execSetGodMode); \
	DECLARE_FUNCTION(execServerSay); \
	DECLARE_FUNCTION(execSay); \
	DECLARE_FUNCTION(execServerCheat); \
	DECLARE_FUNCTION(execSimulateInputKey); \
	DECLARE_FUNCTION(execClientSendRoundEndEvent); \
	DECLARE_FUNCTION(execClientEndOnlineGame); \
	DECLARE_FUNCTION(execClientStartOnlineGame); \
	DECLARE_FUNCTION(execClientGameStarted); \
	DECLARE_FUNCTION(execClientSetSpectatorCamera);


#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSuicide_Validate(); \
	virtual void ServerSuicide_Implementation(); \
	virtual bool ServerSay_Validate(const FString& ); \
	virtual void ServerSay_Implementation(const FString& Msg); \
	virtual bool ServerCheat_Validate(const FString& ); \
	virtual void ServerCheat_Implementation(const FString& Msg); \
	virtual void ClientSendRoundEndEvent_Implementation(bool bIsWinner, int32 ExpendedTimeInSeconds); \
	virtual void ClientEndOnlineGame_Implementation(); \
	virtual void ClientStartOnlineGame_Implementation(); \
	virtual void ClientGameStarted_Implementation(); \
	virtual void ClientSetSpectatorCamera_Implementation(FVector CameraLocation, FRotator CameraRotation); \
 \
	DECLARE_FUNCTION(execServerSuicide); \
	DECLARE_FUNCTION(execSuicide); \
	DECLARE_FUNCTION(execOnLeaderboardReadComplete); \
	DECLARE_FUNCTION(execSetGodMode); \
	DECLARE_FUNCTION(execServerSay); \
	DECLARE_FUNCTION(execSay); \
	DECLARE_FUNCTION(execServerCheat); \
	DECLARE_FUNCTION(execSimulateInputKey); \
	DECLARE_FUNCTION(execClientSendRoundEndEvent); \
	DECLARE_FUNCTION(execClientEndOnlineGame); \
	DECLARE_FUNCTION(execClientStartOnlineGame); \
	DECLARE_FUNCTION(execClientGameStarted); \
	DECLARE_FUNCTION(execClientSetSpectatorCamera);


#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_EVENT_PARMS \
	struct ShooterPlayerController_eventClientSendRoundEndEvent_Parms \
	{ \
		bool bIsWinner; \
		int32 ExpendedTimeInSeconds; \
	}; \
	struct ShooterPlayerController_eventClientSetSpectatorCamera_Parms \
	{ \
		FVector CameraLocation; \
		FRotator CameraRotation; \
	}; \
	struct ShooterPlayerController_eventServerCheat_Parms \
	{ \
		FString Msg; \
	}; \
	struct ShooterPlayerController_eventServerSay_Parms \
	{ \
		FString Msg; \
	};


#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_CALLBACK_WRAPPERS
#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterPlayerController(); \
	friend struct Z_Construct_UClass_AShooterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShooterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterPlayerController) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bInfiniteAmmo=NETFIELD_REP_START, \
		bInfiniteClip, \
		bHealthRegen, \
		NETFIELD_REP_END=bHealthRegen	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAShooterPlayerController(); \
	friend struct Z_Construct_UClass_AShooterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShooterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterPlayerController) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bInfiniteAmmo=NETFIELD_REP_START, \
		bInfiniteClip, \
		bHealthRegen, \
		NETFIELD_REP_END=bHealthRegen	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPlayerController(AShooterPlayerController&&); \
	NO_API AShooterPlayerController(const AShooterPlayerController&); \
public:


#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPlayerController(AShooterPlayerController&&); \
	NO_API AShooterPlayerController(const AShooterPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerController)


#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_PRIVATE_PROPERTY_OFFSET
#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_11_PROLOG \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_EVENT_PARMS


#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_CALLBACK_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_INCLASS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_CALLBACK_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterPlayerController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_Player_ShooterPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

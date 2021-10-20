// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Player/ShooterPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPlayerController() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	DEFINE_FUNCTION(AShooterPlayerController::execServerSuicide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSuicide_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerSuicide_Validate"));
			return;
		}
		P_THIS->ServerSuicide_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execSuicide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Suicide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execOnLeaderboardReadComplete)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeaderboardReadComplete(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execSetGodMode)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGodMode(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execServerSay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSay_Validate(Z_Param_Msg))
		{
			RPC_ValidateFailed(TEXT("ServerSay_Validate"));
			return;
		}
		P_THIS->ServerSay_Implementation(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execSay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Say(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execServerCheat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCheat_Validate(Z_Param_Msg))
		{
			RPC_ValidateFailed(TEXT("ServerCheat_Validate"));
			return;
		}
		P_THIS->ServerCheat_Implementation(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execSimulateInputKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateInputKey(Z_Param_Key,Z_Param_bPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execClientSendRoundEndEvent)
	{
		P_GET_UBOOL(Z_Param_bIsWinner);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpendedTimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSendRoundEndEvent_Implementation(Z_Param_bIsWinner,Z_Param_ExpendedTimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execClientEndOnlineGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEndOnlineGame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execClientStartOnlineGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStartOnlineGame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execClientGameStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientGameStarted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterPlayerController::execClientSetSpectatorCamera)
	{
		P_GET_STRUCT(FVector,Z_Param_CameraLocation);
		P_GET_STRUCT(FRotator,Z_Param_CameraRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetSpectatorCamera_Implementation(Z_Param_CameraLocation,Z_Param_CameraRotation);
		P_NATIVE_END;
	}
	static FName NAME_AShooterPlayerController_ClientEndOnlineGame = FName(TEXT("ClientEndOnlineGame"));
	void AShooterPlayerController::ClientEndOnlineGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterPlayerController_ClientEndOnlineGame),NULL);
	}
	static FName NAME_AShooterPlayerController_ClientGameStarted = FName(TEXT("ClientGameStarted"));
	void AShooterPlayerController::ClientGameStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterPlayerController_ClientGameStarted),NULL);
	}
	static FName NAME_AShooterPlayerController_ClientSendRoundEndEvent = FName(TEXT("ClientSendRoundEndEvent"));
	void AShooterPlayerController::ClientSendRoundEndEvent(bool bIsWinner, int32 ExpendedTimeInSeconds)
	{
		ShooterPlayerController_eventClientSendRoundEndEvent_Parms Parms;
		Parms.bIsWinner=bIsWinner ? true : false;
		Parms.ExpendedTimeInSeconds=ExpendedTimeInSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AShooterPlayerController_ClientSendRoundEndEvent),&Parms);
	}
	static FName NAME_AShooterPlayerController_ClientSetSpectatorCamera = FName(TEXT("ClientSetSpectatorCamera"));
	void AShooterPlayerController::ClientSetSpectatorCamera(FVector CameraLocation, FRotator CameraRotation)
	{
		ShooterPlayerController_eventClientSetSpectatorCamera_Parms Parms;
		Parms.CameraLocation=CameraLocation;
		Parms.CameraRotation=CameraRotation;
		ProcessEvent(FindFunctionChecked(NAME_AShooterPlayerController_ClientSetSpectatorCamera),&Parms);
	}
	static FName NAME_AShooterPlayerController_ClientStartOnlineGame = FName(TEXT("ClientStartOnlineGame"));
	void AShooterPlayerController::ClientStartOnlineGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterPlayerController_ClientStartOnlineGame),NULL);
	}
	static FName NAME_AShooterPlayerController_ServerCheat = FName(TEXT("ServerCheat"));
	void AShooterPlayerController::ServerCheat(const FString& Msg)
	{
		ShooterPlayerController_eventServerCheat_Parms Parms;
		Parms.Msg=Msg;
		ProcessEvent(FindFunctionChecked(NAME_AShooterPlayerController_ServerCheat),&Parms);
	}
	static FName NAME_AShooterPlayerController_ServerSay = FName(TEXT("ServerSay"));
	void AShooterPlayerController::ServerSay(const FString& Msg)
	{
		ShooterPlayerController_eventServerSay_Parms Parms;
		Parms.Msg=Msg;
		ProcessEvent(FindFunctionChecked(NAME_AShooterPlayerController_ServerSay),&Parms);
	}
	static FName NAME_AShooterPlayerController_ServerSuicide = FName(TEXT("ServerSuicide"));
	void AShooterPlayerController::ServerSuicide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterPlayerController_ServerSuicide),NULL);
	}
	void AShooterPlayerController::StaticRegisterNativesAShooterPlayerController()
	{
		UClass* Class = AShooterPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientEndOnlineGame", &AShooterPlayerController::execClientEndOnlineGame },
			{ "ClientGameStarted", &AShooterPlayerController::execClientGameStarted },
			{ "ClientSendRoundEndEvent", &AShooterPlayerController::execClientSendRoundEndEvent },
			{ "ClientSetSpectatorCamera", &AShooterPlayerController::execClientSetSpectatorCamera },
			{ "ClientStartOnlineGame", &AShooterPlayerController::execClientStartOnlineGame },
			{ "OnLeaderboardReadComplete", &AShooterPlayerController::execOnLeaderboardReadComplete },
			{ "Say", &AShooterPlayerController::execSay },
			{ "ServerCheat", &AShooterPlayerController::execServerCheat },
			{ "ServerSay", &AShooterPlayerController::execServerSay },
			{ "ServerSuicide", &AShooterPlayerController::execServerSuicide },
			{ "SetGodMode", &AShooterPlayerController::execSetGodMode },
			{ "SimulateInputKey", &AShooterPlayerController::execSimulateInputKey },
			{ "Suicide", &AShooterPlayerController::execSuicide },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterPlayerController_ClientEndOnlineGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_ClientEndOnlineGame_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Ends the online game using the session name in the PlayerState */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "Ends the online game using the session name in the PlayerState" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_ClientEndOnlineGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "ClientEndOnlineGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_ClientEndOnlineGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ClientEndOnlineGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_ClientEndOnlineGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_ClientEndOnlineGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_ClientGameStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_ClientGameStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** notify player about started match */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "notify player about started match" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_ClientGameStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "ClientGameStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_ClientGameStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ClientGameStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_ClientGameStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_ClientGameStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics
	{
		static void NewProp_bIsWinner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWinner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpendedTimeInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::NewProp_bIsWinner_SetBit(void* Obj)
	{
		((ShooterPlayerController_eventClientSendRoundEndEvent_Parms*)Obj)->bIsWinner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::NewProp_bIsWinner = { "bIsWinner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterPlayerController_eventClientSendRoundEndEvent_Parms), &Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::NewProp_bIsWinner_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::NewProp_ExpendedTimeInSeconds = { "ExpendedTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerController_eventClientSendRoundEndEvent_Parms, ExpendedTimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::NewProp_bIsWinner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::NewProp_ExpendedTimeInSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Notifies clients to send the end-of-round event */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "Notifies clients to send the end-of-round event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "ClientSendRoundEndEvent", nullptr, nullptr, sizeof(ShooterPlayerController_eventClientSendRoundEndEvent_Parms), Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerController_eventClientSetSpectatorCamera_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerController_eventClientSetSpectatorCamera_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::NewProp_CameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::NewProp_CameraRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** sets spectator location and rotation */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "sets spectator location and rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "ClientSetSpectatorCamera", nullptr, nullptr, sizeof(ShooterPlayerController_eventClientSetSpectatorCamera_Parms), Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_ClientStartOnlineGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_ClientStartOnlineGame_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Starts the online game using the session name in the PlayerState */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "Starts the online game using the session name in the PlayerState" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_ClientStartOnlineGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "ClientStartOnlineGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_ClientStartOnlineGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ClientStartOnlineGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_ClientStartOnlineGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_ClientStartOnlineGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics
	{
		struct ShooterPlayerController_eventOnLeaderboardReadComplete_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((ShooterPlayerController_eventOnLeaderboardReadComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterPlayerController_eventOnLeaderboardReadComplete_Parms), &Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "OnLeaderboardReadComplete", nullptr, nullptr, sizeof(ShooterPlayerController_eventOnLeaderboardReadComplete_Parms), Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_Say_Statics
	{
		struct ShooterPlayerController_eventSay_Parms
		{
			FString Msg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_Say_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AShooterPlayerController_Say_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerController_eventSay_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_Say_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_Say_Statics::NewProp_Msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_Say_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_Say_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_Say_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Local function say a string */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "Local function say a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_Say_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "Say", nullptr, nullptr, sizeof(ShooterPlayerController_eventSay_Parms), Z_Construct_UFunction_AShooterPlayerController_Say_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_Say_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_Say_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_Say_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_Say()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_Say_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerController_eventServerCheat_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::NewProp_Msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** sends cheat message */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "sends cheat message" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "ServerCheat", nullptr, nullptr, sizeof(ShooterPlayerController_eventServerCheat_Parms), Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_ServerCheat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_ServerCheat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerController_eventServerSay_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::NewProp_Msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** RPC for clients to talk to server */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "RPC for clients to talk to server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "ServerSay", nullptr, nullptr, sizeof(ShooterPlayerController_eventServerSay_Parms), Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_ServerSay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_ServerSay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_ServerSuicide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_ServerSuicide_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Notifies the server that the client has suicided */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "Notifies the server that the client has suicided" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_ServerSuicide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "ServerSuicide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_ServerSuicide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_ServerSuicide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_ServerSuicide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_ServerSuicide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics
	{
		struct ShooterPlayerController_eventSetGodMode_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((ShooterPlayerController_eventSetGodMode_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterPlayerController_eventSetGodMode_Parms), &Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** set god mode cheat */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "set god mode cheat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "SetGodMode", nullptr, nullptr, sizeof(ShooterPlayerController_eventSetGodMode_Parms), Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_SetGodMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_SetGodMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics
	{
		struct ShooterPlayerController_eventSimulateInputKey_Parms
		{
			FKey Key;
			bool bPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_bPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterPlayerController_eventSimulateInputKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::NewProp_bPressed_SetBit(void* Obj)
	{
		((ShooterPlayerController_eventSimulateInputKey_Parms*)Obj)->bPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::NewProp_bPressed = { "bPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterPlayerController_eventSimulateInputKey_Parms), &Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::NewProp_bPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::NewProp_bPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** used for input simulation from blueprint (for automatic perf tests) */" },
		{ "CPP_Default_bPressed", "true" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "used for input simulation from blueprint (for automatic perf tests)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "SimulateInputKey", nullptr, nullptr, sizeof(ShooterPlayerController_eventSimulateInputKey_Parms), Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterPlayerController_Suicide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_Suicide_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Causes the player to commit suicide */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "Causes the player to commit suicide" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_Suicide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "Suicide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterPlayerController_Suicide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_Suicide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_Suicide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_Suicide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister()
	{
		return AShooterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfiniteAmmo_MetaData[];
#endif
		static void NewProp_bInfiniteAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfiniteAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfiniteClip_MetaData[];
#endif
		static void NewProp_bInfiniteClip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfiniteClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHealthRegen_MetaData[];
#endif
		static void NewProp_bHealthRegen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHealthRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGodMode_MetaData[];
#endif
		static void NewProp_bGodMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGodMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalogFireTrigger_MetaData[];
#endif
		static void NewProp_bAnalogFireTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalogFireTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireTriggerThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireTriggerThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterPlayerController_ClientEndOnlineGame, "ClientEndOnlineGame" }, // 854763736
		{ &Z_Construct_UFunction_AShooterPlayerController_ClientGameStarted, "ClientGameStarted" }, // 1409724273
		{ &Z_Construct_UFunction_AShooterPlayerController_ClientSendRoundEndEvent, "ClientSendRoundEndEvent" }, // 4270565172
		{ &Z_Construct_UFunction_AShooterPlayerController_ClientSetSpectatorCamera, "ClientSetSpectatorCamera" }, // 637775419
		{ &Z_Construct_UFunction_AShooterPlayerController_ClientStartOnlineGame, "ClientStartOnlineGame" }, // 884510072
		{ &Z_Construct_UFunction_AShooterPlayerController_OnLeaderboardReadComplete, "OnLeaderboardReadComplete" }, // 2291255737
		{ &Z_Construct_UFunction_AShooterPlayerController_Say, "Say" }, // 1692105349
		{ &Z_Construct_UFunction_AShooterPlayerController_ServerCheat, "ServerCheat" }, // 3100913449
		{ &Z_Construct_UFunction_AShooterPlayerController_ServerSay, "ServerSay" }, // 274239665
		{ &Z_Construct_UFunction_AShooterPlayerController_ServerSuicide, "ServerSuicide" }, // 1477794695
		{ &Z_Construct_UFunction_AShooterPlayerController_SetGodMode, "SetGodMode" }, // 915742803
		{ &Z_Construct_UFunction_AShooterPlayerController_SimulateInputKey, "SimulateInputKey" }, // 2336398556
		{ &Z_Construct_UFunction_AShooterPlayerController_Suicide, "Suicide" }, // 3622690679
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/ShooterPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteAmmo_MetaData[] = {
		{ "Comment", "/** infinite ammo cheat */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "infinite ammo cheat" },
	};
#endif
	void Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteAmmo_SetBit(void* Obj)
	{
		((AShooterPlayerController*)Obj)->bInfiniteAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteAmmo = { "bInfiniteAmmo", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterPlayerController), &Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteAmmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteClip_MetaData[] = {
		{ "Comment", "/** infinite clip cheat */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "infinite clip cheat" },
	};
#endif
	void Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteClip_SetBit(void* Obj)
	{
		((AShooterPlayerController*)Obj)->bInfiniteClip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteClip = { "bInfiniteClip", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterPlayerController), &Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteClip_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bHealthRegen_MetaData[] = {
		{ "Comment", "/** health regen cheat */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "health regen cheat" },
	};
#endif
	void Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bHealthRegen_SetBit(void* Obj)
	{
		((AShooterPlayerController*)Obj)->bHealthRegen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bHealthRegen = { "bHealthRegen", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterPlayerController), &Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bHealthRegen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bHealthRegen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bHealthRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bGodMode_MetaData[] = {
		{ "Comment", "/** god mode cheat */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "god mode cheat" },
	};
#endif
	void Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bGodMode_SetBit(void* Obj)
	{
		((AShooterPlayerController*)Obj)->bGodMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bGodMode = { "bGodMode", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AShooterPlayerController), &Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bGodMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bGodMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bGodMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bAnalogFireTrigger_MetaData[] = {
		{ "Comment", "/** enable analog fire trigger mode */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "enable analog fire trigger mode" },
	};
#endif
	void Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bAnalogFireTrigger_SetBit(void* Obj)
	{
		((AShooterPlayerController*)Obj)->bAnalogFireTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bAnalogFireTrigger = { "bAnalogFireTrigger", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterPlayerController), &Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bAnalogFireTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bAnalogFireTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bAnalogFireTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_FireTriggerThreshold_MetaData[] = {
		{ "Comment", "/** threshold trigger fires */" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController.h" },
		{ "ToolTip", "threshold trigger fires" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_FireTriggerThreshold = { "FireTriggerThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, FireTriggerThreshold), METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_FireTriggerThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_FireTriggerThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bInfiniteClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bHealthRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bGodMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_bAnalogFireTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_FireTriggerThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams = {
		&AShooterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterPlayerController, 349134075);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterPlayerController>()
	{
		return AShooterPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterPlayerController(Z_Construct_UClass_AShooterPlayerController, &AShooterPlayerController::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterPlayerController"), false, nullptr, nullptr, nullptr);

	void AShooterPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bInfiniteAmmo(TEXT("bInfiniteAmmo"));
		static const FName Name_bInfiniteClip(TEXT("bInfiniteClip"));
		static const FName Name_bHealthRegen(TEXT("bHealthRegen"));

		const bool bIsValid = true
			&& Name_bInfiniteAmmo == ClassReps[(int32)ENetFields_Private::bInfiniteAmmo].Property->GetFName()
			&& Name_bInfiniteClip == ClassReps[(int32)ENetFields_Private::bInfiniteClip].Property->GetFName()
			&& Name_bHealthRegen == ClassReps[(int32)ENetFields_Private::bHealthRegen].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShooterPlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

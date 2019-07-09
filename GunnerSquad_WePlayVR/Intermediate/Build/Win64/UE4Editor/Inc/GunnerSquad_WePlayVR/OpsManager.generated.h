// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class eDeviceStatus : uint8;
enum class eDeviceType : uint8;
enum class eInputNameType : uint8;
#ifdef GUNNERSQUAD_WEPLAYVR_OpsManager_generated_h
#error "OpsManager.generated.h already included, missing '#pragma once' in OpsManager.h"
#endif
#define GUNNERSQUAD_WEPLAYVR_OpsManager_generated_h

#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FstructOPS_GameServerData_Statics; \
	GUNNERSQUAD_WEPLAYVR_API static class UScriptStruct* StaticStruct();


template<> GUNNERSQUAD_WEPLAYVR_API UScriptStruct* StaticStruct<struct FstructOPS_GameServerData>();

#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FstructOPS_GameServerClientData_Statics; \
	GUNNERSQUAD_WEPLAYVR_API static class UScriptStruct* StaticStruct();


template<> GUNNERSQUAD_WEPLAYVR_API UScriptStruct* StaticStruct<struct FstructOPS_GameServerClientData>();

#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FstructOPS_StartData_Statics; \
	GUNNERSQUAD_WEPLAYVR_API static class UScriptStruct* StaticStruct();


template<> GUNNERSQUAD_WEPLAYVR_API UScriptStruct* StaticStruct<struct FstructOPS_StartData>();

#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FstructOPS_Data_Statics; \
	GUNNERSQUAD_WEPLAYVR_API static class UScriptStruct* StaticStruct();


template<> GUNNERSQUAD_WEPLAYVR_API UScriptStruct* StaticStruct<struct FstructOPS_Data>();

#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_222_DELEGATE \
static inline void FOnStartCommandReceived_DelegateWrapper(const FMulticastScriptDelegate& OnStartCommandReceived) \
{ \
	OnStartCommandReceived.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendLighthouseStatus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strLighthouseID); \
		P_GET_ENUM(eDeviceStatus,Z_Param_a_enumStatus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendLighthouseStatus(Z_Param_a_strLighthouseID,eDeviceStatus(Z_Param_a_enumStatus)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendServerTimeout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendServerTimeout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendServerReady) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strGameServerIP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_iPort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendServerReady(Z_Param_a_strGameServerIP,Z_Param_a_iPort); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLanguageChangeResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendLanguageChangeResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSessionID) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strSessionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSessionID(Z_Param_a_strSessionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStopRumble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStopRumble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStartRumble) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strClipName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nVolume); \
		P_GET_UBOOL(Z_Param_a_bPlayOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStartRumble(Z_Param_a_strClipName,Z_Param_a_nVolume,Z_Param_a_bPlayOnce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendScreenshot) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_a_arrImageData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendScreenshot(Z_Param_a_arrImageData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendConnectedDevicesUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendConnectedDevicesUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddConnecedDeviceToProfile) \
	{ \
		P_GET_ENUM(eDeviceType,Z_Param_a_enumType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strID); \
		P_GET_ENUM(eDeviceStatus,Z_Param_a_enumStatus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddConnecedDeviceToProfile(eDeviceType(Z_Param_a_enumType),Z_Param_a_strValue,Z_Param_a_strID,eDeviceStatus(Z_Param_a_enumStatus)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearConnectedDevicesData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearConnectedDevicesData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPropToProfile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strPropName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_iID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPropToProfile(Z_Param_a_strPropName,Z_Param_a_iID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPropsData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPropsData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGameInformation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nGameDuration); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nMinimumNumberPlayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nMaximumNumberPlayer); \
		P_GET_ENUM(eInputNameType,Z_Param_a_enumInputNameType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGameInformation(Z_Param_a_nGameDuration,Z_Param_a_nMinimumNumberPlayer,Z_Param_a_nMaximumNumberPlayer,eInputNameType(Z_Param_a_enumInputNameType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSupportedLanguages) \
	{ \
		P_GET_TARRAY(FString,Z_Param_a_strInternalName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSupportedLanguages(Z_Param_a_strInternalName,Z_Param_a_nLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendEndResponseToOPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendEndResponseToOPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStartResponseToOPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStartResponseToOPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendOPSConfigResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendOPSConfigResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendInitResponseToOPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendInitResponseToOPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendProfileToOPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendProfileToOPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIPForOPS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strOPSIP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIPForOPS(Z_Param_a_strOPSIP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanUpOPSClient) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanUpOPSClient(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterForLogs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterForLogs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterForCommands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterForCommands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateOPSClient) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateOPSClient(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Connect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendClearDataResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendClearDataResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendConnectedDevicesUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendConnectedDevicesUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendClearDataResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendClearDataResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodConnect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodConnect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendLighthouseStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendLighthouseStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendServerTimeout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendServerTimeout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendServerReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendServerReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendLanguageChangeResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendLanguageChangeResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSetSessionID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSetSessionID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendStopRumble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendStopRumble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendStartRumble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendStartRumble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendScreenshot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendScreenshot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodAddConnecedDeviceToProfile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodAddConnecedDeviceToProfile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodClearConnectedDevicesData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodClearConnectedDevicesData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodAddPropToProfile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodAddPropToProfile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodClearPropsData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodClearPropsData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSetGameInformation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSetGameInformation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSetSupportedLanguages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSetSupportedLanguages(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendEndResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendEndResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendStartResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendStartResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendOPSConfigResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendOPSConfigResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendInitResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendInitResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendProfile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendProfile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodCloseAndCleanUpOPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodCloseAndCleanUpOPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSetOPSIP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSetOPSIP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodRegisterForCommands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodRegisterForCommands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodRegisterForLogs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodRegisterForLogs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodCreateOPSClientMethod) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodCreateOPSClientMethod(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportDLLMethods) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportDLLMethods(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportDLL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strFolderName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strDLLName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportDLL(Z_Param_a_strFolderName,Z_Param_a_strDLLName); \
		P_NATIVE_END; \
	}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendLighthouseStatus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strLighthouseID); \
		P_GET_ENUM(eDeviceStatus,Z_Param_a_enumStatus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendLighthouseStatus(Z_Param_a_strLighthouseID,eDeviceStatus(Z_Param_a_enumStatus)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendServerTimeout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendServerTimeout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendServerReady) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strGameServerIP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_iPort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendServerReady(Z_Param_a_strGameServerIP,Z_Param_a_iPort); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLanguageChangeResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendLanguageChangeResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSessionID) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strSessionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSessionID(Z_Param_a_strSessionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStopRumble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStopRumble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStartRumble) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strClipName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nVolume); \
		P_GET_UBOOL(Z_Param_a_bPlayOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStartRumble(Z_Param_a_strClipName,Z_Param_a_nVolume,Z_Param_a_bPlayOnce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendScreenshot) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_a_arrImageData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendScreenshot(Z_Param_a_arrImageData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendConnectedDevicesUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendConnectedDevicesUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddConnecedDeviceToProfile) \
	{ \
		P_GET_ENUM(eDeviceType,Z_Param_a_enumType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strID); \
		P_GET_ENUM(eDeviceStatus,Z_Param_a_enumStatus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddConnecedDeviceToProfile(eDeviceType(Z_Param_a_enumType),Z_Param_a_strValue,Z_Param_a_strID,eDeviceStatus(Z_Param_a_enumStatus)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearConnectedDevicesData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearConnectedDevicesData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPropToProfile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strPropName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_iID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPropToProfile(Z_Param_a_strPropName,Z_Param_a_iID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPropsData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPropsData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGameInformation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nGameDuration); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nMinimumNumberPlayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nMaximumNumberPlayer); \
		P_GET_ENUM(eInputNameType,Z_Param_a_enumInputNameType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGameInformation(Z_Param_a_nGameDuration,Z_Param_a_nMinimumNumberPlayer,Z_Param_a_nMaximumNumberPlayer,eInputNameType(Z_Param_a_enumInputNameType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSupportedLanguages) \
	{ \
		P_GET_TARRAY(FString,Z_Param_a_strInternalName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSupportedLanguages(Z_Param_a_strInternalName,Z_Param_a_nLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendEndResponseToOPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendEndResponseToOPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStartResponseToOPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStartResponseToOPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendOPSConfigResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendOPSConfigResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendInitResponseToOPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendInitResponseToOPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendProfileToOPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendProfileToOPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIPForOPS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strOPSIP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIPForOPS(Z_Param_a_strOPSIP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanUpOPSClient) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanUpOPSClient(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterForLogs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterForLogs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterForCommands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterForCommands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateOPSClient) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateOPSClient(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Connect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendClearDataResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendClearDataResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendConnectedDevicesUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendConnectedDevicesUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendClearDataResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendClearDataResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodConnect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodConnect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendLighthouseStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendLighthouseStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendServerTimeout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendServerTimeout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendServerReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendServerReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendLanguageChangeResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendLanguageChangeResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSetSessionID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSetSessionID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendStopRumble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendStopRumble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendStartRumble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendStartRumble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendScreenshot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendScreenshot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodAddConnecedDeviceToProfile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodAddConnecedDeviceToProfile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodClearConnectedDevicesData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodClearConnectedDevicesData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodAddPropToProfile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodAddPropToProfile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodClearPropsData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodClearPropsData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSetGameInformation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSetGameInformation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSetSupportedLanguages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSetSupportedLanguages(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendEndResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendEndResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendStartResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendStartResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendOPSConfigResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendOPSConfigResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendInitResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendInitResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSendProfile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSendProfile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodCloseAndCleanUpOPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodCloseAndCleanUpOPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodSetOPSIP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodSetOPSIP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodRegisterForCommands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodRegisterForCommands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodRegisterForLogs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodRegisterForLogs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportMethodCreateOPSClientMethod) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportMethodCreateOPSClientMethod(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportDLLMethods) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportDLLMethods(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportDLL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strFolderName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strDLLName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ImportDLL(Z_Param_a_strFolderName,Z_Param_a_strDLLName); \
		P_NATIVE_END; \
	}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpsManager(); \
	friend struct Z_Construct_UClass_UOpsManager_Statics; \
public: \
	DECLARE_CLASS(UOpsManager, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GunnerSquad_WePlayVR"), NO_API) \
	DECLARE_SERIALIZER(UOpsManager)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_INCLASS \
private: \
	static void StaticRegisterNativesUOpsManager(); \
	friend struct Z_Construct_UClass_UOpsManager_Statics; \
public: \
	DECLARE_CLASS(UOpsManager, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GunnerSquad_WePlayVR"), NO_API) \
	DECLARE_SERIALIZER(UOpsManager)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpsManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpsManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpsManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpsManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpsManager(UOpsManager&&); \
	NO_API UOpsManager(const UOpsManager&); \
public:


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpsManager(UOpsManager&&); \
	NO_API UOpsManager(const UOpsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpsManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpsManager)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_PRIVATE_PROPERTY_OFFSET
#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_224_PROLOG
#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_PRIVATE_PROPERTY_OFFSET \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_RPC_WRAPPERS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_INCLASS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_PRIVATE_PROPERTY_OFFSET \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_INCLASS_NO_PURE_DECLS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h_227_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<class UOpsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_OpsManager_h


#define FOREACH_ENUM_ECOMMAND10TYPE(op) \
	op(eCommand10Type::iStart) \
	op(eCommand10Type::iEnd) \
	op(eCommand10Type::iInit) \
	op(eCommand10Type::iOPS_Config) \
	op(eCommand10Type::iLanguage_Change) \
	op(eCommand10Type::iConnectedDevicesUpdate) \
	op(eCommand10Type::iScreenshot) \
	op(eCommand10Type::iClearData) 

enum class eCommand10Type : uint8;
template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eCommand10Type>();

#define FOREACH_ENUM_ELOGTYPE(op) \
	op(eLogType::iLOG) \
	op(eLogType::iWARNING) \
	op(eLogType::iERROR) 

enum class eLogType : uint8;
template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eLogType>();

#define FOREACH_ENUM_EINPUTNAMETYPE(op) \
	op(eInputNameType::None) \
	op(eInputNameType::PlayerName) \
	op(eInputNameType::TeamName) \
	op(eInputNameType::All) 

enum class eInputNameType : uint8;
template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eInputNameType>();

#define FOREACH_ENUM_EBUILDTYPE(op) \
	op(eBuildType::iGame) \
	op(eBuildType::iStreamer) \
	op(eBuildType::iServer) 

enum class eBuildType : uint8;
template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eBuildType>();

#define FOREACH_ENUM_EDEVICESTATUS(op) \
	op(eDeviceStatus::iNotConnected) \
	op(eDeviceStatus::iConnected) \
	op(eDeviceStatus::iDisconnected) \
	op(eDeviceStatus::iStandby) \
	op(eDeviceStatus::iDeviceError) 

enum class eDeviceStatus : uint8;
template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eDeviceStatus>();

#define FOREACH_ENUM_EDEVICETYPE(op) \
	op(eDeviceType::iHMD) \
	op(eDeviceType::iVive_Controller_Left) \
	op(eDeviceType::iVive_Controller_Right) \
	op(eDeviceType::iOculus_Controller_Left) \
	op(eDeviceType::iOculus_Controller_Right) \
	op(eDeviceType::iVive_Lighthouse) \
	op(eDeviceType::IOculus_Lighthouse) 

enum class eDeviceType : uint8;
template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eDeviceType>();

#define FOREACH_ENUM_EATTRACTIONTYPE(op) \
	op(eAttractionType::iArena) \
	op(eAttractionType::iMotion) 

enum class eAttractionType : uint8;
template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eAttractionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

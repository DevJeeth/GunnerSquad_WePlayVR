// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GUNNERSQUAD_WEPLAYVR_WePlayVR_GameInstance_generated_h
#error "WePlayVR_GameInstance.generated.h already included, missing '#pragma once' in WePlayVR_GameInstance.h"
#endif
#define GUNNERSQUAD_WEPLAYVR_WePlayVR_GameInstance_generated_h

#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLightHouseStatusChangedFor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strLightHouseName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLightHouseStatusChangedFor(Z_Param_a_strLightHouseName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckAndUpdateLightHouseStatus) \
	{ \
		P_GET_UBOOL(Z_Param_a_bForceUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckAndUpdateLightHouseStatus(Z_Param_a_bForceUpdate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetProjectName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetProjectVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendScreenshotResponse) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_a_arrImageData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendScreenshotResponse(Z_Param_a_arrImageData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckAndSendVRDeviceStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckAndSendVRDeviceStatus(); \
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
	DECLARE_FUNCTION(execSendLanguageDetails) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendLanguageDetails(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSupportedLanguages) \
	{ \
		P_GET_TARRAY(FString,Z_Param_a_arrLanguageNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSupportedLanguages(Z_Param_a_arrLanguageNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLightHouseStatus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendLightHouseStatus(Z_Param_a_strID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendHMDStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendHMDStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendControllerStatus) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_iIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendControllerStatus(Z_Param_a_iIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStopRumbleCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStopRumbleCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStartRumbleCommand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_iClipIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nVolume); \
		P_GET_UBOOL(Z_Param_a_bPlayOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStartRumbleCommand(Z_Param_a_iClipIndex,Z_Param_a_nVolume,Z_Param_a_bPlayOnce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendEndCommandResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendEndCommandResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStartCommandResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStartCommandResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCommandReceived) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strCommandData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCommandReceived(Z_Param_a_strCommandData); \
		P_NATIVE_END; \
	}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLightHouseStatusChangedFor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strLightHouseName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLightHouseStatusChangedFor(Z_Param_a_strLightHouseName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckAndUpdateLightHouseStatus) \
	{ \
		P_GET_UBOOL(Z_Param_a_bForceUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckAndUpdateLightHouseStatus(Z_Param_a_bForceUpdate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetProjectName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetProjectVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendScreenshotResponse) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_a_arrImageData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendScreenshotResponse(Z_Param_a_arrImageData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckAndSendVRDeviceStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckAndSendVRDeviceStatus(); \
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
	DECLARE_FUNCTION(execSendLanguageDetails) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendLanguageDetails(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSupportedLanguages) \
	{ \
		P_GET_TARRAY(FString,Z_Param_a_arrLanguageNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSupportedLanguages(Z_Param_a_arrLanguageNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLightHouseStatus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendLightHouseStatus(Z_Param_a_strID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendHMDStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendHMDStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendControllerStatus) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_iIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendControllerStatus(Z_Param_a_iIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStopRumbleCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStopRumbleCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStartRumbleCommand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_iClipIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_nVolume); \
		P_GET_UBOOL(Z_Param_a_bPlayOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStartRumbleCommand(Z_Param_a_iClipIndex,Z_Param_a_nVolume,Z_Param_a_bPlayOnce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendEndCommandResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendEndCommandResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStartCommandResponse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendStartCommandResponse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCommandReceived) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strCommandData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCommandReceived(Z_Param_a_strCommandData); \
		P_NATIVE_END; \
	}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_EVENT_PARMS \
	struct WePlayVR_GameInstance_eventOnLanguageChangeCommandReceived_Parms \
	{ \
		FString a_strLanguage; \
	}; \
	struct WePlayVR_GameInstance_eventOnLanguageDetailsGetCommand_Parms \
	{ \
		TArray<FString> ReturnValue; \
	};


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_CALLBACK_WRAPPERS
#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWePlayVR_GameInstance(); \
	friend struct Z_Construct_UClass_UWePlayVR_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UWePlayVR_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GunnerSquad_WePlayVR"), NO_API) \
	DECLARE_SERIALIZER(UWePlayVR_GameInstance)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWePlayVR_GameInstance(); \
	friend struct Z_Construct_UClass_UWePlayVR_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UWePlayVR_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GunnerSquad_WePlayVR"), NO_API) \
	DECLARE_SERIALIZER(UWePlayVR_GameInstance)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWePlayVR_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWePlayVR_GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWePlayVR_GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWePlayVR_GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWePlayVR_GameInstance(UWePlayVR_GameInstance&&); \
	NO_API UWePlayVR_GameInstance(const UWePlayVR_GameInstance&); \
public:


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWePlayVR_GameInstance(UWePlayVR_GameInstance&&); \
	NO_API UWePlayVR_GameInstance(const UWePlayVR_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWePlayVR_GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWePlayVR_GameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWePlayVR_GameInstance)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_refOpsManager() { return STRUCT_OFFSET(UWePlayVR_GameInstance, m_refOpsManager); }


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_13_PROLOG \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_EVENT_PARMS


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_RPC_WRAPPERS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_CALLBACK_WRAPPERS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_INCLASS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_CALLBACK_WRAPPERS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_INCLASS_NO_PURE_DECLS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<class UWePlayVR_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_WePlayVR_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

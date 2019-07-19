// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GUNNERSQUAD_WEPLAYVR_SteamVRStatus_generated_h
#error "SteamVRStatus.generated.h already included, missing '#pragma once' in SteamVRStatus.h"
#endif
#define GUNNERSQUAD_WEPLAYVR_SteamVRStatus_generated_h

#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckForStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckForStatus(); \
		P_NATIVE_END; \
	}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckForStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckForStatus(); \
		P_NATIVE_END; \
	}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamVRStatus(); \
	friend struct Z_Construct_UClass_USteamVRStatus_Statics; \
public: \
	DECLARE_CLASS(USteamVRStatus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GunnerSquad_WePlayVR"), NO_API) \
	DECLARE_SERIALIZER(USteamVRStatus)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSteamVRStatus(); \
	friend struct Z_Construct_UClass_USteamVRStatus_Statics; \
public: \
	DECLARE_CLASS(USteamVRStatus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GunnerSquad_WePlayVR"), NO_API) \
	DECLARE_SERIALIZER(USteamVRStatus)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRStatus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRStatus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRStatus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRStatus(USteamVRStatus&&); \
	NO_API USteamVRStatus(const USteamVRStatus&); \
public:


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRStatus(USteamVRStatus&&); \
	NO_API USteamVRStatus(const USteamVRStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRStatus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRStatus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRStatus)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_PRIVATE_PROPERTY_OFFSET
#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_12_PROLOG
#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_PRIVATE_PROPERTY_OFFSET \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_RPC_WRAPPERS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_INCLASS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_PRIVATE_PROPERTY_OFFSET \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_INCLASS_NO_PURE_DECLS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<class USteamVRStatus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_SteamVRStatus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

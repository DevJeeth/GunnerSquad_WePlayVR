// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GUNNERSQUAD_WEPLAYVR_LoadingMapManager_generated_h
#error "LoadingMapManager.generated.h already included, missing '#pragma once' in LoadingMapManager.h"
#endif
#define GUNNERSQUAD_WEPLAYVR_LoadingMapManager_generated_h

#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strLevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadLevel(Z_Param_a_strLevelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoadedLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetLoadedLevel(); \
		P_NATIVE_END; \
	}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strLevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadLevel(Z_Param_a_strLevelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoadedLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetLoadedLevel(); \
		P_NATIVE_END; \
	}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALoadingMapManager(); \
	friend struct Z_Construct_UClass_ALoadingMapManager_Statics; \
public: \
	DECLARE_CLASS(ALoadingMapManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GunnerSquad_WePlayVR"), NO_API) \
	DECLARE_SERIALIZER(ALoadingMapManager)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALoadingMapManager(); \
	friend struct Z_Construct_UClass_ALoadingMapManager_Statics; \
public: \
	DECLARE_CLASS(ALoadingMapManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GunnerSquad_WePlayVR"), NO_API) \
	DECLARE_SERIALIZER(ALoadingMapManager)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALoadingMapManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALoadingMapManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALoadingMapManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALoadingMapManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALoadingMapManager(ALoadingMapManager&&); \
	NO_API ALoadingMapManager(const ALoadingMapManager&); \
public:


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALoadingMapManager(ALoadingMapManager&&); \
	NO_API ALoadingMapManager(const ALoadingMapManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALoadingMapManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALoadingMapManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALoadingMapManager)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_PRIVATE_PROPERTY_OFFSET
#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_11_PROLOG
#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_PRIVATE_PROPERTY_OFFSET \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_RPC_WRAPPERS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_INCLASS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_PRIVATE_PROPERTY_OFFSET \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_INCLASS_NO_PURE_DECLS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<class ALoadingMapManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_LoadingMapManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

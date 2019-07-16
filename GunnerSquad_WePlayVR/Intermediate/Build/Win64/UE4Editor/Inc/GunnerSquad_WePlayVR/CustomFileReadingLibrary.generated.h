// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
struct FRotator;
#ifdef GUNNERSQUAD_WEPLAYVR_CustomFileReadingLibrary_generated_h
#error "CustomFileReadingLibrary.generated.h already included, missing '#pragma once' in CustomFileReadingLibrary.h"
#endif
#define GUNNERSQUAD_WEPLAYVR_CustomFileReadingLibrary_generated_h

#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveStringToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strContent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCustomFileReadingLibrary::SaveStringToFile(Z_Param_a_strFileName,Z_Param_a_strContent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strContent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCustomFileReadingLibrary::SaveToFile(Z_Param_a_strFileName,Z_Param_a_strContent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execset_rotation_at_spline_point) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_target); \
		P_GET_PROPERTY(UIntProperty,Z_Param_point_index); \
		P_GET_STRUCT(FRotator,Z_Param_rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomFileReadingLibrary::set_rotation_at_spline_point(Z_Param_target,Z_Param_point_index,Z_Param_rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetXMLInfo) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_basePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_fileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomFileReadingLibrary::GetXMLInfo(Z_Param_Out_basePath,Z_Param_Out_fileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAds) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InGameAds); \
		P_GET_UBOOL_REF(Z_Param_Out_isInGameAdsStreamingRandom); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_SessionAds); \
		P_GET_UBOOL_REF(Z_Param_Out_isSessionAdsStreamingRandom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomFileReadingLibrary::GetAds(Z_Param_Out_InGameAds,Z_Param_Out_isInGameAdsStreamingRandom,Z_Param_Out_SessionAds,Z_Param_Out_isSessionAdsStreamingRandom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdXMLFileLocation) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_a_strFilePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_a_strXMLName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCustomFileReadingLibrary::GetAdXMLFileLocation(Z_Param_Out_a_strFilePath,Z_Param_Out_a_strXMLName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomMediaFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_mediaFilePath); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomFileReadingLibrary::GetRandomMediaFile(Z_Param_RootFolderFullPath,Z_Param_Out_mediaFilePath,Z_Param_Out_duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoad_XML_File) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCustomFileReadingLibrary::Load_XML_File(Z_Param_RootFolderFullPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilesCount) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCustomFileReadingLibrary::GetFilesCount(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFiles) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCustomFileReadingLibrary::GetFiles(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext); \
		P_NATIVE_END; \
	}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveStringToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strContent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCustomFileReadingLibrary::SaveStringToFile(Z_Param_a_strFileName,Z_Param_a_strContent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_a_strContent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCustomFileReadingLibrary::SaveToFile(Z_Param_a_strFileName,Z_Param_a_strContent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execset_rotation_at_spline_point) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_target); \
		P_GET_PROPERTY(UIntProperty,Z_Param_point_index); \
		P_GET_STRUCT(FRotator,Z_Param_rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomFileReadingLibrary::set_rotation_at_spline_point(Z_Param_target,Z_Param_point_index,Z_Param_rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetXMLInfo) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_basePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_fileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomFileReadingLibrary::GetXMLInfo(Z_Param_Out_basePath,Z_Param_Out_fileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAds) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InGameAds); \
		P_GET_UBOOL_REF(Z_Param_Out_isInGameAdsStreamingRandom); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_SessionAds); \
		P_GET_UBOOL_REF(Z_Param_Out_isSessionAdsStreamingRandom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomFileReadingLibrary::GetAds(Z_Param_Out_InGameAds,Z_Param_Out_isInGameAdsStreamingRandom,Z_Param_Out_SessionAds,Z_Param_Out_isSessionAdsStreamingRandom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdXMLFileLocation) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_a_strFilePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_a_strXMLName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCustomFileReadingLibrary::GetAdXMLFileLocation(Z_Param_Out_a_strFilePath,Z_Param_Out_a_strXMLName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomMediaFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_mediaFilePath); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomFileReadingLibrary::GetRandomMediaFile(Z_Param_RootFolderFullPath,Z_Param_Out_mediaFilePath,Z_Param_Out_duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoad_XML_File) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCustomFileReadingLibrary::Load_XML_File(Z_Param_RootFolderFullPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilesCount) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCustomFileReadingLibrary::GetFilesCount(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFiles) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCustomFileReadingLibrary::GetFiles(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext); \
		P_NATIVE_END; \
	}


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomFileReadingLibrary(); \
	friend struct Z_Construct_UClass_UCustomFileReadingLibrary_Statics; \
public: \
	DECLARE_CLASS(UCustomFileReadingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GunnerSquad_WePlayVR"), NO_API) \
	DECLARE_SERIALIZER(UCustomFileReadingLibrary)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUCustomFileReadingLibrary(); \
	friend struct Z_Construct_UClass_UCustomFileReadingLibrary_Statics; \
public: \
	DECLARE_CLASS(UCustomFileReadingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GunnerSquad_WePlayVR"), NO_API) \
	DECLARE_SERIALIZER(UCustomFileReadingLibrary)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomFileReadingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomFileReadingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomFileReadingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomFileReadingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomFileReadingLibrary(UCustomFileReadingLibrary&&); \
	NO_API UCustomFileReadingLibrary(const UCustomFileReadingLibrary&); \
public:


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomFileReadingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomFileReadingLibrary(UCustomFileReadingLibrary&&); \
	NO_API UCustomFileReadingLibrary(const UCustomFileReadingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomFileReadingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomFileReadingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomFileReadingLibrary)


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_25_PROLOG
#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_RPC_WRAPPERS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_INCLASS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_INCLASS_NO_PURE_DECLS \
	GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<class UCustomFileReadingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunnerSquad_WePlayVR_Source_GunnerSquad_WePlayVR_CustomFileReadingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

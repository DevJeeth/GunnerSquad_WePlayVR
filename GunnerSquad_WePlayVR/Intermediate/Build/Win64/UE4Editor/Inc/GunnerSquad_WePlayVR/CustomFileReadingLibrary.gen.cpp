// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunnerSquad_WePlayVR/CustomFileReadingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomFileReadingLibrary() {}
// Cross Module References
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_UCustomFileReadingLibrary_NoRegister();
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_UCustomFileReadingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void UCustomFileReadingLibrary::StaticRegisterNativesUCustomFileReadingLibrary()
	{
		UClass* Class = UCustomFileReadingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAds", &UCustomFileReadingLibrary::execGetAds },
			{ "GetAdXMLFileLocation", &UCustomFileReadingLibrary::execGetAdXMLFileLocation },
			{ "GetFiles", &UCustomFileReadingLibrary::execGetFiles },
			{ "GetFilesCount", &UCustomFileReadingLibrary::execGetFilesCount },
			{ "GetRandomMediaFile", &UCustomFileReadingLibrary::execGetRandomMediaFile },
			{ "GetXMLInfo", &UCustomFileReadingLibrary::execGetXMLInfo },
			{ "Load_XML_File", &UCustomFileReadingLibrary::execLoad_XML_File },
			{ "SaveStringToFile", &UCustomFileReadingLibrary::execSaveStringToFile },
			{ "SaveToFile", &UCustomFileReadingLibrary::execSaveToFile },
			{ "set_rotation_at_spline_point", &UCustomFileReadingLibrary::execset_rotation_at_spline_point },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics
	{
		struct CustomFileReadingLibrary_eventGetAds_Parms
		{
			TArray<FString> InGameAds;
			bool isInGameAdsStreamingRandom;
			TArray<FString> SessionAds;
			bool isSessionAdsStreamingRandom;
		};
		static void NewProp_isSessionAdsStreamingRandom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSessionAdsStreamingRandom;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SessionAds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionAds_Inner;
		static void NewProp_isInGameAdsStreamingRandom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInGameAdsStreamingRandom;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InGameAds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InGameAds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_isSessionAdsStreamingRandom_SetBit(void* Obj)
	{
		((CustomFileReadingLibrary_eventGetAds_Parms*)Obj)->isSessionAdsStreamingRandom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_isSessionAdsStreamingRandom = { "isSessionAdsStreamingRandom", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomFileReadingLibrary_eventGetAds_Parms), &Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_isSessionAdsStreamingRandom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_SessionAds = { "SessionAds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetAds_Parms, SessionAds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_SessionAds_Inner = { "SessionAds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_isInGameAdsStreamingRandom_SetBit(void* Obj)
	{
		((CustomFileReadingLibrary_eventGetAds_Parms*)Obj)->isInGameAdsStreamingRandom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_isInGameAdsStreamingRandom = { "isInGameAdsStreamingRandom", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomFileReadingLibrary_eventGetAds_Parms), &Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_isInGameAdsStreamingRandom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_InGameAds = { "InGameAds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetAds_Parms, InGameAds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_InGameAds_Inner = { "InGameAds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_isSessionAdsStreamingRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_SessionAds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_SessionAds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_isInGameAdsStreamingRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_InGameAds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::NewProp_InGameAds_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::Function_MetaDataParams[] = {
		{ "Category", "UCustomFileReadingLibrary | Media" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
		{ "ToolTip", "Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomFileReadingLibrary, nullptr, "GetAds", sizeof(CustomFileReadingLibrary_eventGetAds_Parms), Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics
	{
		struct CustomFileReadingLibrary_eventGetAdXMLFileLocation_Parms
		{
			FString a_strFilePath;
			FString a_strXMLName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_a_strXMLName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_a_strFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetAdXMLFileLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::NewProp_a_strXMLName = { "a_strXMLName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetAdXMLFileLocation_Parms, a_strXMLName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::NewProp_a_strFilePath = { "a_strFilePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetAdXMLFileLocation_Parms, a_strFilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::NewProp_a_strXMLName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::NewProp_a_strFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UCustomFileReadingLibrary | Media" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
		{ "ToolTip", "Obtains the EXACT AD LOCATION!!!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomFileReadingLibrary, nullptr, "GetAdXMLFileLocation", sizeof(CustomFileReadingLibrary_eventGetAdXMLFileLocation_Parms), Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics
	{
		struct CustomFileReadingLibrary_eventGetFiles_Parms
		{
			TArray<FString> Files;
			FString RootFolderFullPath;
			FString Ext;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ext;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RootFolderFullPath;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomFileReadingLibrary_eventGetFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomFileReadingLibrary_eventGetFiles_Parms), &Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetFiles_Parms, Ext), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_RootFolderFullPath = { "RootFolderFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetFiles_Parms, RootFolderFullPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetFiles_Parms, Files), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_Ext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_RootFolderFullPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_Files,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::NewProp_Files_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "UCustomFileReadingLibrary | File IO" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
		{ "ToolTip", "Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomFileReadingLibrary, nullptr, "GetFiles", sizeof(CustomFileReadingLibrary_eventGetFiles_Parms), Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics
	{
		struct CustomFileReadingLibrary_eventGetFilesCount_Parms
		{
			TArray<FString> Files;
			FString RootFolderFullPath;
			FString Ext;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ext;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RootFolderFullPath;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetFilesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetFilesCount_Parms, Ext), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::NewProp_RootFolderFullPath = { "RootFolderFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetFilesCount_Parms, RootFolderFullPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetFilesCount_Parms, Files), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::NewProp_Ext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::NewProp_RootFolderFullPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::NewProp_Files,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::NewProp_Files_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "UCustomFileReadingLibrary|File IO Count" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
		{ "ToolTip", "Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomFileReadingLibrary, nullptr, "GetFilesCount", sizeof(CustomFileReadingLibrary_eventGetFilesCount_Parms), Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics
	{
		struct CustomFileReadingLibrary_eventGetRandomMediaFile_Parms
		{
			FString RootFolderFullPath;
			FString mediaFilePath;
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mediaFilePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RootFolderFullPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetRandomMediaFile_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::NewProp_mediaFilePath = { "mediaFilePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetRandomMediaFile_Parms, mediaFilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::NewProp_RootFolderFullPath = { "RootFolderFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetRandomMediaFile_Parms, RootFolderFullPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::NewProp_mediaFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::NewProp_RootFolderFullPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UCustomFileReadingLibrary | Media" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
		{ "ToolTip", "Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomFileReadingLibrary, nullptr, "GetRandomMediaFile", sizeof(CustomFileReadingLibrary_eventGetRandomMediaFile_Parms), Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics
	{
		struct CustomFileReadingLibrary_eventGetXMLInfo_Parms
		{
			FString basePath;
			FString fileName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_basePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetXMLInfo_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::NewProp_basePath = { "basePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventGetXMLInfo_Parms, basePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::NewProp_fileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::NewProp_basePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "UCustomFileReadingLibrary | Media" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
		{ "ToolTip", "Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomFileReadingLibrary, nullptr, "GetXMLInfo", sizeof(CustomFileReadingLibrary_eventGetXMLInfo_Parms), Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics
	{
		struct CustomFileReadingLibrary_eventLoad_XML_File_Parms
		{
			FString RootFolderFullPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RootFolderFullPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomFileReadingLibrary_eventLoad_XML_File_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomFileReadingLibrary_eventLoad_XML_File_Parms), &Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::NewProp_RootFolderFullPath = { "RootFolderFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventLoad_XML_File_Parms, RootFolderFullPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::NewProp_RootFolderFullPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::Function_MetaDataParams[] = {
		{ "Category", "UCustomFileReadingLibrary | XML" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
		{ "ToolTip", "Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomFileReadingLibrary, nullptr, "Load_XML_File", sizeof(CustomFileReadingLibrary_eventLoad_XML_File_Parms), Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics
	{
		struct CustomFileReadingLibrary_eventSaveStringToFile_Parms
		{
			FString a_strFileName;
			FString a_strContent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_a_strContent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_a_strFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomFileReadingLibrary_eventSaveStringToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomFileReadingLibrary_eventSaveStringToFile_Parms), &Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::NewProp_a_strContent = { "a_strContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventSaveStringToFile_Parms, a_strContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::NewProp_a_strFileName = { "a_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventSaveStringToFile_Parms, a_strFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::NewProp_a_strContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::NewProp_a_strFileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UCustomFileReadingLibrary" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
		{ "ToolTip", "Use this func to write string data to a file!!!!//File Name is the enire location to where the file is to be created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomFileReadingLibrary, nullptr, "SaveStringToFile", sizeof(CustomFileReadingLibrary_eventSaveStringToFile_Parms), Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics
	{
		struct CustomFileReadingLibrary_eventSaveToFile_Parms
		{
			FString a_strFileName;
			FString a_strContent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_a_strContent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_a_strFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomFileReadingLibrary_eventSaveToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomFileReadingLibrary_eventSaveToFile_Parms), &Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::NewProp_a_strContent = { "a_strContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventSaveToFile_Parms, a_strContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::NewProp_a_strFileName = { "a_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventSaveToFile_Parms, a_strFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::NewProp_a_strContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::NewProp_a_strFileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UCustomFileReadingLibrary" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
		{ "ToolTip", "TODO:REfactor it so that it can be used everywhere" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomFileReadingLibrary, nullptr, "SaveToFile", sizeof(CustomFileReadingLibrary_eventSaveToFile_Parms), Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics
	{
		struct CustomFileReadingLibrary_eventset_rotation_at_spline_point_Parms
		{
			USplineComponent* target;
			int32 point_index;
			FRotator rotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_point_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_point_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventset_rotation_at_spline_point_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_rotation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_point_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_point_index = { "point_index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventset_rotation_at_spline_point_Parms, point_index), METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_point_index_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_point_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomFileReadingLibrary_eventset_rotation_at_spline_point_Parms, target), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_target_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_point_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::Function_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
		{ "ToolTip", "Sets the rotation on a spline point Local rotation only.//make the function usable in blueprints. BlueprintPure doesn't require exec; BlueprintCallable does." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomFileReadingLibrary, nullptr, "set_rotation_at_spline_point", sizeof(CustomFileReadingLibrary_eventset_rotation_at_spline_point_Parms), Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomFileReadingLibrary_NoRegister()
	{
		return UCustomFileReadingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCustomFileReadingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomFileReadingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomFileReadingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomFileReadingLibrary_GetAds, "GetAds" }, // 157440670
		{ &Z_Construct_UFunction_UCustomFileReadingLibrary_GetAdXMLFileLocation, "GetAdXMLFileLocation" }, // 2947963224
		{ &Z_Construct_UFunction_UCustomFileReadingLibrary_GetFiles, "GetFiles" }, // 2950134767
		{ &Z_Construct_UFunction_UCustomFileReadingLibrary_GetFilesCount, "GetFilesCount" }, // 1326908081
		{ &Z_Construct_UFunction_UCustomFileReadingLibrary_GetRandomMediaFile, "GetRandomMediaFile" }, // 584811975
		{ &Z_Construct_UFunction_UCustomFileReadingLibrary_GetXMLInfo, "GetXMLInfo" }, // 3056018951
		{ &Z_Construct_UFunction_UCustomFileReadingLibrary_Load_XML_File, "Load_XML_File" }, // 1536926790
		{ &Z_Construct_UFunction_UCustomFileReadingLibrary_SaveStringToFile, "SaveStringToFile" }, // 2718334697
		{ &Z_Construct_UFunction_UCustomFileReadingLibrary_SaveToFile, "SaveToFile" }, // 1885881234
		{ &Z_Construct_UFunction_UCustomFileReadingLibrary_set_rotation_at_spline_point, "set_rotation_at_spline_point" }, // 1509854340
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomFileReadingLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomFileReadingLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CustomFileReadingLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomFileReadingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomFileReadingLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomFileReadingLibrary_Statics::ClassParams = {
		&UCustomFileReadingLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomFileReadingLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCustomFileReadingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomFileReadingLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomFileReadingLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomFileReadingLibrary, 3347095177);
	template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<UCustomFileReadingLibrary>()
	{
		return UCustomFileReadingLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomFileReadingLibrary(Z_Construct_UClass_UCustomFileReadingLibrary, &UCustomFileReadingLibrary::StaticClass, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("UCustomFileReadingLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomFileReadingLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunnerSquad_WePlayVR/WePlayVR_GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWePlayVR_GameInstance() {}
// Cross Module References
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_UWePlayVR_GameInstance_NoRegister();
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_UWePlayVR_GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_OnEndCommandReceived();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_OnScreenShotCommandReceived();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_OnStartCommandReceived();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendEndCommandResponse();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendLanguageChangeResponse();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartCommandResponse();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendStopRumbleCommand();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages();
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_USettingsData_NoRegister();
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_UOpsManager_NoRegister();
// End Cross Module References
	static FName NAME_UWePlayVR_GameInstance_OnEndCommandReceived = FName(TEXT("OnEndCommandReceived"));
	void UWePlayVR_GameInstance::OnEndCommandReceived()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWePlayVR_GameInstance_OnEndCommandReceived),NULL);
	}
	static FName NAME_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived = FName(TEXT("OnLanguageChangeCommandReceived"));
	void UWePlayVR_GameInstance::OnLanguageChangeCommandReceived(const FString& a_strLanguage)
	{
		WePlayVR_GameInstance_eventOnLanguageChangeCommandReceived_Parms Parms;
		Parms.a_strLanguage=a_strLanguage;
		ProcessEvent(FindFunctionChecked(NAME_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived),&Parms);
	}
	static FName NAME_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand = FName(TEXT("OnLanguageDetailsGetCommand"));
	TArray<FString> UWePlayVR_GameInstance::OnLanguageDetailsGetCommand()
	{
		WePlayVR_GameInstance_eventOnLanguageDetailsGetCommand_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UWePlayVR_GameInstance_OnScreenShotCommandReceived = FName(TEXT("OnScreenShotCommandReceived"));
	void UWePlayVR_GameInstance::OnScreenShotCommandReceived()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWePlayVR_GameInstance_OnScreenShotCommandReceived),NULL);
	}
	static FName NAME_UWePlayVR_GameInstance_OnStartCommandReceived = FName(TEXT("OnStartCommandReceived"));
	void UWePlayVR_GameInstance::OnStartCommandReceived()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWePlayVR_GameInstance_OnStartCommandReceived),NULL);
	}
	void UWePlayVR_GameInstance::StaticRegisterNativesUWePlayVR_GameInstance()
	{
		UClass* Class = UWePlayVR_GameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectName", &UWePlayVR_GameInstance::execGetProjectName },
			{ "GetProjectVersion", &UWePlayVR_GameInstance::execGetProjectVersion },
			{ "SendEndCommandResponse", &UWePlayVR_GameInstance::execSendEndCommandResponse },
			{ "SendLanguageChangeResponse", &UWePlayVR_GameInstance::execSendLanguageChangeResponse },
			{ "SendScreenshotResponse", &UWePlayVR_GameInstance::execSendScreenshotResponse },
			{ "SendStartCommandResponse", &UWePlayVR_GameInstance::execSendStartCommandResponse },
			{ "SendStartRumbleCommand", &UWePlayVR_GameInstance::execSendStartRumbleCommand },
			{ "SendStopRumbleCommand", &UWePlayVR_GameInstance::execSendStopRumbleCommand },
			{ "SetSupportedLanguages", &UWePlayVR_GameInstance::execSetSupportedLanguages },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics
	{
		struct WePlayVR_GameInstance_eventGetProjectName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WePlayVR_GameInstance_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGameInstance" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "GetProjectName", sizeof(WePlayVR_GameInstance_eventGetProjectName_Parms), Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics
	{
		struct WePlayVR_GameInstance_eventGetProjectVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WePlayVR_GameInstance_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGameInstance" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "GetProjectVersion", sizeof(WePlayVR_GameInstance_eventGetProjectVersion_Parms), Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_OnEndCommandReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_OnEndCommandReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommandEvents" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_OnEndCommandReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "OnEndCommandReceived", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_OnEndCommandReceived_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_OnEndCommandReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_OnEndCommandReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_OnEndCommandReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_strLanguage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_a_strLanguage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::NewProp_a_strLanguage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::NewProp_a_strLanguage = { "a_strLanguage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WePlayVR_GameInstance_eventOnLanguageChangeCommandReceived_Parms, a_strLanguage), METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::NewProp_a_strLanguage_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::NewProp_a_strLanguage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::NewProp_a_strLanguage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommandEvents" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "OnLanguageChangeCommandReceived", sizeof(WePlayVR_GameInstance_eventOnLanguageChangeCommandReceived_Parms), Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WePlayVR_GameInstance_eventOnLanguageDetailsGetCommand_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommandEvents" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "OnLanguageDetailsGetCommand", sizeof(WePlayVR_GameInstance_eventOnLanguageDetailsGetCommand_Parms), Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_OnScreenShotCommandReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_OnScreenShotCommandReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommandEvents" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_OnScreenShotCommandReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "OnScreenShotCommandReceived", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_OnScreenShotCommandReceived_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_OnScreenShotCommandReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_OnScreenShotCommandReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_OnScreenShotCommandReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_OnStartCommandReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_OnStartCommandReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommandEvents" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_OnStartCommandReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "OnStartCommandReceived", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_OnStartCommandReceived_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_OnStartCommandReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_OnStartCommandReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_OnStartCommandReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_SendEndCommandResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_SendEndCommandResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendEndCommandResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "SendEndCommandResponse", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_SendEndCommandResponse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_SendEndCommandResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendEndCommandResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_SendEndCommandResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_SendLanguageChangeResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_SendLanguageChangeResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
		{ "ToolTip", "PLEASE NOTE SAME FUNC PRESENT IN OPS HENCE UNREAL RELATED HEADACHES..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendLanguageChangeResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "SendLanguageChangeResponse", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_SendLanguageChangeResponse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_SendLanguageChangeResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendLanguageChangeResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_SendLanguageChangeResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics
	{
		struct WePlayVR_GameInstance_eventSendScreenshotResponse_Parms
		{
			TArray<uint8> a_arrImageData;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_a_arrImageData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_a_arrImageData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::NewProp_a_arrImageData = { "a_arrImageData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WePlayVR_GameInstance_eventSendScreenshotResponse_Parms, a_arrImageData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::NewProp_a_arrImageData_Inner = { "a_arrImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::NewProp_a_arrImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::NewProp_a_arrImageData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "SendScreenshotResponse", sizeof(WePlayVR_GameInstance_eventSendScreenshotResponse_Parms), Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartCommandResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartCommandResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Commands\")\n               void OnCommandReceived(FString a_strCommandData);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartCommandResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "SendStartCommandResponse", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartCommandResponse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartCommandResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartCommandResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartCommandResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics
	{
		struct WePlayVR_GameInstance_eventSendStartRumbleCommand_Parms
		{
			FString a_strClipName;
			int32 a_nVolume;
			bool a_bPlayOnce;
		};
		static void NewProp_a_bPlayOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_a_bPlayOnce;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_a_nVolume;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_a_strClipName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::NewProp_a_bPlayOnce_SetBit(void* Obj)
	{
		((WePlayVR_GameInstance_eventSendStartRumbleCommand_Parms*)Obj)->a_bPlayOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::NewProp_a_bPlayOnce = { "a_bPlayOnce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WePlayVR_GameInstance_eventSendStartRumbleCommand_Parms), &Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::NewProp_a_bPlayOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::NewProp_a_nVolume = { "a_nVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WePlayVR_GameInstance_eventSendStartRumbleCommand_Parms, a_nVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::NewProp_a_strClipName = { "a_strClipName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WePlayVR_GameInstance_eventSendStartRumbleCommand_Parms, a_strClipName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::NewProp_a_bPlayOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::NewProp_a_nVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::NewProp_a_strClipName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "SendStartRumbleCommand", sizeof(WePlayVR_GameInstance_eventSendStartRumbleCommand_Parms), Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_SendStopRumbleCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_SendStopRumbleCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_SendStopRumbleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "SendStopRumbleCommand", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_SendStopRumbleCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_SendStopRumbleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SendStopRumbleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_SendStopRumbleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics
	{
		struct WePlayVR_GameInstance_eventSetSupportedLanguages_Parms
		{
			TArray<FString> a_arrLanguageNames;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_a_arrLanguageNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_a_arrLanguageNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::NewProp_a_arrLanguageNames = { "a_arrLanguageNames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WePlayVR_GameInstance_eventSetSupportedLanguages_Parms, a_arrLanguageNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::NewProp_a_arrLanguageNames_Inner = { "a_arrLanguageNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::NewProp_a_arrLanguageNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::NewProp_a_arrLanguageNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWePlayVR_GameInstance, nullptr, "SetSupportedLanguages", sizeof(WePlayVR_GameInstance_eventSetSupportedLanguages_Parms), Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWePlayVR_GameInstance_NoRegister()
	{
		return UWePlayVR_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWePlayVR_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_arystrCommandline_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_arystrCommandline;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_arystrCommandline_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strOPSIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strOPSIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_refSettingsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_refSettingsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_refOpsManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_refOpsManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWePlayVR_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWePlayVR_GameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectName, "GetProjectName" }, // 2132533486
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_GetProjectVersion, "GetProjectVersion" }, // 2125303557
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_OnEndCommandReceived, "OnEndCommandReceived" }, // 3985929265
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageChangeCommandReceived, "OnLanguageChangeCommandReceived" }, // 61738297
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_OnLanguageDetailsGetCommand, "OnLanguageDetailsGetCommand" }, // 1360719844
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_OnScreenShotCommandReceived, "OnScreenShotCommandReceived" }, // 695021480
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_OnStartCommandReceived, "OnStartCommandReceived" }, // 1261319689
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_SendEndCommandResponse, "SendEndCommandResponse" }, // 4129808075
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_SendLanguageChangeResponse, "SendLanguageChangeResponse" }, // 1941558536
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_SendScreenshotResponse, "SendScreenshotResponse" }, // 155755533
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartCommandResponse, "SendStartCommandResponse" }, // 66523464
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_SendStartRumbleCommand, "SendStartRumbleCommand" }, // 3163796962
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_SendStopRumbleCommand, "SendStopRumbleCommand" }, // 122441423
		{ &Z_Construct_UFunction_UWePlayVR_GameInstance_SetSupportedLanguages, "SetSupportedLanguages" }, // 817154689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWePlayVR_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WePlayVR_GameInstance.h" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_arystrCommandline_MetaData[] = {
		{ "Category", "OPS Command Data" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_arystrCommandline = { "m_arystrCommandline", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWePlayVR_GameInstance, m_arystrCommandline), METADATA_PARAMS(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_arystrCommandline_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_arystrCommandline_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_arystrCommandline_Inner = { "m_arystrCommandline", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_strOPSIP_MetaData[] = {
		{ "Category", "OPS Command Data" },
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
		{ "ToolTip", "OPS IP and command line data" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_strOPSIP = { "m_strOPSIP", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWePlayVR_GameInstance, m_strOPSIP), METADATA_PARAMS(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_strOPSIP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_strOPSIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_refSettingsData_MetaData[] = {
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_refSettingsData = { "m_refSettingsData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWePlayVR_GameInstance, m_refSettingsData), Z_Construct_UClass_USettingsData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_refSettingsData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_refSettingsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_refOpsManager_MetaData[] = {
		{ "ModuleRelativePath", "WePlayVR_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_refOpsManager = { "m_refOpsManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWePlayVR_GameInstance, m_refOpsManager), Z_Construct_UClass_UOpsManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_refOpsManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_refOpsManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWePlayVR_GameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_arystrCommandline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_arystrCommandline_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_strOPSIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_refSettingsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWePlayVR_GameInstance_Statics::NewProp_m_refOpsManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWePlayVR_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWePlayVR_GameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWePlayVR_GameInstance_Statics::ClassParams = {
		&UWePlayVR_GameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWePlayVR_GameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWePlayVR_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWePlayVR_GameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWePlayVR_GameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWePlayVR_GameInstance, 3082524641);
	template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<UWePlayVR_GameInstance>()
	{
		return UWePlayVR_GameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWePlayVR_GameInstance(Z_Construct_UClass_UWePlayVR_GameInstance, &UWePlayVR_GameInstance::StaticClass, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("UWePlayVR_GameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWePlayVR_GameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

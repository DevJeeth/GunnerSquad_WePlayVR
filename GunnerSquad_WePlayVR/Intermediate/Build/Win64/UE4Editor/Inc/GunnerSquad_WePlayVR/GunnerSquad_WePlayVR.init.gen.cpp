// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunnerSquad_WePlayVR_init() {}
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UDelegateFunction_GunnerSquad_WePlayVR_OnStartCommandReceived__DelegateSignature();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UDelegateFunction_GunnerSquad_WePlayVR_OnStartResponse__DelegateSignature();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UDelegateFunction_GunnerSquad_WePlayVR_OnEndCommandReceived__DelegateSignature();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UDelegateFunction_GunnerSquad_WePlayVR_OnEndResponse__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GunnerSquad_WePlayVR()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GunnerSquad_WePlayVR_OnStartCommandReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GunnerSquad_WePlayVR_OnStartResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GunnerSquad_WePlayVR_OnEndCommandReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GunnerSquad_WePlayVR_OnEndResponse__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/GunnerSquad_WePlayVR",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x18D1B6FA,
				0x9C8C9434,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

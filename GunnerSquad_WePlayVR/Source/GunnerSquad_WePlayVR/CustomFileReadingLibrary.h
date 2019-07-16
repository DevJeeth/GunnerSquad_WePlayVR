// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Core/Public/HAL/FileManager.h"
#include "Runtime/Core/Public/Misc/Paths.h"
//#include "Runtime/XmlParser/Public/XmlParser.h" 
#include "Components/SplineComponent.h"
#include "XmlParser.h" 
#include "Runtime/Core/Public/Math/UnrealMathUtility.h" 
#include "CustomFileReadingLibrary.generated.h"

#define FilePathIndex 0
#define FilePathDurationIndex FilePathIndex + 1


/**
 * 
 */
UCLASS(Blueprintable)
class VR_FROM_BLANK_API UCustomFileReadingLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	
public:
	/** Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur. */
	UFUNCTION(BlueprintPure, Category = "UCustomFileReadingLibrary | File IO")
		static bool GetFiles(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);

	/** Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur. */
	UFUNCTION(BlueprintPure, Category = "UCustomFileReadingLibrary|File IO Count")
		static int GetFilesCount(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);


	/** Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur. */
	UFUNCTION(BlueprintPure, Category = "UCustomFileReadingLibrary | XML")
		static bool Load_XML_File(FString RootFolderFullPath);


	/** Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur. */
	UFUNCTION(BlueprintPure, Category = "UCustomFileReadingLibrary | Media")
		static void GetRandomMediaFile(FString RootFolderFullPath,FString& mediaFilePath, float& duration);

	/** Obtains the EXACT AD LOCATION!!!!*/
	UFUNCTION(BlueprintPure, Category = "UCustomFileReadingLibrary | Media")
		static FString GetAdXMLFileLocation(FString & a_strFilePath, FString &a_strXMLName);



	/** Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur. */
	UFUNCTION(BlueprintCallable, Category = "UCustomFileReadingLibrary | Media")
		static void GetAds(TArray<FString>& InGameAds, bool& isInGameAdsStreamingRandom, TArray<FString>& SessionAds, bool& isSessionAdsStreamingRandom);



	/** Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur. */
	UFUNCTION(BlueprintPure, Category = "UCustomFileReadingLibrary | Media")
		static void GetXMLInfo(FString &basePath,FString &fileName);

	/* Sets the rotation on a spline point Local rotation only.*/
	UFUNCTION(BlueprintCallable, Category = "Splines") //make the function usable in blueprints. BlueprintPure doesn't require exec; BlueprintCallable does.
		static void set_rotation_at_spline_point(USplineComponent* target, const int32 point_index, const FRotator rotation); //define inputs and outputs. Const for inputs, and & for outputs.

	/*Use this func to write string data to a file,FPS ONLY!!!!*/
	//TODO:REfactor it so that it can be used everywhere
	UFUNCTION(BlueprintCallable, Category = "UCustomFileReadingLibrary")
		static bool SaveToFile(FString a_strFileName, FString a_strContent);

	/*Use this func to write string data to a file!!!!*/
	//File Name is the enire location to where the file is to be created
	UFUNCTION(BlueprintCallable, Category = "UCustomFileReadingLibrary")
		static bool SaveStringToFile(FString a_strFileName, FString a_strContent);



	static void PrintString(FString val);
	static void PrintRed(FString val);
	static FString I(int val);
	static FString F(float val);
	static void PrintInt(FString val, int iVal);
	static void PrintFloat(FString val, float fVal);
	static void PrintVector(FString val, FVector fVec);

	static FString GetFPSLogFolderName();
	
};

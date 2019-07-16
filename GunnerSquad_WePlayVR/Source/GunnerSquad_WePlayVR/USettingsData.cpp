// Fill out your copyright notice in the Description page of Project Settings.

#include "SettingsData.h"
#include "Json.h"
#include "CustomFileReadingLibrary.h"
#include "Engine.h"


USettingsData::USettingsData(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	UCustomFileReadingLibrary::PrintString("USettingsData : Constructor");
	SettingsFilePath = FPaths::Combine(*FPaths::ProjectContentDir(), *FString("Assets/Settings/Settings.json"));

	if (!FPaths::FileExists(*SettingsFilePath))
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "Could not find the settings file in the file location; Default values loaded");
		return;
	}

	UCustomFileReadingLibrary::PrintString("USettingsData : Constructor 1");


	FString strFileContents;
	FFileHelper::LoadFileToString(strFileContents, *SettingsFilePath, FFileHelper::EHashOptions::EnableVerify);

	if (strFileContents.IsEmpty())
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "Could not load the settings file; Default values loaded");
		return;
	}
	UCustomFileReadingLibrary::PrintString("USettingsData : Constructor 2");

	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(strFileContents);
	if (!FJsonSerializer::Deserialize(JsonReader, JsonParsed))
	{
		GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Red, (TEXT("CPP: Could not parse JSON in Start Command %s"), strFileContents));
		return;
	}
	UCustomFileReadingLibrary::PrintString("USettingsData : Constructor 3");

	//set values from the file
	OPS_Enabled = JsonParsed->GetBoolField("OPS_Enabled");
	Streaming_Enabled = JsonParsed->GetBoolField("Streaming_Enabled");;
	Physical_Props_Enabled = JsonParsed->GetBoolField("Physical_Props_Enabled");;
	TP_Cast_Enabled = JsonParsed->GetBoolField("TP_Cast_Enabled");

	OPS_IP = JsonParsed->GetStringField("OPS_IP");
	xmlBasePath = JsonParsed->GetStringField("AdsInformationXmlBaseAddress");
	xmlFileName = JsonParsed->GetStringField("AdsInformationXmlName");
	bIsTesting = JsonParsed->GetBoolField("TESTING_BUILD");
	bDebugDrone = JsonParsed->GetBoolField("DebugDrone");
	bVisualizeGoalSwitchers = JsonParsed->GetBoolField("VisualizeGoalSwitchers");

	bTreatAsSpectator = JsonParsed->GetBoolField("TreatAsSpectator");;
	ScreenCapResX = JsonParsed->GetNumberField("ScreenCapResX");;
	ScreenCapResY = JsonParsed->GetNumberField("ScreenCapResY");;
	ScreenCapBaseAddress = JsonParsed->GetStringField("ScreenCapBaseAddress");
	FrequencyForCapture = JsonParsed->GetNumberField("FrequencyForCapture");

	bDataLoaded = true;
	UCustomFileReadingLibrary::PrintString("USettingsData : Constructor 4");

}


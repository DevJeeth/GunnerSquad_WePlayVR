// Fill out your copyright notice in the Description page of Project Settings.
#include "WePlayVR_GameInstance.h"
#include "Engine.h"
#include "Json.h"


UWePlayVR_GameInstance::UWePlayVR_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
}

#pragma region VirtualMethods

void UWePlayVR_GameInstance::Init()
{
	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] Init "));
}

void UWePlayVR_GameInstance::StartGameInstance()
{
	UE_LOG(LogTemp, Error, TEXT("[WePlayVR_GameInstance]STARTING WEPLAYVR GAME INSTANCE ,\npath = %s"), *GetPathName());
	UEngine* const Engine = GetEngine();
	LanguageDetailsCommand();
}

void UWePlayVR_GameInstance::Shutdown()
{

}

void UWePlayVR_GameInstance::BeginDestroy()
{

}
#pragma endregion

void UWePlayVR_GameInstance::InitializeOPS()
{
	m_refOpsManager = NewObject<UOpsManager>(this);
	if (m_refOpsManager == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Could not create the OPS instance"));
		return;
	}

	if (!m_refOpsManager->ImportDLL("AIS_WePlayVR", "AIS_OPS_Communicator.dll"))
	{
		UE_LOG(LogTemp, Error, TEXT("Could not import the OPS DLL"));
		return;
	}

	if (!m_refOpsManager->ImportDLLMethods())
		return;
}

#pragma region Ops_Blueprint_Intermediate_Methods
void UWePlayVR_GameInstance::LanguageDetailsCommand()
{
	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] Start Command Received, calling StartCommand Blueprint event "));
	TArray<FString> m_arrLanguageSupported  = OnLanguageDetailsGetCommand();

	if (m_arrLanguageSupported.Num() == 0)
	{
		//This is to be done if event didnt send any data
		UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] Language Details Command, supported language is empty. Setting English as default."));
		TArray<FString> m_arrLanguageSupported = { "English" };
	}
	SetSupportedLanguages(m_arrLanguageSupported);
}

void UWePlayVR_GameInstance::StartCommandReceived()
{
	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] Start Command Received, calling StartCommand Blueprint event "));
	OnStartCommandReceived();
}

void UWePlayVR_GameInstance::EndCommandReceived()
{
	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] End Command Received, calling EndCommand Blueprint event "));
	OnEndCommandReceived();
}

void UWePlayVR_GameInstance::LanguageChangeCommandReceived(FString a_strNewLanguage)
{
	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] Language Change Command Received, calling EndCommand Blueprint event: %s ", a_strNewLanguage));
	OnLanguageChangeCommandReceived(a_strNewLanguage);
}

void UWePlayVR_GameInstance::ScreenshotCommandReceived()
{
	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] Screenshot Command Received, calling screenshot Blueprint event "));
	OnScreenShotCommandReceived();
}

void UWePlayVR_GameInstance::SendVRDeviceStatusUpdate()
{
	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] VR Device Update Command Received, calling VR Device Status Blueprint event "));
}
#pragma endregion

#pragma region Ops_Blueprint_Events 
void UWePlayVR_GameInstance::OnStartCommandReceived()
{
	//The game needs to handle the from here Start Command
}

void UWePlayVR_GameInstance::OnEndCommandReceived()
{
	//The game needs to handle the Stop Command here
}

TArray<FString> UWePlayVR_GameInstance::OnLanguageDetailsGetCommand()
{
	//Needs to return an array of all the supported language
	TArray<FString> m_arrLanguageSupported;
	return m_arrLanguageSupported;
}

void UWePlayVR_GameInstance::OnLanguageChangeCommandReceived(const FString& a_strLanguageChange)
{
	//Set the language when this event is called
}

void UWePlayVR_GameInstance::OnScreenShotCommandReceived()
{
	//Handle screenshots here 
}
#pragma endregion

#pragma region Ops_Wrapper_Method_Calls
void UWePlayVR_GameInstance::SetSupportedLanguages(TArray<FString> a_arrLanguageNames)
{
	m_refOpsManager
}
#pragma endregion








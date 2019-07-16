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

	//register to logs, all DLL logs will also be handled here
	m_refOpsManager->RegisterForLogs();

	//TODO: Getting OPS IP from File or other sources
	FString m_strOPSIP = "192.168.1.107";
	m_refOpsManager->SetIPForOPS(m_strOPSIP);
	//Creating Ops Client 
	m_refOpsManager->CreateOPSClient();
	m_refOpsManager->RegisterForCommands();
	m_refOpsManager->Connect();
	m_refOpsManager->SendProfileToOPS();

	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] Connection has been extablished and profile has been sent"));
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

void UWePlayVR_GameInstance::SendStartRumbleCommand(FString a_strClipName, int a_nVolume, bool a_bPlayOnce)
{
	if (m_refOpsManager == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("[WePlayVR_GameInstance] SendStartRumble not called, reference to OPS lost"));
		return;
	}

	m_refOpsManager->SendStartRumble(a_strClipName, a_nVolume, a_bPlayOnce); 
}

void UWePlayVR_GameInstance::SendStopRumbleCommand()
{
	if (m_refOpsManager == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("[WePlayVR_GameInstance] SendStopRumble not called, reference to OPS lost"));
		return;
	}

	m_refOpsManager->SendStopRumble();
}


void UWePlayVR_GameInstance::SendLanguageChangeResponse()
{
	if (m_refOpsManager == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("[WePlayVR_GameInstance] SendLanguageChangeResponse not called, reference to OPS lost"));
		return;
	}

	m_refOpsManager->SendLanguageChangeResponse();
}

void UWePlayVR_GameInstance::SendScreenshotResponse(TArray<uint8> a_arrImageData)
{
	if (m_refOpsManager == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("[WePlayVR_GameInstance] SendLanguageChangeResponse not called, reference to OPS lost"));
		return;
	}

	m_refOpsManager->SendScreenshot(a_arrImageData);
}

FString UWePlayVR_GameInstance::GetProjectName()
{
	FString ProjectName;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectName"),
		ProjectName,
		GGameIni
	);
	return ProjectName;
}

FString UWePlayVR_GameInstance::GetProjectVersion()
{
	FString ProjectVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		ProjectVersion,
		GGameIni
	);
	return ProjectVersion;
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
	if (m_refOpsManager == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("[WePlayVR_GameInstance] SetSupportLanguages not called, reference to OPS lost"));
		return;
	}

	m_refOpsManager->SetSupportedLanguages(a_arrLanguageNames, a_arrLanguageNames.Num());
}
#pragma endregion


#pragma region Responses_To_Ops

void UWePlayVR_GameInstance::SendStartCommandResponse()
{
	if (m_refOpsManager == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("[WePlayVR_GameInstance] SendStartResponseToOPS not called, reference to OPS lost"));
		return;
	}

	m_refOpsManager->SendStartResponseToOPS();
}


void UWePlayVR_GameInstance::SendEndCommandResponse()
{
	if (m_refOpsManager == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("[WePlayVR_GameInstance] SendEndResponseToOPS not called, reference to OPS lost"));
		return;
	}

	m_refOpsManager->SendEndResponseToOPS();
}
#pragma endregion






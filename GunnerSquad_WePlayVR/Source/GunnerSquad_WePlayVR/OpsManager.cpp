// Fill out your copyright notice in the Description page of Project Settings.

#include "OPSManager.h"
#include "Paths.h"
#include "Engine.h"
#include <vector> 
#include "Base64.h"
#include "WePlayVR_GameInstance.h"


UOpsManager::UOpsManager()
{

}

UOpsManager::~UOpsManager()
{

}


void UOpsManager:: WelcomeMessage()
{
	UE_LOG(LogTemp, Warning, TEXT("Welcome to WePlayVR"));
}


//Gets the DLL for the specified path of a specific name
bool UOpsManager::ImportDLL(FString a_strFolderName, FString a_strDLLName)
{
	FString filePath = *FPaths::GamePluginsDir() + a_strFolderName + "/" + a_strDLLName;

	if (FPaths::FileExists(filePath))
	{
		v_dllHandle = FPlatformProcess::GetDllHandle(*filePath); // Retrieve the DLL.
		if (v_dllHandle != NULL)
		{
			return true;
		}
	}
	UE_LOG(LogTemp, Log, TEXT("OPS_DLL: Loading failed....at Location:%s"), *filePath);

	return false;	// Return an error.
}


//Registers a delegate for logs
bool UOpsManager::ImportMethodRegisterForLogs()
{
	if (v_dllHandle != NULL)

	{
		m_funcRegisterForLogs = NULL;
		FString procName = "RegisterForLogs";	// Needs to be the exact name of the DLL method.
		m_funcRegisterForLogs = (__RegisterForLogs)FPlatformProcess::GetDllExport(v_dllHandle, *procName);

		if (m_funcRegisterForLogs != NULL)
		{
			return true;
		}
	}

	return false;  //Return an error
}


//Gets DLL function to Set the OPS IP to which to connect
bool UOpsManager::ImportMethodSetOPSIP()
{
	if (v_dllHandle != NULL)
	{
		m_funcSetOPSIP = NULL;
		FString procName = "SetOPSIP";	// Needs to be the exact name of the DLL method.
		m_funcSetOPSIP = (__SetOPSIP)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSetOPSIP != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

//Gets DLL function to set CreateOPSClient Information
bool UOpsManager::ImportMethodCreateOPSClientMethod()
{
	if (v_dllHandle != NULL)
	{
		m_funcCreateOPSClient = NULL;
		FString procName = "CreateOPSClient";	// Needs to be the exact name of the DLL method.
		m_funcCreateOPSClient = (__CreateOPSClient)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcCreateOPSClient != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

//Get DLL function to SetGameInformation (Gametime, Min Player, Max Player, InputNameType)
bool UOpsManager::ImportMethodSetGameInformation()
{
	if (v_dllHandle != NULL)
	{
		m_funcSetGameInformation = NULL;
		FString procName = "SetGameInformation";	// Needs to be the exact name of the DLL method.
		m_funcSetGameInformation = (__SetGameInformation)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSetGameInformation != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

//Get DLL function to set the languages supported by game 
bool UOpsManager::ImportMethodSetSupportedLanguages()
{
	if (v_dllHandle != NULL)
	{
		m_funcSetSupportedLanguages = NULL;
		FString procName = "SetSupportedLanguages";	// Needs to be the exact name of the DLL method.
		m_funcSetSupportedLanguages = (__SetSupportedLanguages)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSetSupportedLanguages != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

//Registers a delegate for Commands
bool UOpsManager::ImportMethodRegisterForCommands()
{
	if (v_dllHandle != NULL)
	{
		m_funcRegisterForCommands = NULL;
		FString procName = "RegisterForCommands";	// Needs to be the exact name of the DLL method.
		m_funcRegisterForCommands = (__RegisterForCommands)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcRegisterForCommands != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}


//Get function to clear connected devices list
bool UOpsManager::ImportMethodClearConnectedDevicesData()
{
	if (v_dllHandle != NULL)
	{
		m_funcCreateOPSClient = NULL;
		FString procName = "CreateOPSClient";	// Needs to be the exact name of the DLL method.
		m_funcCreateOPSClient = (__CreateOPSClient)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcCreateOPSClient != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}


//Get DLL function that adds the connected devices to the list
bool UOpsManager::ImportMethodAddConnecedDeviceToProfile()
{
	if (v_dllHandle != NULL)
	{
		m_funcAddConnectedDeviceToProfile = NULL;
		FString procName = "AddConnecedDeviceToProfile";	// Needs to be the exact name of the DLL method.
		m_funcAddConnectedDeviceToProfile = (__AddConnecedDeviceToProfile)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcAddConnectedDeviceToProfile != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}


//Get DLL function to send the updated lighthouse status
bool UOpsManager::ImportMethodSendLighthouseStatus()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendLighthouseStatus = NULL;
		FString procName = "SendLighthouseStatus";	// Needs to be the exact name of the DLL method.
		m_funcSendLighthouseStatus = (__SendLighthouseStatus)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendLighthouseStatus != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

//Get DLL function that adds props details to profile
bool UOpsManager::ImportMethodAddPropToProfile()
{
	if (v_dllHandle != NULL)
	{
		m_funcAddPropToProfile = NULL;
		FString procName = "AddPropToProfile";	// Needs to be the exact name of the DLL method.
		m_funcAddPropToProfile = (__AddPropToProfile)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcAddPropToProfile != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}


//Get DLL function that clears the Props data from list
bool UOpsManager::ImportMethodClearPropsData()
{
	if (v_dllHandle != NULL)
	{
		m_funcClearPropsData = NULL;
		FString procName = "ClearPropsData";	// Needs to be the exact name of the DLL method.
		m_funcClearPropsData = (__ClearPropsData)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcClearPropsData != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

//Get DLL function to send profile containing all required details by the OPS
bool UOpsManager::ImportMethodSendProfile()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendProfile = NULL;
		FString procName = "SendProfile";	// Needs to be the exact name of the DLL method.
		m_funcSendProfile = (__SendProfile)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendProfile != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

//Get DLL function that connects to OPS
bool UOpsManager::ImportMethodConnect()
{
	if (v_dllHandle != NULL)
	{
		m_funcConnect = NULL;
		FString procName = "Connect";	// Needs to be the exact name of the DLL method.
		m_funcConnect = (__Connect)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcConnect != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

//Get DLL function that Sends the Session ID to OPS, To be called only in server
bool UOpsManager::ImportMethodSetSessionID()
{
	if (v_dllHandle != NULL)
	{
		m_funcSetSessionID = NULL;
		FString procName = "SetSessionID";	// Needs to be the exact name of the DLL method.
		m_funcSetSessionID = (__SetSessionID)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSetSessionID != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendOPSConfigResponse()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendOPSConfigResponse = NULL;
		FString procName = "SendOPS_ConfigResponse";	// Needs to be the exact name of the DLL method.
		m_funcSendOPSConfigResponse = (__SendOPS_ConfigResponse)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendOPSConfigResponse != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendInitResponse()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendInitResponse = NULL;
		FString procName = "SendInitResponse";	// Needs to be the exact name of the DLL method.
		m_funcSendInitResponse = (__SendInitResponse)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendInitResponse != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendStartResponse()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendStartResponse = NULL;
		FString procName = "SendStartResponse";	// Needs to be the exact name of the DLL method.
		m_funcSendStartResponse = (__SendStartResponse)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendStartResponse != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendEndResponse()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendEndResponse = NULL;
		FString procName = "SendEndResponse";	// Needs to be the exact name of the DLL method.
		m_funcSendEndResponse = (__SendEndResponse)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendEndResponse != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendLanguageChangeResponse()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendLanguageChangeResponse = NULL;
		FString procName = "SendLanguageChangeResponse";	// Needs to be the exact name of the DLL method.
		m_funcSendLanguageChangeResponse = (__SendLanguageChangeResponse)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendLanguageChangeResponse != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendScreenshot()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendScreenshot = NULL;
		FString procName = "SendScreenshot";	// Needs to be the exact name of the DLL method.
		m_funcSendScreenshot = (__SendScreenshot)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendScreenshot != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendClearDataResponse()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendClearDataResponse = NULL;
		FString procName = "SendClearDataResponse";	// Needs to be the exact name of the DLL method.
		m_funcSendClearDataResponse = (__SendClearDataResponse)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendClearDataResponse != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendServerReady()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendServerReadyResponse = NULL;
		FString procName = "SendServerReady";	// Needs to be the exact name of the DLL method.
		m_funcSendServerReadyResponse = (__SendServerReady)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendServerReadyResponse != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendServerTimeout()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendServerTimeout = NULL;
		FString procName = "SendServerTimeout";	// Needs to be the exact name of the DLL method.
		m_funcSendServerTimeout = (__SendServerTimeout)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendServerTimeout != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendStartRumble()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendStartRumble = NULL;
		FString procName = "SendStartRumble";	// Needs to be the exact name of the DLL method.
		m_funcSendStartRumble = (__SendStartRumble)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendStartRumble != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendStopRumble()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendStopRumble = NULL;
		FString procName = "SendStopRumble";	// Needs to be the exact name of the DLL method.
		m_funcSendStopRumble = (__SendStopRumble)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendStopRumble != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodCloseAndCleanUpOPS()
{
	if (v_dllHandle != NULL)
	{
		m_funcCloseAndCleanOPSClient = NULL;
		FString procName = "CloseAndCleanUpOPSClient";	// Needs to be the exact name of the DLL method.
		m_funcCloseAndCleanOPSClient = (__CloseAndCleanUpOPSClient)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcCloseAndCleanOPSClient != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportMethodSendConnectedDevicesUpdate()
{
	if (v_dllHandle != NULL)
	{
		m_funcSendConnectedDevicesUpdate = NULL;
		FString procName = "SendConnectedDevicesUpdate";	// Needs to be the exact name of the DLL method.
		m_funcSendConnectedDevicesUpdate = (__SendConnectedDevicesUpdate)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_funcSendConnectedDevicesUpdate != NULL)
		{
			return true;
		}
	}
	return false;	// Return an error.
}

bool UOpsManager::ImportDLLMethods()
{

	if (!ImportMethodCreateOPSClientMethod())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodCreateOPSClientMethod FAILED!"));
		return false;
	}

	if (!ImportMethodRegisterForLogs())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodRegisterForLogs FAILED!"));
		return false;
	}

	if (!ImportMethodRegisterForCommands())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodRegisterForCommands FAILED!"));
		return false;
	}

	if (!ImportMethodSetOPSIP())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodSetOPSIP FAILED!"));
		return false;
	}

	if (!ImportMethodCloseAndCleanUpOPS())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodCloseAndCleanUpOPS FAILED!"));
		return false;
	}

	if (!ImportMethodSendProfile())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodSendProfile FAILED!"));
		return false;
	}

	if (!ImportMethodSendInitResponse())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodSendInitResponse FAILED!"));
		return false;
	}

	if (!ImportMethodSendOPSConfigResponse())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodSendOPSConfigResponse FAILED!"));
		return false;
	}

	if (!ImportMethodSendStartResponse())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodStartResponse FAILED!"));
		return false;
	}

	if (!ImportMethodSendEndResponse())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodEndResponse FAILED!"));
		return false;
	}

	if (!ImportMethodSetSupportedLanguages())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodSetSupportedLanguages FAILED!"));
		return false;
	}


	if (!ImportMethodSetGameInformation())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodSetGameInformation FAILED!"));
		return false;
	}

	if (!ImportMethodClearPropsData())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodClearPropsData FAILED!"));
		return false;
	}

	if (!ImportMethodAddPropToProfile())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodAddPropToProfile FAILED!"));
		return false;
	}

	if (!ImportMethodClearConnectedDevicesData())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodClearConnectedDevicesData FAILED!"));
		return false;
	}


	if (!ImportMethodAddConnecedDeviceToProfile())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodAddConnecedDeviceToProfile FAILED!"));
		return false;
	}

	if (!ImportMethodSendScreenshot())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportSendScreenshot FAILED!"));
		return false;
	}

	if (!ImportMethodSendStartRumble())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportSendStartRumble FAILED!"));
		return false;
	}
	if (!ImportMethodSendStopRumble())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportSendStopRumble FAILED!"));
		return false;
	}
	if (!ImportMethodSetSessionID())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportSetSessionID FAILED!"));
		return false;
	}
	if (!ImportMethodSendLanguageChangeResponse())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportSendLanguageChangeResponse FAILED!"));
		return false;
	}
	if (!ImportMethodSendServerReady())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportSendServerReady FAILED!"));
		return false;
	}
	if (!ImportMethodSendServerTimeout())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportSendServerTimeout FAILED!"));
		return false;
	}
	if (!ImportMethodSendLighthouseStatus())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportSendLighthouseStatus  FAILED!"));
		return false;
	}

	if (!ImportMethodConnect())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportConnect  FAILED!"));
		return false;
	}
	if (!ImportMethodSendClearDataResponse())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportSendClearDataResponse  FAILED!"));
		return false;
	}

	if (!ImportMethodSendConnectedDevicesUpdate())
	{
		UE_LOG(LogTemp, Error, TEXT("ImportMethodSendConnectedDevicesUpdate  FAILED!"));
		return false;
	}
	return true;
}


void UOpsManager::SendClearDataResponse()
{
	if (m_funcSendClearDataResponse == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("SendClearDataResponse was not initialized"));
		return;
	}
	m_funcSendClearDataResponse();
}

void UOpsManager::Connect()
{
	if (m_funcConnect == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Connect was not initialized"));
		return;

	}
	m_funcConnect();
}

void UOpsManager::CreateOPSClient()
{
	if (m_funcCreateOPSClient == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("OPS Client Function was null"));
		return;
	}

	//TODO: Implement Game Instance
	UWePlayVR_GameInstance* m_refWePlayVR_GameInstance = Cast<UWePlayVR_GameInstance>(GetWorld()->GetGameInstance());

	////bool temp_bStreamerEnabled = m_refVRGameInstance->Settings->Streaming_Enabled;
	//UE_LOG(LogTemp, Error, TEXT("OPS ClientFunction:Is it for Streamer??,%d"), temp_bStreamerEnabled);
	//FString temp_strProjectVersion = m_refVRGameInstance->GetProjectVersion();
	//UE_LOG(LogTemp, Error, TEXT("OPS ClientFunction:Project Version:,%s"), *temp_strProjectVersion);
	//FString temp_strProjectName = m_refVRGameInstance->GetProjectName();
	//UE_LOG(LogTemp, Error, TEXT("OPS ClientFunction:Project Name:,%s"), *temp_strProjectName);

	//eBuildType temp_eCurrentBuildType = temp_bStreamerEnabled ? eBuildType::iStreamer : eBuildType::iGame;

	//int temp_iBuildType = (int)(temp_eCurrentBuildType);
	//m_funcCreateOPSClient(TCHAR_TO_ANSI(*temp_strProjectName), "Clock Tower", TCHAR_TO_ANSI(*temp_strProjectVersion), false, temp_iBuildType, eAttractionType::iArena);//STREAMER MAKE THE LAST ON TRUE
	////m_funcCreateOPSClient("Clocktower", "Clocktower", "1.0", false, temp_iBuildType);//STREAMER MAKE THE LAST ON TRUE

	SetGameInformation(300, 1, 1, eInputNameType::None);


	arrLanguages = new const char*[3];

	arrLanguages[0] = "English";
	arrLanguages[1] = "French";
	arrLanguages[2] = "Portugese";


	//m_funcSetSupportedLanguages(arrLanguages, 3);

	//FIXME: Note sure what has been followed to implement supported language
	//ClearSupportedLanguages();
	//if (m_refVRGameInstance->m_arrSupportedLanguageNames.Num() > 0)
	//{
	//	//SetSupportedLanguages(m_refVRGameInstance->m_arrSupportedLanguageNames, m_refVRGameInstance->m_arrSupportedLanguageNames.Num());//PLEASE ADDED METHOSD TO FIND LENGHT!!!!
	//	for (int i = 0; i < m_refVRGameInstance->m_arrSupportedLanguageNames.Num(); i++)
	//	{
	//		AddSupportedLanguage(m_refVRGameInstance->m_arrSupportedLanguageNames[i]);
	//	}
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Error, TEXT("OPS ClientFunction:m_arrSupportedLanguageNames is EMPTY !!!!"));
	//}


	ClearConnectedDevicesData();
	AddConnecedDeviceToProfile(eDeviceType::iHMD, "Vive", "Main", eDeviceStatus::iNotConnected);
	AddConnecedDeviceToProfile(eDeviceType::iVive_Controller_Left, "0", "Left", eDeviceStatus::iNotConnected);
	AddConnecedDeviceToProfile(eDeviceType::iVive_Controller_Right, "0", "Right", eDeviceStatus::iNotConnected);

}

void UOpsManager::RegisterForCommands()
{
	if (m_funcRegisterForCommands == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Register for command function was not initialized"));
		return;
	}

	m_funcRegisterForCommands([=](int a_iCommandID, const char* a_strCommandData)
	{
		UE_LOG(LogTemp, Log, TEXT("A command is recieved with,ID:%d"), a_iCommandID);
		eCommand10Type enumCommandType = (eCommand10Type)a_iCommandID;

		FString strCommandData(a_strCommandData);

		switch (enumCommandType)
		{
		case eCommand10Type::iInit:
			m_bInitReceived = true;
			UE_LOG(LogTemp, Log, TEXT("UOpsManager:Received init Data: %s"), *strCommandData);
			break;
		case eCommand10Type::iOPS_Config:
			m_bOPSConfigurationReceived = true;
			UE_LOG(LogTemp, Log, TEXT("UOpsManager:Received OPS Config Data: %s"), *strCommandData);

			if (ConvertJsonToStruct(strCommandData, &m_dataOPS_Configuration) == false)
			{
				UE_LOG(LogTemp, Error, TEXT("UOpsManager:iOPS_Config Data->Failed ConvertJsonToStructReceived OPS : %s"), a_strCommandData)
			}
			else
			{
				UE_LOG(LogTemp, Log, TEXT("UOpsManager:iOPS_Config Data->Success ConvertJsonToStructReceived OPS,ClientName : %s"), *m_dataOPS_Configuration.ClientName);
				UE_LOG(LogTemp, Log, TEXT("UOpsManager:iOPS_Config Data->Success ConvertJsonToStructReceived OPS,Location : %s"), *m_dataOPS_Configuration.Location);
				UE_LOG(LogTemp, Log, TEXT("UOpsManager:iOPS_Config Data->Success ConvertJsonToStructReceived OPS,ShowDisclaimer : %d"), m_dataOPS_Configuration.ShowDisclaimer);
				UE_LOG(LogTemp, Log, TEXT("UOpsManager:iOPS_Config Data->Success ConvertJsonToStructReceived OPS,UseVirtualProps : %d"), m_dataOPS_Configuration.UseVirtualProps)
			}
			//m_refOPSConfig = JsonUtility.FromJson<OPS_Configuration>(a_strCommandData);

			break;
		case eCommand10Type::iStart:
			m_bStartReceived = true;
			UE_LOG(LogTemp, Log, TEXT("UOpsManager:Received start Data: %s"), *strCommandData);

			UE_LOG(LogTemp, Error, TEXT("UOpsManager:iStartConfig Data->TEST FOR MEMORY THINGS here..!!"))
				if (ConvertJsonToStruct(strCommandData, &m_dataOPS_StartData) == false)
				{
					UE_LOG(LogTemp, Error, TEXT("UOpsManager:iStartConfig Data->Failed ConvertJsonToStructReceived OPS : %s"), a_strCommandData)
				}
				else
				{
					UE_LOG(LogTemp, Log, TEXT("UOpsManager:iStartConfig Data->Success ConvertJsonToStructReceived OPS,Language : %s"), *m_dataOPS_StartData.Language);

					if (m_dataOPS_StartData.BackPackIP.Num() > 0)
					{
						for (int i = 0; i < m_dataOPS_StartData.BackPackIP.Num(); i++)
						{
							UE_LOG(LogTemp, Log, TEXT("UOpsManager:iStartConfig Data->Success ConvertJsonToStructReceived OPS,BackPackIP(%d) : %s"), i, *m_dataOPS_StartData.BackPackIP[i]);
						}
					}
				}
			break;
		case eCommand10Type::iEnd:
			m_bEndReceived = true;
			UE_LOG(LogTemp, Log, TEXT("UOpsManager:ReceivediEnd: %s"), a_strCommandData);
			break;
		case eCommand10Type::iLanguage_Change:
			m_bLanguageChangeReceived = true;
			UE_LOG(LogTemp, Log, TEXT("UOpsManager:Received iLanguage_Change: %s"), a_strCommandData);
			break;

		case eCommand10Type::iConnectedDevicesUpdate:
			m_bDeviceUpdate = true;
			UE_LOG(LogTemp, Log, TEXT("UOpsManager:Received iConnectedDevicesUpdate: %s"), a_strCommandData);
			break;

		case eCommand10Type::iScreenshot:
			m_bScreenshot = true;
			UE_LOG(LogTemp, Log, TEXT("UOpsManager:Received iScreenshot: %s"), a_strCommandData);
			break;

		case eCommand10Type::iClearData:
			m_bClearScoreData = true;
			UE_LOG(LogTemp, Log, TEXT("UOpsManager:Received iClearData: %s"), a_strCommandData);
			break;
		}

	});
}
template<typename OutStructType>
bool UOpsManager::ConvertJsonToStruct(FString a_strJsonContent, OutStructType* OutStruct)
{

	return FJsonObjectConverter::JsonObjectStringToUStruct(a_strJsonContent, OutStruct, 0, 0);
	//return true;
}

bool UOpsManager::_GetIsProcessingOpsMsg()
{
	return m_bIsProcessingOpsMsg;
}
void UOpsManager::Tick(float DeltaTime)
{

	if (m_bInitReceived)
	{
		SendInitResponseToOPS();
		m_bInitReceived = false;

		
		//UWePlayVR_GameInstance* m_refWePlayVR_GameInstance = Cast<UWePlayVR_GameInstance>(GetWorld()->GetGameInstance());

		SendLighthouseStatus("A", eDeviceStatus::iNotConnected);
		SendLighthouseStatus("B", eDeviceStatus::iNotConnected);
		UE_LOG(LogTemp, Error, TEXT("UOpsManager:m_bInitReceived!!!"));
		//TODO: Implement GameInstance
		//if (m_refVRGameInstance != nullptr)
		//{
		//	m_refWePlayVR_GameInstance->SteamVRStatus->CheckForStatus();
		//	m_refWePlayVR_GameInstance->CheckAndUpdateLightHouseStatus(true);
		//	UE_LOG(LogTemp, Error, TEXT("UOpsManager:Inside m_bInitReceived:Sending Lighthouse status!"));
		//}
	}
	if (m_bOPSConfigurationReceived)
	{

		//TODO: Implement GameInstance
		//UVRGameInstance* m_refVRGameInstance = Cast<UVRGameInstance>(GetWorld()->GetGameInstance());

		/*m_refVRGameInstance->InitializeAnalyticsData();
		UE_LOG(LogTemp, Error, TEXT("UOpsManager:OPSConfigurationReceived!!! InitializeAnalyticsData as OPS configuration recieved!"));
		m_refVRGameInstance->Settings->Physical_Props_Enabled = m_dataOPS_Configuration.UseVirtualProps;
		UE_LOG(LogTemp, Error, TEXT("CPP: OPSConfigurationReceived!!! Settings object is Overwritten for PHyiscal prop! ,based on OPS.dll config!!!Value:%d"), m_dataOPS_Configuration.UseVirtualProps);
*/
		SendOPSConfigResponse();
		m_bOPSConfigurationReceived = false;
	}
	if (m_bStartReceived)
	{

		m_bStartReceived = false;

		//SendStartResponseToOPS();
		//Put onStartCommandReceived here...from game instance bcos of threading
		//TODO: Implement GameInstance
		/*UVRGameInstance* m_refVRGameInstance = Cast<UVRGameInstance>(GetWorld()->GetGameInstance());
		m_refVRGameInstance->onStartCommandReceived();
		m_bStartReceived = false;*/
	}
	if (m_bEndReceived)
	{
		//Put onm_bEndReceived here...from game instance bcos of threading
		//SendEndResponseToOPS();
		//TODO: Implement GameInstance
		/*UVRGameInstance* m_refVRGameInstance = Cast<UVRGameInstance>(GetWorld()->GetGameInstance());
		m_refVRGameInstance->OnEndCommandReceived();
		m_bEndReceived = false;*/
	}

	if (m_bLanguageChangeReceived)
	{
		UE_LOG(LogTemp, Error, TEXT("UOpsManager:m_bLanguageChangeReceived Called.NEED TO IMPLEMENT HEREafter knowing Struct required!"));
		m_bLanguageChangeReceived = false;
	}

	if (m_bDeviceUpdate)
	{
		//TODO: Implement GameInstance
		/*UE_LOG(LogTemp, Error, TEXT("UOpsManager:DeviceUpdate Called.!"));
		UVRGameInstance* m_refVRGameInstance = Cast<UVRGameInstance>(GetWorld()->GetGameInstance());
		m_refVRGameInstance->CheckAndSendVRDeviceStatusFromOPSDLL();
		m_bDeviceUpdate = false;*/
	}
	if (m_bScreenshot)
	{
		//TODO: Implement GameInstance
		/*UE_LOG(LogTemp, Error, TEXT("UOpsManager:m_bScreenshot Called.!"));
		UVRGameInstance* m_refVRGameInstance = Cast<UVRGameInstance>(GetWorld()->GetGameInstance());
		m_refVRGameInstance->ScreenShotReceivedFromOPSDLL();
		m_bScreenshot = false;*/
	}

	if (m_bClearScoreData == true)
	{
		UE_LOG(LogTemp, Error, TEXT("UOpsManager:m_bClearScoreData Called.!"));
		SendClearDataResponse();
		m_bClearScoreData = false;
	}
}

bool UOpsManager::IsTickable() const
{
	return true;
}

bool UOpsManager::IsTickableInEditor() const
{
	return false;
}

bool UOpsManager::IsTickableWhenPaused() const
{
	return false;
}

TStatId UOpsManager::GetStatId() const
{
	return TStatId();
}

void UOpsManager::RegisterForLogs()
{
	if (m_funcRegisterForLogs == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Register for Logs function was not initialized"));
		return;
	}

	m_funcRegisterForLogs([=](int a_iLogType, const char* a_strLog)
	{
		FString strLog(a_strLog);
		eLogType type = (eLogType)a_iLogType;
		switch (type)
		{
		case eLogType::iLOG:
			UE_LOG(LogTemp, Log, TEXT("%s"), *strLog);
			break;
		case eLogType::iWARNING:
			UE_LOG(LogTemp, Warning, TEXT("%s"), *strLog);
			break;
		case eLogType::iERROR:
			UE_LOG(LogTemp, Error, TEXT("%s"), *strLog);
			break;
		default:
			break;
		}

	});
}

void UOpsManager::CleanUpOPSClient()
{
	if (m_funcCloseAndCleanOPSClient == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("OPS Clean-up function was not initialized"));
		return;
	}

	m_funcCloseAndCleanOPSClient();
}

void UOpsManager::SetIPForOPS(FString a_strOPSIP)
{
	if (m_funcSetOPSIP == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Set OPS IP function was not initialized"));
		return;
	}
	
	UWePlayVR_GameInstance* m_refVRGameInstance = Cast<UWePlayVR_GameInstance>(GetWorld()->GetGameInstance());

	//TODO: Implement Settings
	//FString temp_strOPSIPFromSettings = m_refVRGameInstance->Settings->OPS_IP;

	if (!m_refVRGameInstance->m_strOPSIP.IsEmpty())
	{
		m_funcSetOPSIP(TCHAR_TO_ANSI(*m_refVRGameInstance->m_strOPSIP));
		UE_LOG(LogTemp, Error, TEXT("Set OPS IP function called  as CMD line is not empty:%s"), *(m_refVRGameInstance->m_strOPSIP));

	}
	/*else if (!temp_strOPSIPFromSettings.IsEmpty())
	{
		m_funcSetOPSIP(TCHAR_TO_ANSI(*temp_strOPSIPFromSettings));
		UE_LOG(LogTemp, Error, TEXT("Set OPS IP function called  as SettingSOPS_IP is not empty:%s"), *temp_strOPSIPFromSettings);

	}*/
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Set OPS IP function NOT called  as SettingSOPS_IP is  empty and no Cmd Line Ip given"));
	}

}

void UOpsManager::SendProfileToOPS()
{
	if (m_funcSendProfile == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Send Profile data function was not initialized"));
		return;
	}

	m_funcSendProfile();

}

void UOpsManager::SendInitResponseToOPS()
{
	if (m_funcSendInitResponse == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Send init data response function was not initialized"));
		return;
	}

	m_funcSendInitResponse();
}

void UOpsManager::SendOPSConfigResponse()
{
	if (m_funcSendOPSConfigResponse == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Send OPS Configuration response function was not initialized"));
		return;
	}

	m_funcSendOPSConfigResponse();
}

#pragma region StartCommandProcess

void UOpsManager::StartCommandReceived()
{
	UE_LOG(LogTemp, Log, TEXT("[OpsManager] Start Command Received"));
	m_delOnStartCommandReceived.Broadcast();
}

void UOpsManager::SendStartResponseToOPS()
{
	if (m_funcSendStartResponse == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Send Start response function was not initialized"));
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("[OpsManager] Start Response Sent"));
	m_funcSendStartResponse();
}

#pragma endregion


#pragma region EndCommandProcess

void UOpsManager::EndCommandReceived()
{
	UE_LOG(LogTemp, Log, TEXT("[OpsManager] End Command Received"));
	m_delOnEndCommandReceived.Broadcast();
}

void UOpsManager::SendEndResponseToOPS()
{
	if (m_funcSendEndResponse == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Send End response function was not initialized"));
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("[OpsManager] End Response Sent"));
	m_funcSendEndResponse();

}
#pragma endregion



void UOpsManager::SetSupportedLanguages(TArray<FString> a_strLanguageList, int a_nLength)
{

	if (m_funcSetSupportedLanguages == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("SetSupportedLanguages was not initialized"));
		return;
	}
	if (a_nLength == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("SetSupportedLanguages was Lenght is Zero"));
		return;
	}
	if (a_strLanguageList.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("SetSupportedLanguages was Lenght is Zero"));
		return;
	}

	UE_LOG(LogTemp, Error, TEXT("SetSupportedLanguages; ****Languages Lenght:%d"), a_nLength);

	arrLanguages = new const char*[a_nLength];

	for (int iLoop = 0; iLoop < a_nLength; iLoop++)
	{
		FString strCurrentLanguage = a_strLanguageList[iLoop];
		arrLanguages[iLoop] = TCHAR_TO_ANSI(*strCurrentLanguage);
		UE_LOG(LogTemp, Error, TEXT("SetSupportedLanguages;Index:%d , Value:%s"), iLoop, arrLanguages[iLoop]);
	}
	//m_funcSetSupportedLanguages(a_strLanguageList, a_nLength);
	m_funcSetSupportedLanguages(arrLanguages, a_nLength);
	UE_LOG(LogTemp, Error, TEXT("UOpsManager:SetSupportedLanguages:called in  OSP.dll through m_funcSetSupportedLanguages:Chk at OPS"));



	/*
	arrLanguages  = StringToCharArray(a_strLanguageList);

	if (arrLanguages != NULL && arrLanguages[0] != '\0')
	{
		m_funcSetSupportedLanguages(arrLanguages, a_nLength);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("SetSupportedLanguages StringToCharArray is Null or empty"));
	}
	*/

}


//REFERED HERE"PLEASE CHECK THIS LATER

//https://answers.unrealengine.com/questions/775338/how-to-convert-tarray-to-char.html
///Converst FString to Char A rray...Not sure How safe it is....
const char ** UOpsManager::StringToCharArray(TArray<FString> a_strInternalName)
{
	std::vector<std::string> StringArray;
	for (int I = 0; I < a_strInternalName.Num(); I++)
	{
		StringArray.push_back(std::string(TCHAR_TO_UTF8(*(a_strInternalName[I]))));
	}
	std::vector<const char *> CharPtrArray;
	for (int I = 0; I < StringArray.size(); I++)
	{
		CharPtrArray.push_back(StringArray[I].c_str());
	}
	arrLanguages = CharPtrArray.data();
	return arrLanguages;
}

void UOpsManager::SetGameInformation(int a_nGameDuration, int a_nMinimumNumberPlayer, int a_nMaximumNumberPlayer, eInputNameType a_enumInputNameType)
{
	if (m_funcSetGameInformation == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("SetGameInformation was not initialized"));
		return;
	}

	m_funcSetGameInformation(a_nGameDuration, a_nMinimumNumberPlayer, a_nMaximumNumberPlayer, a_enumInputNameType);
}



void UOpsManager::ClearPropsData()
{
	if (m_funcClearPropsData == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("ClearPropsData was not initialized"));
		return;
	}

	m_funcClearPropsData();
}


void UOpsManager::AddPropToProfile(FString a_strPropName, int a_iID)
{
	if (m_funcAddPropToProfile == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("AddPropToProfile was not initialized"));
		return;
	}

	m_funcAddPropToProfile(TCHAR_TO_ANSI(*a_strPropName), a_iID);
}


void UOpsManager::ClearConnectedDevicesData()
{
	if (m_funcClearConnectedDevicesData == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("ClearConnectedDevicesData was not initialized"));
		return;
	}

	m_funcClearConnectedDevicesData();
}

void UOpsManager::AddConnecedDeviceToProfile(eDeviceType a_enumType, FString a_strValue, FString a_strID, eDeviceStatus a_enumStatus)
{
	if (m_funcAddConnectedDeviceToProfile == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("AddConnecedDeviceToProfile was not initialized"));
		return;
	}

	m_funcAddConnectedDeviceToProfile(a_enumType, TCHAR_TO_ANSI(*a_strValue), TCHAR_TO_ANSI(*a_strID), a_enumStatus);
}

/*Need More clarity on what this does*/
//void UOpsManager::ClearSupportedLanguages()
//{
//	if (m_funcClearSupportedLanguages == NULL)
//	{
//		UE_LOG(LogTemp, Error, TEXT("m_funcClearSupportedLanguages was not initialized"));
//		return;
//	}
//
//	m_funcClearSupportedLanguages();
//}
//
//void UOpsManager::AddSupportedLanguage(FString a_strLanguageName)
//{
//	if (m_funcAddSupportedLanguage == NULL)
//	{
//		UE_LOG(LogTemp, Error, TEXT("m_funcAddSupportedLanguage was not initialized"));
//		return;
//	}
//
//	m_funcAddSupportedLanguage(TCHAR_TO_ANSI(*a_strLanguageName));
//}
//
/*************************************/

void UOpsManager::SendConnectedDevicesUpdate()
{
	if (m_funcSendConnectedDevicesUpdate == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("m_funcSendConnectedDevicesUpdate was not initialized"));
		return;
	}

	m_funcSendConnectedDevicesUpdate();
}

void UOpsManager::SendScreenshot(TArray<uint8> a_arrImageData)
{
	if (m_funcSendScreenshot == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("m_funcSendScreenshot was not initialized"));
		return;
	}

	m_strImageData.Empty(0);
	m_strImageData = FBase64::Encode(a_arrImageData);

	m_funcSendScreenshot(TCHAR_TO_ANSI(*m_strImageData));
}

void UOpsManager::SendStartRumble(FString a_strClipName, int a_nVolume, bool a_bPlayOnce)
{
	if (m_funcSendStartRumble == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("m_funcSendStartRumble was not initialized"));
		return;
	}

	m_funcSendStartRumble(TCHAR_TO_ANSI(*a_strClipName), a_nVolume, a_bPlayOnce);
}

void UOpsManager::SendStopRumble()
{

	if (m_funcSendStopRumble == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("m_funcSendStopRumble was not initialized"));
		return;
	}

	m_funcSendStopRumble();
}

void UOpsManager::SetSessionID(FString a_strSessionID)
{

	if (m_funcSetSessionID == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("m_funcSetSessionID was not initialized"));
		return;
	}

	m_funcSetSessionID(TCHAR_TO_ANSI(*a_strSessionID));
}

void UOpsManager::SendLanguageChangeResponse()
{

	if (m_funcSendLanguageChangeResponse == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("m_funcSendLanguageChangeResponse was not initialized"));
		return;
	}

	m_funcSendLanguageChangeResponse();
}

void UOpsManager::SendServerReady(FString a_strGameServerIP, int a_iPort)
{

	if (m_funcSendServerReadyResponse == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("m_funcSendServerReady was not initialized"));
		return;
	}

	m_funcSendServerReadyResponse(TCHAR_TO_ANSI(*a_strGameServerIP), a_iPort);
}

void UOpsManager::SendServerTimeout()
{

	if (m_funcSendServerTimeout == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("m_funcSendServerTimeout was not initialized"));
		return;
	}

	m_funcSendServerTimeout();
}

void UOpsManager::SendLighthouseStatus(FString a_strLighthouseID, eDeviceStatus a_enumStatus)
{

	if (m_funcSendLighthouseStatus == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("m_funcSendLighthouseStatus was not initialized"));
		return;
	}

	m_funcSendLighthouseStatus(TCHAR_TO_ANSI(*a_strLighthouseID), a_enumStatus);
}

void UOpsManager::SetIsProcessingCmdStatus(bool a_bIsProcessingOpsMsg)
{
	m_bIsProcessingOpsMsg = a_bIsProcessingOpsMsg;
	UE_LOG(LogTemp, Error, TEXT("SetIsProcessingCmdStatus: a_bIsProcessingOpsMsg? :%d"), m_bIsProcessingOpsMsg);
}


void UOpsManager::SimulateStartFromOPS()
{
	UE_LOG(LogLoad, Log, TEXT("Calling the Delegate on START."));
	m_delOnStartCommandReceived.Broadcast();
}


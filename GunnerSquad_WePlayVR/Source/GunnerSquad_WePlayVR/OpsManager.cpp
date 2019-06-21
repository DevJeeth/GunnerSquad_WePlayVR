// Fill out your copyright notice in the Description page of Project Settings.


#include "Paths.h"
#include "Engine.h"
#include <vector> 
#include "Base64.h"
#include "OPSManager.h"

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





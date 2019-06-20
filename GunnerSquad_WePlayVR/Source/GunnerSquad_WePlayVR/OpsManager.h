// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//TODO: These headers need to be included
//#include <functional>
//#include "JsonUtilities.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpsManager.generated.h"

/**
 * 
 */
UENUM()
enum class eAttractionType : uint8
{
	iArena = 0,
	iMotion = 1
};

UENUM()
enum class eDeviceType : uint8
{
	iHMD = 0,
	iVive_Controller_Left = 1,
	iVive_Controller_Right = 2,
	iOculus_Controller_Left = 3,
	iOculus_Controller_Right = 4,
	iVive_Lighthouse = 5,
	IOculus_Lighthouse = 6
};

UENUM()
enum class eDeviceStatus : uint8
{
	iNotConnected = 0,
	iConnected = 1,
	iDisconnected = 2,
	iStandby = 3,
	iDeviceError = 4
};
UENUM()
enum class eBuildType : uint8
{
	iGame = 0,
	iStreamer = 1,
	iServer = 2
};
UENUM()
enum class eInputNameType : uint8
{
	None = 0,
	PlayerName = 1,
	TeamName = 2,
	All = 3
};

/******************CONFIG struct of DATA received from OPS********************/

USTRUCT(BlueprintType)
struct FstructOPS_Data
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "structOPS_Data")
		bool UseVirtualProps = false;
	UPROPERTY(BlueprintReadWrite, Category = "structOPS_Data")
		bool ShowDisclaimer = false;
	UPROPERTY(BlueprintReadWrite, Category = "structOPS_Data")
		FString Location = "DEFAULT_LOCATION";
	UPROPERTY(BlueprintReadWrite, Category = "structOPS_Data")
		FString ClientName = "DEFAULT_CLIENT";
	UPROPERTY(BlueprintReadWrite, Category = "structOPS_Data")
		TArray<FString> CreditDevices;
	/** Default constructor. */
	FstructOPS_Data()
	{ }

	/** Creates an uninitialized instance. */
	FstructOPS_Data(ENoInit) { }
};

USTRUCT(BlueprintType)
struct FstructOPS_StartData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_StartData")
		FString Language;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_StartData")
		TArray<FString> BackPackIP;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_StartData")
		int64 StartTime_Unix;

	/** Default constructor. */
	FstructOPS_StartData()
	{ }

	/** Creates an uninitialized instance. */
	FstructOPS_StartData(ENoInit) { }
};


//This struct will hold the data required for multiplayer
USTRUCT(BlueprintType)
struct FstructOPS_GameServerData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerData")
		FString GameServerIP;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerData")
		int GameServerPort;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerData")
		TArray<FstructOPS_GameServerClientData> ClientData;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerData")
		FString SessionId;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerData")
		FString TeamName;
};


//This struct will hold the IP address of each client that needs to connect to the server and the user name of each client if any
USTRUCT(BlueprintType)
struct FstructOPS_GameServerClientData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerClientData")
	 FString ClientIP;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerClientData")
	 FString UserName;
};

UCLASS()
class GUNNERSQUAD_WEPLAYVR_API UOpsManager : public UObject
{
	GENERATED_BODY()
	
};

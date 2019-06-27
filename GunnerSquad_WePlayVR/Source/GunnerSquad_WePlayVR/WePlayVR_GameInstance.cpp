//// Fill out your copyright notice in the Description page of Project Settings.
//#include "WePlayVR_GameInstance.h"
//#include "Engine.h"
//#include "Json.h"
//
//
//UWePlayVR_GameInstance::UWePlayVR_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
//{
//	
//}
//
//void UWePlayVR_GameInstance::Init()
//{
//	Super::Init();
//	
//	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] Init "));
//}
//
//void UWePlayVR_GameInstance::StartGameInstance()
//{
//	UE_LOG(LogTemp, Error, TEXT("[WePlayVR_GameInstance]STARTING WEPLAYVR GAME INSTANCE ,\npath = %s"), *GetPathName());
//	UEngine* const Engine = GetEngine();
//	LanguageDetailsCommand();
//}
//
//void UWePlayVR_GameInstance::LanguageDetailsCommand()
//{
//
//}
//
//void UWePlayVR_GameInstance::StartCommandReceived()
//{
//	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] Start Command Received, calling StartCommand Blueprint event "));
//	OnStartCommandReceived();
//}
//
//void UWePlayVR_GameInstance::EndCommandReceived()
//{
//	UE_LOG(LogTemp, Log, TEXT("[WePlayVR_GameInstance] End Command Received, calling EndCommand Blueprint event "));
//	OnEndCommandReceived();
//}
//
//void UWePlayVR_GameInstance::Shutdown()
//{
//
//}
//
//void UWePlayVR_GameInstance::BeginDestroy()
//{
//
//}
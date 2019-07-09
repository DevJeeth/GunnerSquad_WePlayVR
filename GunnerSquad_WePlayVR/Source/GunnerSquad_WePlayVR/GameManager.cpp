// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"

// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();
	m_refOpsManager = Cast<UOpsManager>(GetGameInstance());
	m_refOpsManager->m_delOnStartCommandReceived.AddDynamic(this, &AGameManager::StartGame);
	//auto func = std::bind(&AGameManager::StartGame, this);
	//m_refOpsManager->RegisterToStartCommand(this, func); 
	////m_refOpsManager->RegisterToStartCommand(this, this->StartGame);
	//m_refOpsManager->SimulateStartFromOPS();
}



// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGameManager::StartGame()
{
	UE_LOG(LogLoad, Log, TEXT("START COMMAND GOT. STARTING GAME NOW."));
}


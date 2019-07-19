// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsData.h"

USettingsData::USettingsData(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	m_bOpsEnabled = true;
	m_bStreamerEnabled = false;
	m_bPhysicalPropsEnabled = false;
	m_bTPCastEnabled = false;
	m_strGameName = "Alien Takedown";
	m_strGameInternalName = "Alien_Takedown";
	m_strOpsIP = "192.168.1.107";
	m_iMinPlayerCount = m_iMaxPlayerCount = 1;
	m_iGamePlayTime = 180;
	AttractionType = eAttractionType::iArena;
	InputNameType = eInputNameType::None;
}
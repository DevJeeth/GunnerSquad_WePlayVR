// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class GunnerSquad_WePlayVRTarget : TargetRules
{
	public GunnerSquad_WePlayVRTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "GunnerSquad_WePlayVR" } );
	}
}

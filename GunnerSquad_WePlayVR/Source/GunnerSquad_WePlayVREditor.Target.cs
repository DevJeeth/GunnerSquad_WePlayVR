// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class GunnerSquad_WePlayVREditorTarget : TargetRules
{
	public GunnerSquad_WePlayVREditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "GunnerSquad_WePlayVR" } );
	}
}

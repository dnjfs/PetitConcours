// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PetitConcours : ModuleRules
{
	public PetitConcours(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}

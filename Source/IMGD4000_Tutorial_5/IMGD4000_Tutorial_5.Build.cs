// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IMGD4000_Tutorial_5 : ModuleRules
{
	public IMGD4000_Tutorial_5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ZVRMotionSequencer : ModuleRules
{
	public ZVRMotionSequencer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
				"EnhancedInput",
				"Niagara",
			}
			);
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"InputCore",
				"EditorFramework",
				"EditorStyle",
				"UnrealEd",
				"LevelEditor",
				"InteractiveToolsFramework",
				"EditorInteractiveToolsFramework",
				"Blutility",
				"UMG",
				"UMGEditor",
				"AIModule",
			}
			);
	}
}

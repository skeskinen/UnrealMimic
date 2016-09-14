using UnrealBuildTool;

public class UnrealMimic : ModuleRules
{
    public UnrealMimic(TargetInfo Target)
	{
        PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
                "MimicLib"
			}
		);
    }
}

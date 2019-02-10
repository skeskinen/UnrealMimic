using UnrealBuildTool;

public class UnrealMimic : ModuleRules
{
    //public UnrealMimic(TargetInfo Target)
    public UnrealMimic(ReadOnlyTargetRules Target) : base(Target)
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

using UnrealBuildTool;

public class UnrealMimicEditor : ModuleRules
{
    //public UnrealMimicEditor(TargetInfo Target)
    public UnrealMimicEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"UnrealEd",
                //"InputCore",
				//"Slate",
				//"SlateCore",
                //"EditorStyle",
                //"MainFrame",
                //"PropertyEditor",
                "UnrealMimic",
				"MimicLib"
            }
		);
	}
}

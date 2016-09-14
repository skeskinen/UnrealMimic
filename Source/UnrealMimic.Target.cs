using UnrealBuildTool;
using System.Collections.Generic;

public class UnrealMimicTarget : TargetRules
{
	public UnrealMimicTarget(TargetInfo Target)
	{
		Type = TargetType.Game;
	}

	//
	// TargetRules interface.
	//

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "UnrealMimicTest" } );
	}
}

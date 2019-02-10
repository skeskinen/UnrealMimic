// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;

public class MimicLib : ModuleRules
{
    //public MimicLib(TargetInfo Target)
    public MimicLib(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        string RootPath = ModuleDirectory + "/";
        PublicSystemIncludePaths.AddRange(new string[] {
            RootPath + "include/",
            RootPath + "lang/"
        });
		string LibPath = "";

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			if(Target.Configuration != UnrealTargetConfiguration.Shipping)
			{
				LibPath = RootPath + "x64/Debug/";
			}
			else
			{
				LibPath = RootPath + "x64/Release/";
			}
		}
		else if (Target.Platform == UnrealTargetPlatform.Win32)
		{
			LibPath = RootPath + "lib/";
		}
		PublicLibraryPaths.Add(LibPath);
        PublicAdditionalLibraries.Add(LibPath + "mimicDLL.lib");
	}
}


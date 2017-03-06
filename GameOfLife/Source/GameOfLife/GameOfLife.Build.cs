// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.IO;

public class GameOfLife : ModuleRules
{
    private string SL_HOME
    {
        get { return Path.GetFullPath(@"G:\GIT\sequenceL\ship\"); }
    }

    public GameOfLife(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        LoadSL(Target);

        PrivateDependencyModuleNames.AddRange(new string[] {  });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }

    public bool LoadSL(TargetInfo Target)
    {
        string LibPath1 = Path.Combine(SL_HOME, "lib");
        string LibPath2 = Path.Combine(SL_HOME, "lib", "vs14");

        //Add Include path 
        PublicIncludePaths.AddRange(new string[] { Path.Combine(SL_HOME, "include") });

        // Add Library Path 
        PublicLibraryPaths.Add(LibPath1);
        PublicLibraryPaths.Add(LibPath2);

        // Add Dependencies 
        //Add Static Libraries
        PublicAdditionalLibraries.Add("tbb.lib");
        PublicAdditionalLibraries.Add("slrt.lib");

        //Definitions.Add(string.Format("WITH_OPENCV_BINDING={0}", isLibrarySupported ? 1 : 0));

        return true;
    }
}

using UnrealBuildTool;

public class MinimapPlugin : ModuleRules {
    public MinimapPlugin(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}

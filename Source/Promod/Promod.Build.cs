using UnrealBuildTool;

public class Promod : ModuleRules {
    public Promod(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "ActorSequence",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioMixer",
            "Chaos",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameEventViz",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MinimapPlugin",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "NuclearCore",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PhysicsCore",
            "PlayFabCommon",
            "PlayFabSubsystem",
            "PropertyPath",
            "SMSystem",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}

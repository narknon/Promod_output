using UnrealBuildTool;

public class Promod_DumpTarget : TargetRules {
	public Promod_DumpTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"GameEventViz",
			"MinimapPlugin",
			"NuclearCore",
			"OnlineSubsystemSteam",
			"PlayFabSubsystem",
			"Promod",
			"SMExtendedRuntime",
		});
	}
}

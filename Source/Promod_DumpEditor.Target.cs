using UnrealBuildTool;

public class Promod_DumpEditorTarget : TargetRules {
	public Promod_DumpEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"AkAudio",
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

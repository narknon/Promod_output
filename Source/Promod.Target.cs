using UnrealBuildTool;

public class PromodTarget : TargetRules {
	public PromodTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Promod",
		});
	}
}

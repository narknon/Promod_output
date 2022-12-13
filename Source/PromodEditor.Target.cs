using UnrealBuildTool;

public class PromodEditorTarget : TargetRules {
	public PromodEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Promod",
		});
	}
}

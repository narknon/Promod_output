#include "BattalionSettings.h"

class UBattalionGameInstance;

bool UBattalionSettings::SetPropertyValueByName(FName PropertyName, const FString& InValue) {
    return false;
}

bool UBattalionSettings::SetProfile(FName ProfileName, bool bApplyChanges) {
    return false;
}

void UBattalionSettings::SetDebugConsoleBind(FKey Key, const FString& Command) {
}

bool UBattalionSettings::SaveSettings() {
    return false;
}

bool UBattalionSettings::LoadSettings() {
    return false;
}

bool UBattalionSettings::GetPropertyValueByName(FName PropertyName, FString& OutValue) {
    return false;
}

FKey UBattalionSettings::GetDebugConsoleKeyFromCommand(const FString& Command) {
    return FKey{};
}

FString UBattalionSettings::GetDebugConsoleBindFromKey(FKey Key) {
    return TEXT("");
}

FText UBattalionSettings::GetBindText(FKey Key, bool bIsUsingGamepad, UBattalionGameInstance* GameInst) {
    return FText::GetEmpty();
}

bool UBattalionSettings::AxisHasBoundKey(FName Name, FKey Key) {
    return false;
}

FText UBattalionSettings::AxisGetBindText(FName Name, bool bPositiveAxis) {
    return FText::GetEmpty();
}

bool UBattalionSettings::ActionHasBoundKey(FName Name, FKey Key) {
    return false;
}

FText UBattalionSettings::ActionGetBindText(FName Name) {
    return FText::GetEmpty();
}

FKey UBattalionSettings::ActionGetBindKey(FName Name) {
    return FKey{};
}

UBattalionSettings::UBattalionSettings() {
    this->Language = TEXT("en");
    this->Resolution = TEXT("1920x1080");
    this->DisplayMode = 0;
    this->Vsync = false;
    this->DisplayIndex = 0;
    this->NvReflexMode = 2;
    this->FPS = 250.00f;
    this->ResolutionQuality = 100;
    this->MSAA = 4;
    this->Gamma = 2.20f;
    this->bBloom = false;
    this->bMotionBlur = false;
    this->bLensFlare = false;
    this->bKillAberration = true;
    this->ColorStrength = 5.00f;
    this->ColorTint = 5.00f;
    this->WorldContrast = 5.00f;
    this->SkyFade = 5.00f;
    this->Vignette = 0.00f;
    this->LightbouncePower = 0.00f;
    this->AOStrength = 0.00f;
    this->LensFlareIntensity = 0.00f;
    this->ExposureAmount = 0.00f;
    this->Sharpness = 0.00f;
    this->bShowWeaponAndArms = true;
    this->MasterVolume = 58.00f;
    this->MenuMusicVolume = 0.00f;
    this->GameMusicVolume = 23.00f;
    this->AudioOutputDevice = TEXT("Headphones");
    this->MuteSelf = false;
    this->MuteAll = false;
    this->MouseSensitivity = 0.40f;
    this->MouseSensitivityScalingOption = TEXT("LEGACY");
    this->MouseSensitivityRelativeAmount = 0.00f;
    this->MouseADSSensitivity = 0.50f;
    this->MouseScopedSensitivity = 0.50f;
    this->bMouseInvertVertical = false;
    this->bController = false;
    this->bUseRadialDeadzone = true;
    this->ControllerAutoAimType = TEXT("DEFAULT");
    this->ControllerSensitivity = 1.00f;
    this->ControllerHorizontalSensitivity = 8.00f;
    this->ControllerVerticalSensitivity = 8.00f;
    this->ControllerADSSensitivity = 1.00f;
    this->ControllerScopedSensitivity = 1.00f;
    this->bControllerInvertVertical = false;
    this->bControllerVibration = true;
    this->ControllerDeadZone = 0.20f;
    this->bCrossPlay = false;
    this->bCrossPlayPrompted = false;
    this->FOV = 150.00f;
    this->bFixedFOVWeaponView = true;
    this->bLeftHandWeaponView = false;
    this->bHeadBob = false;
    this->bShowHUD = true;
    this->bShowTopBar = true;
    this->bShowMinimap = false;
    this->bMinimapFixed = false;
    this->bShowKillFeed = true;
    this->bShowKillMessage = true;
    this->bShowChat = true;
    this->bShowVoiceFeed = true;
    this->bShowCrosshair = true;
    this->bShowPlayerNames = true;
    this->bShowGameStatus = true;
    this->bShowInteraction = true;
    this->bShowInventory = true;
    this->bShowScoreAward = true;
    this->bShowScreenEffects = true;
    this->bShowGrenadeIcon = true;
    this->bShowVault = true;
    this->bShowGameTimer = false;
    this->bShowPickup = true;
    this->bShowMarkers = true;
    this->bShowDistanceOnMarker = false;
    this->bShowInventoryWeapons = false;
    this->bShowPlayersAliveText = true;
    this->bShowCallOut = true;
    this->bShowObjectiveScores = true;
    this->bShowPlayerRanking = true;
    this->bShowNetworkStatus = true;
    this->bShowMedalAwards = true;
    this->bShowSpectatorHUD = true;
    this->bLoadoutAlwaysVisible = true;
    this->bShowBulletTracers = false;
    this->bShowGizmoHelpUI = true;
    this->bShowStrafeHelpUI = false;
    this->bShowSystemTime = false;
    this->bShowMovementHelpUI = false;
    this->bShowFrameTime = false;
    this->bShowClientFPS = true;
    this->bShowIdleTime = false;
    this->bShowGameThreadTime = false;
    this->bShowRenderThreadTime = false;
    this->bShowRHIThreadTime = false;
    this->bShowGameLatency = false;
    this->bShowRenderLatency = false;
    this->bShowGameToRenderLatency = false;
    this->bShowGPUTemp = false;
    this->ActionBinds.AddDefaulted(61);
    this->AxisBinds.AddDefaulted(7);
    this->SettingsMenu = NULL;
    this->BattInstance = NULL;
}


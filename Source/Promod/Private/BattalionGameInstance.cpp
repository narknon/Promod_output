#include "BattalionGameInstance.h"

class USaveDataManager;

void UBattalionGameInstance::StopAutoMemReporter() {
}

void UBattalionGameInstance::StartAutoMemReporter() {
}

void UBattalionGameInstance::SingleFireAutoMemReporter() {
}

void UBattalionGameInstance::SetSlotRestartedWith(const ESlotType NewSlotType) {
}

void UBattalionGameInstance::SetIsFirstSpawnOnMap(const bool bNewIsFirstSpawnOnMap) {
}

void UBattalionGameInstance::ResumeUpdateData() {
}

void UBattalionGameInstance::OnSteamOverlayChanged_Implementation(bool bSteamOverlayVisible) {
}

void UBattalionGameInstance::OnAutoMemReporterTick() {
}

bool UBattalionGameInstance::IsUsingGamepad() const {
    return false;
}

bool UBattalionGameInstance::IsSNDHUDToBeDisabled() {
    return false;
}

bool UBattalionGameInstance::IsMinimapToBeDisabled() {
    return false;
}

bool UBattalionGameInstance::IsHUDNotFlashbangableDisabled() {
    return false;
}

bool UBattalionGameInstance::IsHUDFlashbangableDisabled() {
    return false;
}

bool UBattalionGameInstance::IsForcingPlatformUIHide() {
    return false;
}

bool UBattalionGameInstance::IsForcingPlatform() {
    return false;
}

bool UBattalionGameInstance::IsFlightingBuild() {
    return false;
}

bool UBattalionGameInstance::IsAutoMemReporterRunning() {
    return false;
}

TArray<FString> UBattalionGameInstance::GetTutorialMaps() {
    return TArray<FString>();
}

int32 UBattalionGameInstance::GetStarTimes(float CurrentTime, const FString& MapName, bool IsJumper) {
    return 0;
}

ESlotType UBattalionGameInstance::GetSlotRestartedWith() const {
    return ESlotType::Primary;
}

USaveDataManager* UBattalionGameInstance::GetSaveDataManagerInstance() {
    return NULL;
}

TArray<FMapToModeSchema> UBattalionGameInstance::GetMapsWithSupportedModesInRotation() {
    return TArray<FMapToModeSchema>();
}

TArray<FMapToModeSchema> UBattalionGameInstance::GetMapsWithSupportedModes() {
    return TArray<FMapToModeSchema>();
}

TArray<FString> UBattalionGameInstance::GetKillRunMaps() {
    return TArray<FString>();
}

TArray<FString> UBattalionGameInstance::GetJumperMaps() {
    return TArray<FString>();
}

bool UBattalionGameInstance::GetIsOnline() const {
    return false;
}

bool UBattalionGameInstance::GetIsMapRotationRandom() {
    return false;
}

bool UBattalionGameInstance::GetIsFirstSpawnOnMap() const {
    return false;
}

ENuclearInputType UBattalionGameInstance::GetInputType() const {
    return ENuclearInputType::None;
}

EForcedPlatform UBattalionGameInstance::GetForcedPlatform() {
    return EForcedPlatform::FP_None;
}

FFireUpData UBattalionGameInstance::GetFireUpDataFromType(EClassName ClassType, EFireUpType FireUpType) const {
    return FFireUpData{};
}

EForcedPlatform UBattalionGameInstance::GetCurrentPlatform(bool GetForcedIfForcingPlatform) {
    return EForcedPlatform::FP_None;
}

TArray<FString> UBattalionGameInstance::GetAdminCommandsWithFilter(EAdminCommandsFilter Filter) {
    return TArray<FString>();
}

void UBattalionGameInstance::ForcePlatformForUIImagesStr(const FString& Platform) {
}

void UBattalionGameInstance::ForcePlatformForUIImages(int32 Platform) {
}

void UBattalionGameInstance::ForceHidePlatformUI(int32 newVisibility) {
}

void UBattalionGameInstance::DebugDumpSessions() {
}

UBattalionGameInstance::UBattalionGameInstance() {
    this->KillRunMapPackManager = NULL;
    this->JumperMapPackManager = NULL;
    this->CurrentMapAndModeArrayIndex = 0;
    this->bPlayIntroInMainMenu = false;
    this->CurrentConnectionStatus = 0;
    this->Viewport = NULL;
    this->Player = NULL;
    this->Settings = NULL;
    this->PFSubsystem = NULL;
    this->Online = NULL;
    this->CheatCodeManager = NULL;
    this->WelcomeScreen = NULL;
    this->VersionWidget = NULL;
    this->WidgetReferences = NULL;
    this->StatManager = NULL;
    this->MedalManager = NULL;
    this->ChallengeManager = NULL;
    this->AchievementManager = NULL;
    this->BattalionExperience = NULL;
    this->UseRussianContent = true;
    this->SkinData = NULL;
    this->PromodWeaponData = NULL;
    this->PromodLoadoutsData = NULL;
    this->ClassManagerDataAsset = NULL;
    this->FireUpActionDataAsset = NULL;
    this->AllFireUpsDataAsset = NULL;
    this->PingablesDataAsset = NULL;
    this->OffensiveUtilsDataAsset = NULL;
    this->TacticalUtilsDataAsset = NULL;
    this->HatCosmeticsDataAsset = NULL;
    this->AllInGameMoviesPlaylist = NULL;
    this->Playlist_VICTORY = NULL;
    this->Playlist_Assault_Shootout = NULL;
    this->Playlist_DEFEAT = NULL;
    this->Playlist_FlawlessVictory = NULL;
    this->Playlist_OVERTIME = NULL;
    this->Playlist_SHOOTOUT = NULL;
    this->Playlist_ShootoutTransition = NULL;
    this->Playlist_SwitchingSides = NULL;
    this->RifleArchetypeDataAsset = NULL;
    this->SMGArchetypeDataAsset = NULL;
    this->SniperArchetypeDataAsset = NULL;
    this->PistolArchetypeDataAsset = NULL;
    this->MeleeArchetypeDataAsset = NULL;
    this->PrivateServerUrl = TEXT("https://fshost.me/free");
    this->SaveDataManager = NULL;
    this->FrontEndMap = TEXT("/Game/PROMOD/PromodMaps/Entry");
    this->MapsWithSupportedModes.AddDefaulted(51);
    this->bIsMapOrderRandom = false;
    this->SavedPlayerLoadouts = NULL;
    this->bIsFirstSpawnOnMap = true;
    this->SlotRestartedWith = ESlotType::Primary;
    this->WelcomePopupAccepted = false;
}


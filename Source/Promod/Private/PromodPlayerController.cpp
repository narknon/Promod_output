#include "PromodPlayerController.h"
#include "AkComponent.h"

class UHUDMaster;
class APromodCharacter;
class UAkAudioEvent;
class APromodPlayerState;
class ABattalionWeapon;

void APromodPlayerController::Server_UpdateSpectatorStunEffectStarted_Implementation(float Duration) {
}
bool APromodPlayerController::Server_UpdateSpectatorStunEffectStarted_Validate(float Duration) {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorsScopeADS_Implementation(bool bIsScoped) {
}
bool APromodPlayerController::Server_UpdateSpectatorsScopeADS_Validate(bool bIsScoped) {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorSprintBar_Implementation(const FStaminaEvent& StaminaEvent) {
}
bool APromodPlayerController::Server_UpdateSpectatorSprintBar_Validate(const FStaminaEvent& StaminaEvent) {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorsPlantProgress_Implementation() {
}
bool APromodPlayerController::Server_UpdateSpectatorsPlantProgress_Validate() {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorShowHideActionPrompt_Implementation(EPromodActionPrompt ActionPrompt) {
}
bool APromodPlayerController::Server_UpdateSpectatorShowHideActionPrompt_Validate(EPromodActionPrompt ActionPrompt) {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorsCarryingBomb_Implementation(bool bHasBomb) {
}
bool APromodPlayerController::Server_UpdateSpectatorsCarryingBomb_Validate(bool bHasBomb) {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorsAmmoVisibility_Implementation(bool bAmmoVisiblity) {
}
bool APromodPlayerController::Server_UpdateSpectatorsAmmoVisibility_Validate(bool bAmmoVisiblity) {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorInspect_Implementation() {
}

void APromodPlayerController::Server_UpdateSpectatorHitMarker_Implementation(bool bFromDeath, const FHitResult& HitResult, bool bFriendlyFire) {
}
bool APromodPlayerController::Server_UpdateSpectatorHitMarker_Validate(bool bFromDeath, const FHitResult& HitResult, bool bFriendlyFire) {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorGrenadeCount_Implementation(int32 GrenadeCount, int32 SpecialGrenadeCount) {
}
bool APromodPlayerController::Server_UpdateSpectatorGrenadeCount_Validate(int32 GrenadeCount, int32 SpecialGrenadeCount) {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorFlashBangEffectStarted_Implementation(float Duration) {
}
bool APromodPlayerController::Server_UpdateSpectatorFlashBangEffectStarted_Validate(float Duration) {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorDamageTaken_Implementation(float CurrentHealth, FVector DamageDirection) {
}
bool APromodPlayerController::Server_UpdateSpectatorDamageTaken_Validate(float CurrentHealth, FVector DamageDirection) {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorClearUI_Implementation() {
}
bool APromodPlayerController::Server_UpdateSpectatorClearUI_Validate() {
    return true;
}

void APromodPlayerController::Server_UpdateSpectatorBombMesh_Implementation() {
}
bool APromodPlayerController::Server_UpdateSpectatorBombMesh_Validate() {
    return true;
}

void APromodPlayerController::Server_UpdateHUDUpdateUtilityNadeType_Implementation(ESpecialGrenadeType NewUtilityNadeType, const int32 Count) {
}
bool APromodPlayerController::Server_UpdateHUDUpdateUtilityNadeType_Validate(ESpecialGrenadeType NewUtilityNadeType, const int32 Count) {
    return true;
}

void APromodPlayerController::Server_UpdateHUDUpdateOffensiveUtilType_Implementation(EGrenadeType NewType, const int32 Count) {
}
bool APromodPlayerController::Server_UpdateHUDUpdateOffensiveUtilType_Validate(EGrenadeType NewType, const int32 Count) {
    return true;
}

void APromodPlayerController::Server_UpdateHUDQuickUtilType_Implementation(EFireUpType NewType) {
}
bool APromodPlayerController::Server_UpdateHUDQuickUtilType_Validate(EFireUpType NewType) {
    return true;
}

void APromodPlayerController::Server_UpdateHUDPlayerKilled_Implementation(const FString& KilledPlayerName) {
}
bool APromodPlayerController::Server_UpdateHUDPlayerKilled_Validate(const FString& KilledPlayerName) {
    return true;
}

void APromodPlayerController::Server_ToggleDrawOtherPlayerHitBoxes_Implementation() {
}

void APromodPlayerController::Server_ReportPlayer_Implementation(const FUniqueNetIdRepl& PlayerNetId, const FString& Reason) {
}

void APromodPlayerController::Server_PlayWorldCollapseFX_Implementation(FVector WorldCollapseCenter, float WorldCollapseRadius, bool Play) {
}

void APromodPlayerController::Server_PlaySoundOnGlobalPlayerAndSpectators_Implementation(UAkAudioEvent* ToPlay) {
}

void APromodPlayerController::Server_LoadDefaultLoadout_Implementation(const FLoadoutData& defaultLoadout) {
}
bool APromodPlayerController::Server_LoadDefaultLoadout_Validate(const FLoadoutData& defaultLoadout) {
    return true;
}

void APromodPlayerController::Server_ChooseLoadoutConditional_Implementation(const FLoadoutData& ChosenLoadout, const int32 NewTeamNum, const int32 OldTeamNum, EClassChangeCondition Condition) {
}
bool APromodPlayerController::Server_ChooseLoadoutConditional_Validate(const FLoadoutData& ChosenLoadout, const int32 NewTeamNum, const int32 OldTeamNum, EClassChangeCondition Condition) {
    return true;
}

void APromodPlayerController::Server_ChangeTeam_Implementation() {
}
bool APromodPlayerController::Server_ChangeTeam_Validate() {
    return true;
}

bool APromodPlayerController::IsShowingMouseRequiringUI() const {
    return false;
}

bool APromodPlayerController::IsShowingClassSelectionScreen() const {
    return false;
}

bool APromodPlayerController::IsMatchStateShootout() const {
    return false;
}

UHUDMaster* APromodPlayerController::GetMasterHudWidget() {
    return NULL;
}

void APromodPlayerController::Client_UpdateWorldCollapseFX_Implementation(float WorldCollapseRadius) {
}

void APromodPlayerController::Client_UpdateSpectatorStunEffectStarted_Implementation(uint8 SpectatingID, float Duration) {
}

void APromodPlayerController::Client_UpdateSpectatorShowHideActionPrompt_Implementation(uint8 SpectatingID, EPromodActionPrompt Prompt) {
}

void APromodPlayerController::Client_UpdateSpectatorInspect_Implementation(uint8 SpectatingID) {
}

void APromodPlayerController::Client_UpdateSpectatorFlashBangEffectStarted_Implementation(uint8 SpectatingID, float Duration) {
}

void APromodPlayerController::Client_UpdateSpectatorBombMesh_Implementation(uint8 SpectatingID) {
}

void APromodPlayerController::Client_UpdateScoreAwarded_Implementation(int32 ScoreToShow) {
}

void APromodPlayerController::Client_UpdateKillSuccessWidgets_Implementation(const FString& KilledPlayerName, int32 ScoreToShow) {
}

void APromodPlayerController::Client_UpdateBlockedMessage_Implementation(const FString& Message) {
}

void APromodPlayerController::Client_ToggleGameOverScreen_Implementation(const FString& Result) {
}

void APromodPlayerController::Client_ToggleDrawOtherPlayerHitBoxes_Implementation() {
}

void APromodPlayerController::Client_ToggleClassSelectionScreen_Implementation() {
}

void APromodPlayerController::Client_SwappingSidesUI_Implementation(int32 Team0Score, int32 Team1Score) {
}

void APromodPlayerController::Client_StopAllGameAudioLoops_Implementation() {
}

void APromodPlayerController::Client_StartChangeTeamCooldown_Implementation(const float CooldownTime) {
}

void APromodPlayerController::Client_SpectatorHUDUpdateSprintBar_Implementation(uint8 SpectatingID, const FStaminaEvent& StaminaEvent) {
}

void APromodPlayerController::Client_SpectatorHUDUpdateSpectatingPlayer_Implementation(uint8 SpectatingID, APromodPlayerState* SpecPlayerState, APromodCharacter* SpecPlayerCharacter) {
}

void APromodPlayerController::Client_SpectatorHUDUpdateScopeADS_Implementation(uint8 SpectatingID, bool bIsScoped) {
}

void APromodPlayerController::Client_SpectatorHUDUpdatePlayerKilled_Implementation(uint8 SpectatingID, const FString& KilledPlayerName) {
}

void APromodPlayerController::Client_SpectatorHUDUpdatePlantProgress_Implementation(uint8 SpectatingID) {
}

void APromodPlayerController::Client_SpectatorHUDUpdateHitMarker_Implementation(uint8 SpectatingID, bool bFromDeath, const FHitResult& HitResult, bool bFriendlyFire) {
}

void APromodPlayerController::Client_SpectatorHUDUpdateGrenadeCount_Implementation(uint8 SpectatingID, int32 GrenadeCount, int32 SpecialGrenadeCount, int32 QuickUtil) {
}

void APromodPlayerController::Client_SpectatorHUDUpdateDamageTaken_Implementation(uint8 SpectatingID, float CurrentHealth, FVector DamageDirection) {
}

void APromodPlayerController::Client_SpectatorHUDUpdateCarryingBomb_Implementation(uint8 SpectatingID, bool bHasBomb) {
}

void APromodPlayerController::Client_SpectatorHUDUpdateAmmoVisibility_Implementation(uint8 SpectatingID, bool bAmmoVisibility) {
}

void APromodPlayerController::Client_SpectatorHUDInventoryIcons_Implementation(uint8 SpectatingID, ABattalionWeapon* PrimaryWeapon, ABattalionWeapon* SecondaryWeapon, ABattalionWeapon* MeleeWeapon) {
}

void APromodPlayerController::Client_SpectatorHUDClearUI_Implementation(uint8 SpectatingID) {
}

void APromodPlayerController::Client_ShowDetectedUI_Implementation() {
}

void APromodPlayerController::Client_ShowClassChangedMessage_Implementation() {
}

void APromodPlayerController::Client_SetSwitchAK_Implementation(UAkComponent* akComp, const FString& Group, const FString& Value) {
}

void APromodPlayerController::Client_SetSpectatorButtonVisibility_Implementation(bool bVisible) {
}

void APromodPlayerController::Client_SetMinimapVisibility_Implementation(bool Visible) {
}

void APromodPlayerController::Client_SetHUDVisibility_Implementation(bool Visible) {
}

void APromodPlayerController::Client_SetGuardiansLoggingEnabled_Implementation(bool Enabled) {
}

void APromodPlayerController::Client_SetChangeTeamEnabled_Implementation(const bool bEnabled, const FText& OptionalReason) {
}

void APromodPlayerController::Client_SetAmmoOnlyVis_Implementation(bool bVisible) {
}

void APromodPlayerController::Client_SafeStopAllAudio_Implementation() {
}

void APromodPlayerController::Client_ResetScoreAwarded_Implementation(const int32 CurrentScore) {
}

void APromodPlayerController::Client_ResetKillsThisRound_Implementation() {
}

void APromodPlayerController::Client_PlayWorldCollapseFX_Implementation(FVector WorldCollapseCenter, float WorldCollapseRadius, bool Play) {
}

void APromodPlayerController::Client_PlaySoundOnPlayerComp_Implementation(UAkAudioEvent* ToPlay) {
}

void APromodPlayerController::Client_PlaySoundOnGlobal_Implementation(UAkAudioEvent* ToPlay) {
}

void APromodPlayerController::Client_PlayKilledSound_Implementation(bool bFriendly) {
}

void APromodPlayerController::Client_PlayInfinityRefreshSound_Implementation() {
}

void APromodPlayerController::Client_OnPlayerKilled_Implementation(const int32 OurPrevAliveMembers, const int32 OurAfterAliveMembers, const int32 TheirPrevAliveMembers, const int32 TheirAfterAliveMembers) {
}

void APromodPlayerController::Client_NotifyPlayerOfFireUp_Implementation(APromodPlayerState* PS, UAkAudioEvent* eventToPlay) {
}

void APromodPlayerController::Client_NotifyPlayerOfEvent_Implementation(EPromodEvents PromodEvent) {
}

void APromodPlayerController::Client_HUDUpdateUtilityNadeType_Implementation(ESpecialGrenadeType NewUtilityNadeType, const int32 Count) {
}

void APromodPlayerController::Client_HUDUpdateTeamPlayerStatus_Implementation() {
}

void APromodPlayerController::Client_HUDUpdateQuickUtilType_Implementation(EFireUpType NewUtilityNadeType) {
}

void APromodPlayerController::Client_HUDUpdateOffensiveUtilType_Implementation(EGrenadeType NewUtilityNadeType, const int32 Count) {
}

void APromodPlayerController::Client_HUDUpdateNadeCount_Implementation(int32 NewNadeCount, int32 NewSpecialNadeCount, int32 QuickUtil) {
}

void APromodPlayerController::Client_HUDUpdateBombPlantProgress_Implementation(int32 PlantDirection, float Progress, float ExpectedDuration) {
}

void APromodPlayerController::Client_HUDUpdateAmmoCount_Implementation(int32 WeaponAmmo, int32 ReserveAmmo, bool Fired, bool Reloaded) {
}

void APromodPlayerController::Client_HUDInventoryIcons_Implementation(ABattalionWeapon* PrimaryWeapon, ABattalionWeapon* SecondaryWeapon, ABattalionWeapon* MeleeWeapon) {
}

void APromodPlayerController::Client_HUDFireHitMarker_Implementation(const bool bFromDeath, const FHitResult& HitResult, const bool bFriendly) {
}

void APromodPlayerController::Client_HighlightEquippedInventoryItem_Implementation(ESlotType DesiredSlot) {
}

void APromodPlayerController::Client_HideVictoryState_Implementation() {
}

void APromodPlayerController::Client_HideClassSelection_Implementation() {
}

void APromodPlayerController::Client_ClearDamageOnHUD_Implementation(float MaxHealth) {
}

void APromodPlayerController::Client_ClearCameraModifiers_Implementation() {
}

void APromodPlayerController::Client_CancelChangeTeamCooldown_Implementation() {
}

void APromodPlayerController::ChooseLoadoutConditional(const FLoadoutData& ChosenLoadout, const int32 NewTeamNum, const int32 OldTeamNum, EClassChangeCondition Condition) {
}

void APromodPlayerController::ChooseLoadout(const FLoadoutData& ChosenLoadout, const int32 NewTeamNum, const int32 OldTeamNum) {
}

void APromodPlayerController::BombIconCheck() {
}

APromodPlayerController::APromodPlayerController() {
    this->IsCinematicPlaying = false;
    this->UpdateSpecHUDFailed = false;
    this->bIsShowingClassSelectionScreen = false;
    this->bIsShowingGameOverScreen = false;
    this->CurrentActionPrompt = EPromodActionPrompt::AP_None;
    this->WorldCollapseAkComp = CreateDefaultSubobject<UAkComponent>(TEXT("WorldCollapseAkComponent"));
    this->SavedPlayerLoadouts = NULL;
    this->StunCameraShakeInstancePtr = NULL;
}


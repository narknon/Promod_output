#include "BattalionPlayerControllerGMBase.h"
#include "Templates/SubclassOf.h"
#include "AkComponent.h"
#include "BattalionPathFollowingComponent.h"

class ABattalionSmokeGrenade;
class ABattalionWeapon;
class UBattalionDamageType;
class ABattalionWeaponPickup;
class USoundBase;
class ABattalionPlayerControllerGMBase;
class APlayerState;
class ABattalionPlayerState;
class APawn;
class ABattalionGrenade;
class AActor;
class APromodPlayerState;
class ABattalionWeapon_Instant;
class UAkAudioEvent;
class ABattalionCharacter;

void ABattalionPlayerControllerGMBase::WeaponSwitchedUpdatePickup(ABattalionWeapon* CurrentWeapon, ABattalionWeaponPickup* PickupWeapon) {
}

void ABattalionPlayerControllerGMBase::ViewPlayerNum(uint8 Index, uint8 TeamNum) {
}

void ABattalionPlayerControllerGMBase::UpdateSpectatorHUDWeapons_Implementation(uint8 SpectatingID, const UBattalionDamageType* PrimaryWeapon, const UBattalionDamageType* SecondaryWeapon, const UBattalionDamageType* Knife, bool bPrimaryEquipped, bool bKnifeEquipped) {
}

void ABattalionPlayerControllerGMBase::UpdateSpectatorHUDWeapon_Implementation(uint8 SpectatingID, const UBattalionDamageType* Weapon) {
}

void ABattalionPlayerControllerGMBase::UpdateSpectatorHUDPlayerState_Implementation(APlayerState* PS) {
}

void ABattalionPlayerControllerGMBase::UpdateSpectatorHUDHealth_Implementation(uint8 SpectatingID, float Health) {
}

void ABattalionPlayerControllerGMBase::UpdateSpectatorHUDGrenadeCount_Implementation(uint8 SpectatingID, bool IsSmoke, int32 Count) {
}

void ABattalionPlayerControllerGMBase::UpdateSpectatorHUDCalloutVolumeExited_Implementation(uint8 SpectatingID, const FString& Text, int32 UniqueID) {
}

void ABattalionPlayerControllerGMBase::UpdateSpectatorHUDCalloutVolumeEntered_Implementation(uint8 SpectatingID, const FString& Text, int32 UniqueID) {
}

void ABattalionPlayerControllerGMBase::UpdateSpectatorHUDAmmoCount_Implementation(uint8 SpectatingID, int32 WeaponAmmo, int32 ReserveAmmo, bool Fired, bool Reloaded, bool bInfiniteAmmo) {
}

void ABattalionPlayerControllerGMBase::UpdateCurrentlySpectating_Implementation(ABattalionPlayerState* PS) {
}

void ABattalionPlayerControllerGMBase::ToggleNationSelect() {
}

void ABattalionPlayerControllerGMBase::SpectatorStartHealthRegen_Implementation(uint8 SpectatingID) {
}

void ABattalionPlayerControllerGMBase::Spectator_ClearPlayerStatBar_Implementation(uint8 ID) {
}

void ABattalionPlayerControllerGMBase::SetIsInitialWeaponSelect(bool NewValue) {
}

void ABattalionPlayerControllerGMBase::SetHasBeenInitialWeaponSelect(bool NewValue) {
}

void ABattalionPlayerControllerGMBase::SetDisableMovementAndInputOnSpawn(const bool bInDisableMovementAndInputOnSpawn) {
}

void ABattalionPlayerControllerGMBase::ServerViewPlayerState_Implementation(APlayerState* PS) {
}
bool ABattalionPlayerControllerGMBase::ServerViewPlayerState_Validate(APlayerState* PS) {
    return true;
}

void ABattalionPlayerControllerGMBase::ServerViewGrenade_Implementation(ABattalionPlayerControllerGMBase* PC) {
}
bool ABattalionPlayerControllerGMBase::ServerViewGrenade_Validate(ABattalionPlayerControllerGMBase* PC) {
    return true;
}

void ABattalionPlayerControllerGMBase::ServerSetCameraStyle_Implementation(ABattalionPlayerControllerGMBase* PC, FName NewStyle) {
}
bool ABattalionPlayerControllerGMBase::ServerSetCameraStyle_Validate(ABattalionPlayerControllerGMBase* PC, FName NewStyle) {
    return true;
}

void ABattalionPlayerControllerGMBase::ServerManualViewPrevPlayer_Implementation() {
}
bool ABattalionPlayerControllerGMBase::ServerManualViewPrevPlayer_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::ServerManualViewNextPlayer_Implementation() {
}
bool ABattalionPlayerControllerGMBase::ServerManualViewNextPlayer_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::ServerControlledUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId) {
}
bool ABattalionPlayerControllerGMBase::ServerControlledUnmutePlayer_Validate(FUniqueNetIdRepl PlayerId) {
    return true;
}

void ABattalionPlayerControllerGMBase::ServerControlledMutePlayer_Implementation(FUniqueNetIdRepl PlayerId) {
}
bool ABattalionPlayerControllerGMBase::ServerControlledMutePlayer_Validate(FUniqueNetIdRepl PlayerId) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_UnmutePlayerChat_Implementation(ABattalionPlayerState* UnmutedPlayer) {
}
bool ABattalionPlayerControllerGMBase::Server_UnmutePlayerChat_Validate(ABattalionPlayerState* UnmutedPlayer) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_ToggleReplay_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_ToggleReplay_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_TogglePlayerReady_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_TogglePlayerReady_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SpawnProfilingSmokeGrenade_Implementation(TSubclassOf<ABattalionSmokeGrenade> SmokeGrenadeClass, FTransform SpawnTransform, APawn* SpawnInstigator) {
}
bool ABattalionPlayerControllerGMBase::Server_SpawnProfilingSmokeGrenade_Validate(TSubclassOf<ABattalionSmokeGrenade> SmokeGrenadeClass, FTransform SpawnTransform, APawn* SpawnInstigator) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SpawnProfilingGrenade_Implementation(TSubclassOf<ABattalionGrenade> GrenadeClass, FTransform SpawnTransform, APawn* SpawnInstigator) {
}
bool ABattalionPlayerControllerGMBase::Server_SpawnProfilingGrenade_Validate(TSubclassOf<ABattalionGrenade> GrenadeClass, FTransform SpawnTransform, APawn* SpawnInstigator) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SpawnProfilingActor_Implementation(TSubclassOf<AActor> SpawnClass, FTransform SpawnTransform) {
}
bool ABattalionPlayerControllerGMBase::Server_SpawnProfilingActor_Validate(TSubclassOf<AActor> SpawnClass, FTransform SpawnTransform) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SetTeam_Implementation(int32 Team) {
}
bool ABattalionPlayerControllerGMBase::Server_SetTeam_Validate(int32 Team) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SetSpectatorCameraMode_Implementation(ESpectatorCameraMode NewMode) {
}
bool ABattalionPlayerControllerGMBase::Server_SetSpectatorCameraMode_Validate(ESpectatorCameraMode NewMode) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SetSpectating_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_SetSpectating_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SetNation_Implementation(ENationType Nation) {
}
bool ABattalionPlayerControllerGMBase::Server_SetNation_Validate(ENationType Nation) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SetLoadoutCursorPosition_Implementation(FVector2D NewCursorPosition) {
}
bool ABattalionPlayerControllerGMBase::Server_SetLoadoutCursorPosition_Validate(FVector2D NewCursorPosition) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SetIsInitialWeaponSelect_Implementation(bool NewValue) {
}
bool ABattalionPlayerControllerGMBase::Server_SetIsInitialWeaponSelect_Validate(bool NewValue) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SetInfectionTeam_Implementation(int32 Team) {
}
bool ABattalionPlayerControllerGMBase::Server_SetInfectionTeam_Validate(int32 Team) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SetHasBeenInitialWeaponSelect_Implementation(bool NewValue) {
}
bool ABattalionPlayerControllerGMBase::Server_SetHasBeenInitialWeaponSelect_Validate(bool NewValue) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SetClass_Implementation(int32 Class) {
}
bool ABattalionPlayerControllerGMBase::Server_SetClass_Validate(int32 Class) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SetAutoTeam_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_SetAutoTeam_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_SendMessage_Implementation(const FText& Message, EChatChannels Channel) {
}
bool ABattalionPlayerControllerGMBase::Server_SendMessage_Validate(const FText& Message, EChatChannels Channel) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_RequestOutline_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_RequestOutline_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_ProcessGameModeCommand_Implementation(const FString& Command, ABattalionPlayerControllerGMBase* PC) {
}
bool ABattalionPlayerControllerGMBase::Server_ProcessGameModeCommand_Validate(const FString& Command, ABattalionPlayerControllerGMBase* PC) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_PlayerRequestSetTeam_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_PlayerRequestSetTeam_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_PlayerRequestSetNation_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_PlayerRequestSetNation_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_PlayerRequestSetClass_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_PlayerRequestSetClass_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_PlayerRequestChangeLoadout_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_PlayerRequestChangeLoadout_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_OrderBotsToLocation_Implementation(FVector Location) {
}
bool ABattalionPlayerControllerGMBase::Server_OrderBotsToLocation_Validate(FVector Location) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_OnStopUse_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_OnStopUse_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_OnStopQuickUse_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_OnStopQuickUse_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_OnStartUse_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_OnStartUse_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_OnStartQuickUse_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_OnStartQuickUse_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_NotifyLocalPlayerTalkingStateChanged_Implementation(bool bIsTalking) {
}
bool ABattalionPlayerControllerGMBase::Server_NotifyLocalPlayerTalkingStateChanged_Validate(bool bIsTalking) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_MutePlayerChat_Implementation(ABattalionPlayerState* MutedPlayer) {
}
bool ABattalionPlayerControllerGMBase::Server_MutePlayerChat_Validate(ABattalionPlayerState* MutedPlayer) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_MuteMultiplePlayers_Implementation(const TArray<FUniqueNetIdRepl>& Players) {
}
bool ABattalionPlayerControllerGMBase::Server_MuteMultiplePlayers_Validate(const TArray<FUniqueNetIdRepl>& Players) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_ModifyLoadoutClaim_Implementation(FBattalionLoadoutClaim ExistingClaim, FBattalionLoadoutClaim NewClaim, int32 Slot) {
}
bool ABattalionPlayerControllerGMBase::Server_ModifyLoadoutClaim_Validate(FBattalionLoadoutClaim ExistingClaim, FBattalionLoadoutClaim NewClaim, int32 Slot) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_LoadoutConfirmed_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_LoadoutConfirmed_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_IdleTimeReached_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_IdleTimeReached_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_HandleMatchSessionJoined_Implementation(bool bWasSuccessful) {
}

void ABattalionPlayerControllerGMBase::Server_HandleMatchSessionHosted_Implementation(bool bWasSuccessful, const FUniqueNetIdRepl& SessionId) {
}

void ABattalionPlayerControllerGMBase::Server_GetIdleTimeLimit_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_GetIdleTimeLimit_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_DestroyProfilingBots_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_DestroyProfilingBots_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_DEBUG_BotLookAtLocation_Implementation(const FVector& Location) {
}
bool ABattalionPlayerControllerGMBase::Server_DEBUG_BotLookAtLocation_Validate(const FVector& Location) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_DEBUG_Bot180_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_DEBUG_Bot180_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_CreateProfilingBot_Implementation(int32 TeamNum, bool IsStationary) {
}
bool ABattalionPlayerControllerGMBase::Server_CreateProfilingBot_Validate(int32 TeamNum, bool IsStationary) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_ClientSideStatesReady_Implementation() {
}
bool ABattalionPlayerControllerGMBase::Server_ClientSideStatesReady_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_CleanupActorsOfClass_Implementation(TSubclassOf<AActor> CleanupClass) {
}
bool ABattalionPlayerControllerGMBase::Server_CleanupActorsOfClass_Validate(TSubclassOf<AActor> CleanupClass) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_CastVote_Implementation(bool VotedYes) {
}
bool ABattalionPlayerControllerGMBase::Server_CastVote_Validate(bool VotedYes) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_CallVote_Timeout_Implementation(ABattalionPlayerState* PS, bool bIsTactical) {
}
bool ABattalionPlayerControllerGMBase::Server_CallVote_Timeout_Validate(ABattalionPlayerState* PS, bool bIsTactical) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_CallVote_Surrender_Implementation(ABattalionPlayerState* PS) {
}
bool ABattalionPlayerControllerGMBase::Server_CallVote_Surrender_Validate(ABattalionPlayerState* PS) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_CallVote_OfferSurrender_Implementation(ABattalionPlayerState* PS) {
}
bool ABattalionPlayerControllerGMBase::Server_CallVote_OfferSurrender_Validate(ABattalionPlayerState* PS) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_CallVote_KickPlayer_Implementation(ABattalionPlayerState* PS) {
}
bool ABattalionPlayerControllerGMBase::Server_CallVote_KickPlayer_Validate(ABattalionPlayerState* PS) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_AskToPossessBot_Implementation(APawn* PawnToPossess) {
}
bool ABattalionPlayerControllerGMBase::Server_AskToPossessBot_Validate(APawn* PawnToPossess) {
    return true;
}

void ABattalionPlayerControllerGMBase::Server_AddLoadoutClaim_Implementation(FBattalionLoadoutClaim Claim, int32 Slot) {
}
bool ABattalionPlayerControllerGMBase::Server_AddLoadoutClaim_Validate(FBattalionLoadoutClaim Claim, int32 Slot) {
    return true;
}

void ABattalionPlayerControllerGMBase::SendMessage(const FText& Message, EChatChannels Channel) {
}

void ABattalionPlayerControllerGMBase::PrintToClientConsole(const FString& Message) {
}

void ABattalionPlayerControllerGMBase::PlayTimerTick() {
}

void ABattalionPlayerControllerGMBase::PlaySound(USoundBase* Sound) {
}

void ABattalionPlayerControllerGMBase::OnUpdateInteractionProgress(ABattalionPlayerControllerGMBase* Controller, ABattalionPlayerControllerGMBase* receiver, float Progress) {
}

void ABattalionPlayerControllerGMBase::NotifySpectatorsOfWeaponSwap_Implementation() {
}
bool ABattalionPlayerControllerGMBase::NotifySpectatorsOfWeaponSwap_Validate() {
    return true;
}

void ABattalionPlayerControllerGMBase::NotifySpectatorsOfWeaponHit_Implementation(FVector HitVector, float Damage, bool WasSelf) {
}
bool ABattalionPlayerControllerGMBase::NotifySpectatorsOfWeaponHit_Validate(FVector HitVector, float Damage, bool WasSelf) {
    return true;
}

void ABattalionPlayerControllerGMBase::NotifySpectatorsOfHitmarker_Implementation(bool KillingBlow, bool FriendlyFire, bool IsHeadshot, bool IsKnifeKill) {
}
bool ABattalionPlayerControllerGMBase::NotifySpectatorsOfHitmarker_Validate(bool KillingBlow, bool FriendlyFire, bool IsHeadshot, bool IsKnifeKill) {
    return true;
}

void ABattalionPlayerControllerGMBase::NotifySpectatorOfDeath_Implementation(FVector KilledLoc, FVector KillerLoc) {
}

bool ABattalionPlayerControllerGMBase::IsInPersonalMutelist(const APlayerState* OtherPlayerState) const {
    return false;
}

bool ABattalionPlayerControllerGMBase::GetWorldLoadPlayed() {
    return false;
}

int32 ABattalionPlayerControllerGMBase::GetVictoryState() {
    return 0;
}

bool ABattalionPlayerControllerGMBase::GetSwappingSides() {
    return false;
}

bool ABattalionPlayerControllerGMBase::GetSurrenderState() const {
    return false;
}

int32 ABattalionPlayerControllerGMBase::GetNumberOfMutedPlayers() const {
    return 0;
}

float ABattalionPlayerControllerGMBase::GetKickRemainingTime() {
    return 0.0f;
}

void ABattalionPlayerControllerGMBase::GetKeysForAction(FName ActionName, TArray<FInputActionKeyMapping>& Bindings) {
}

bool ABattalionPlayerControllerGMBase::GetDisableMovementAndInputOnSpawn() const {
    return false;
}

void ABattalionPlayerControllerGMBase::DEBUG_BotLookAtLocation() {
}

void ABattalionPlayerControllerGMBase::DEBUG_Bot180() {
}

void ABattalionPlayerControllerGMBase::CrashGame() {
}

void ABattalionPlayerControllerGMBase::ClientViewSpectatorPawn_Implementation(FViewTargetTransitionParams TransitionParams) {
}

void ABattalionPlayerControllerGMBase::ClientViewedGrenade_Implementation() {
}

void ABattalionPlayerControllerGMBase::ClientSetCameraStyle_Implementation(FName Style) {
}

void ABattalionPlayerControllerGMBase::ClientServerControlledUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId) {
}

void ABattalionPlayerControllerGMBase::ClientServerControlledMutePlayer_Implementation(FUniqueNetIdRepl PlayerId) {
}

void ABattalionPlayerControllerGMBase::ClientNotifyWeaponSwap_Implementation() {
}

void ABattalionPlayerControllerGMBase::ClientNotifyWeaponHit_Implementation(FVector HitVector, float Damage, bool WasSelf) {
}

void ABattalionPlayerControllerGMBase::ClientNotifySpectatorOfDeadPlayer_Implementation(uint8 ID) {
}

void ABattalionPlayerControllerGMBase::ClientNotifyHitmarker_Implementation(bool KillingBlow, bool FriendlyFire, bool IsHeadshot, bool IsKnifeKill) {
}

void ABattalionPlayerControllerGMBase::ClientDumpMuteListState_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_WorldLoadPlayed_Implementation(bool Value) {
}

void ABattalionPlayerControllerGMBase::Client_WeaponSwitched_Implementation(int32 NewWeaponIndex) {
}

void ABattalionPlayerControllerGMBase::Client_WeaponsChanged_Implementation(ABattalionWeapon_Instant* WeaponOne, ABattalionWeapon_Instant* WeaponTwo, ABattalionWeapon_Instant* WeaponThree) {
}

void ABattalionPlayerControllerGMBase::Client_WeaponAmmoChanged_Implementation(int32 WeaponAmmo, int32 ReserveAmmo, bool Fired, bool Reloaded) {
}

void ABattalionPlayerControllerGMBase::Client_VoteFinished_Implementation(bool bWasSuccessful) {
}

void ABattalionPlayerControllerGMBase::Client_VoteCasted_Implementation(bool bVotedYes, uint8 Votes) {
}

void ABattalionPlayerControllerGMBase::Client_ViewTargetUpdated_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_UpdateWeaponPickup_Implementation(const UBattalionDamageType* Pickup, const UBattalionDamageType* Current) {
}

void ABattalionPlayerControllerGMBase::Client_UpdateSubModeType_Implementation(const FString& String) {
}

void ABattalionPlayerControllerGMBase::Client_UpdateScoreAward_Implementation(const int32 Value, const FString& Text) {
}

void ABattalionPlayerControllerGMBase::Client_UpdateRespawnTimer_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_UpdateRequiredPlayersRemaining_Implementation(int32 RequiredPlayersRemaining) {
}

void ABattalionPlayerControllerGMBase::Client_UpdateMuteSettingsOnTimerEnd_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_UpdateMuteSettings_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_UpdateInteractionProgress_Implementation(float Progress) {
}

void ABattalionPlayerControllerGMBase::Client_UpdateGameScores_Implementation(const TArray<FPlayerInfoMinimal>& PlayerInfoList) {
}

void ABattalionPlayerControllerGMBase::Client_UpdateCompletedChallenges_Implementation(const FCompletedChallenges& ChallengesCompleted) {
}

void ABattalionPlayerControllerGMBase::Client_UpdateClientStats_Implementation(const TArray<FStatInfo>& StatData, bool bEndOfGame) {
}

void ABattalionPlayerControllerGMBase::Client_UpdateCanVault_Implementation(bool CanVault) {
}

void ABattalionPlayerControllerGMBase::Client_UnmuteChatPlayer_Implementation(const FString& NetID) {
}

void ABattalionPlayerControllerGMBase::Client_ToggleWeaponVisbility_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ToggleThirdPerson_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ToggleShowHealthbars_Implementation(bool bNewHealthbarVisible) {
}

void ABattalionPlayerControllerGMBase::Client_TellServerWhenStatesAreValid_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_SwappingSides_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_StopVoiceInstructions_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_StopSpectator_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_StopRecordingReplay_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_StopMusic_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_StopMIDISafe_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_StopAllHard_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_StopAllAudioLoops_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_StartSpectator_Implementation(FSpectatorRules Rules, FVector CameraLocation, FRotator CameraRotation, AActor* KilledByActor, bool NeedDeathSpec, float TransferTime) {
}

void ABattalionPlayerControllerGMBase::Client_StartRespawnTimer_Implementation(float RespawnTime) {
}

void ABattalionPlayerControllerGMBase::Client_StartRecordingReplay_Implementation(const FString& Name) {
}

void ABattalionPlayerControllerGMBase::Client_StartMusicWithRTPC_Implementation(const FName& MusicState, const FName& rtpcName, float RTPCValue) {
}

void ABattalionPlayerControllerGMBase::Client_StartMusic_Implementation(const FName& MusicState) {
}

void ABattalionPlayerControllerGMBase::Client_SpectatorViewStartupCamera_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_SpectatorEndLoadoutPhase_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_SpectatedPlayerChanged_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_SkipNextPossessRestart_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ShowUIIfNotPaused_Implementation(int64 ElementFlag, bool ForceVisible) {
}

void ABattalionPlayerControllerGMBase::Client_ShowTutorialPrompt_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ShowServerChatMessage_Implementation(const FText& Message) {
}

void ABattalionPlayerControllerGMBase::Client_ShowOvertimeTitleScreen_Implementation(float ShowTime) {
}

void ABattalionPlayerControllerGMBase::Client_ShowOvertimeShootoutVictoryScreen_Implementation(int32 WinningTeamNum, int32 Team0Score, int32 Team1Score, bool bIsOvertime, bool bIsShootout) {
}

void ABattalionPlayerControllerGMBase::Client_ShowOvertimeShootoutTransitionScreen_Implementation(float ShowTime, APromodPlayerState* Team0Player, APromodPlayerState* Team1Player, int32 Team0Alive, int32 Team1Alive) {
}

void ABattalionPlayerControllerGMBase::Client_ShowOvertimeShootoutTitleScreen_Implementation(float ShowTime) {
}

void ABattalionPlayerControllerGMBase::Client_ShowLoadoutPromptIfJoinedLate_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ShowBuyMenuIfJoinedLate_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ShowAnnouncement_Implementation(const FText& Text, float Duration) {
}

void ABattalionPlayerControllerGMBase::Client_ShowActionPrompt_Implementation(EActionPrompt ActionPrompt) {
}

void ABattalionPlayerControllerGMBase::Client_SetVictoryState_Implementation(int32 InVictoryState) {
}

void ABattalionPlayerControllerGMBase::Client_SetUIFlags_Implementation(int32 NewFlagsA, int32 NewFlagsB) {
}

void ABattalionPlayerControllerGMBase::Client_SetTeamNum_Implementation(int32 Team, int32 OldTeam) {
}

void ABattalionPlayerControllerGMBase::Client_SetTakeItemFromBotDistance_Implementation(float Value) {
}

void ABattalionPlayerControllerGMBase::Client_SetSurrenderState_Implementation(bool State) {
}

void ABattalionPlayerControllerGMBase::Client_SetStatusInfoText_Implementation(const FString& Text) {
}

void ABattalionPlayerControllerGMBase::Client_SetSpectatingID_Implementation(uint8 ID, uint8 OldID) {
}

void ABattalionPlayerControllerGMBase::Client_SetShouldPlayVoiceLines_Implementation(bool NewShouldPlayVoiceLines) {
}

void ABattalionPlayerControllerGMBase::Client_SetRespawnNationType_Implementation(ENationType NewNation) {
}

void ABattalionPlayerControllerGMBase::Client_SetPossessedBotPS_Implementation(ABattalionPlayerState* PS) {
}

void ABattalionPlayerControllerGMBase::Client_SetNationType_Implementation(ENationType NewNation) {
}

void ABattalionPlayerControllerGMBase::Client_SetIsSwappingSides_Implementation(bool InSpwappingSides, int32 Team0Score, int32 Team1Score) {
}

void ABattalionPlayerControllerGMBase::Client_SetIsReady_Implementation(bool NewReady) {
}

void ABattalionPlayerControllerGMBase::Client_SetHUDFlags_Implementation(int32 NewFlagsA, int32 NewFlagsB) {
}

void ABattalionPlayerControllerGMBase::Client_SetForceVisibleUIFlags_Implementation(int32 NewFlagsA, int32 NewFlagsB) {
}

void ABattalionPlayerControllerGMBase::Client_SetEditableUIFlags_Implementation(int32 NewFlagsA, int32 NewFlagsB) {
}

void ABattalionPlayerControllerGMBase::Client_SetEditableHUDFlags_Implementation(int32 NewFlagsA, int32 NewFlagsB) {
}

void ABattalionPlayerControllerGMBase::Client_SendStringToConsole_Implementation(const FString& String) {
}

void ABattalionPlayerControllerGMBase::Client_SendMessage_Implementation(const FText& Name, const FText& Message, EChatChannels Channel, const FString& NetID, bool IsDev, bool ForceMessage, ESlateVisibility GlobalIconVisibility) {
}

void ABattalionPlayerControllerGMBase::Client_RTPC_Implementation(const FName& rtpcName, float RTPCValue) {
}

void ABattalionPlayerControllerGMBase::Client_ResumeMusic_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_RespawnTimerEnded_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ResetTutorialPrompt_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ResetStatusBars_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ResetRTPC_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ResetKillFeed_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ResetIdleKickTimer_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_RequestChallenges_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ReplayStateChanged_Implementation(bool Recording, const FString& FileId) {
}

void ABattalionPlayerControllerGMBase::Client_RemoveSmokeBombs_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_RegisterGameModeAdminCommands_Implementation(const TArray<FString>& Commands, const TArray<FColor>& CmdColors) {
}

void ABattalionPlayerControllerGMBase::Client_RecieveLoadoutCursorPosition_Implementation(ABattalionPlayerState* SubjectPlayerState, FVector2D NewCursorPosition) {
}

void ABattalionPlayerControllerGMBase::Client_ReceiveServerVote_Implementation(const FString& Title, const FString& PassOption, const FString& FailOption, float VoteTime, uint8 VotesReq) {
}

void ABattalionPlayerControllerGMBase::Client_ReceiveRoundEndReason_Implementation(FName Reason) {
}

void ABattalionPlayerControllerGMBase::Client_ReceiveNewVote_Implementation(const FString& Caller, const FString& Title, const FString& Item, float VoteTime, uint8 VotesReq, bool SelfCalledVote, APlayerState* PlayerToKick) {
}

void ABattalionPlayerControllerGMBase::Client_ReceiveNetworkInfo_Implementation(const FString& NetworkId, const FString& NetworkDescriptorStr) {
}

void ABattalionPlayerControllerGMBase::Client_ReceiveIdleTimeLimit_Implementation(float Time) {
}

void ABattalionPlayerControllerGMBase::Client_QueueStopAllAudioLoops_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_PrePlayerPossessedBot_Implementation(FRotator NewRotation) {
}

void ABattalionPlayerControllerGMBase::Client_PrepareSpectatorForLoadoutPhase_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_PostVoiceOnClosestTalker_Implementation(EVoiceKey VoiceKey) {
}

void ABattalionPlayerControllerGMBase::Client_PostPlayerPossessedBot_Implementation(APawn* NewPawn) {
}

void ABattalionPlayerControllerGMBase::Client_PlayVoiceInstructions_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_PlayTimerTick_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_PlaySoundOnAkComp_Implementation(UAkComponent* akComp, UAkAudioEvent* ToPlay) {
}

void ABattalionPlayerControllerGMBase::Client_PlayReplay_Implementation(const FString& Name) {
}

void ABattalionPlayerControllerGMBase::Client_PlayerTeamNumChanged_Implementation(ABattalionPlayerState* PS, int32 Team, int32 OldTeam) {
}

void ABattalionPlayerControllerGMBase::Client_PlayerSpectatingIDChanged_Implementation(ABattalionPlayerState* PS, uint8 ID, uint8 OldID) {
}

void ABattalionPlayerControllerGMBase::Client_PlayerRequestChangeLoadout() {
}

void ABattalionPlayerControllerGMBase::Client_PlayerLeft_Implementation(const FUniqueNetIdRepl& PlatformId, const FString& PlayerName, bool bKicked) {
}

void ABattalionPlayerControllerGMBase::Client_PlayerJoined_Implementation(const FUniqueNetIdRepl& PlatformId, const FString& PlayerName) {
}

void ABattalionPlayerControllerGMBase::Client_PlayCinematic_Implementation(FName CinematicId) {
}

void ABattalionPlayerControllerGMBase::Client_PauseMusic_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_OverridePlayerName_Implementation(const FString& Name) {
}

void ABattalionPlayerControllerGMBase::Client_OnRespawn_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_OnMatchStateChanged_Implementation(FName NewMatchState, FName PrevousMatchState) {
}

void ABattalionPlayerControllerGMBase::Client_OnDeathHideWidgets_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_NotifyRemotePlayerTalkingStateChanged_Implementation(ABattalionPlayerState* TalkingPlayerState, bool bIsTalking) {
}

void ABattalionPlayerControllerGMBase::Client_MuteChatPlayer_Implementation(const FString& NetID) {
}

void ABattalionPlayerControllerGMBase::Client_MinimapStopWeaponFire_Implementation(ABattalionCharacter* FiringPawn) {
}

void ABattalionPlayerControllerGMBase::Client_MinimapStartWeaponFire_Implementation(ABattalionCharacter* FiringPawn) {
}

void ABattalionPlayerControllerGMBase::Client_MinimapSingleWeaponFire_Implementation(ABattalionCharacter* FiringPawn) {
}

void ABattalionPlayerControllerGMBase::Client_LevelledUpSoundEvent_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_LevelledUp_Implementation(int32 NewLevel) {
}

void ABattalionPlayerControllerGMBase::Client_Kicked_Implementation(const FText& Reason) {
}

void ABattalionPlayerControllerGMBase::Client_JoinMatchSession_Implementation(const FUniqueNetIdRepl& SessionId) {
}

void ABattalionPlayerControllerGMBase::Client_HostMatchSession_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_HideWeaponPrompt_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_HideScoreboard_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_HideLoadoutPromptIfJoinedLate_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_HideGameMenu_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_HideBuyMenu_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_HideActionPrompt_Implementation(EActionPrompt ActionPrompt) {
}

void ABattalionPlayerControllerGMBase::Client_GrenadeCountChanged_Implementation(bool IsSmoke, int32 Count) {
}

void ABattalionPlayerControllerGMBase::Client_GatherScoreboardData_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ForceHideHUDElement_Implementation(int64 ElementFlag) {
}

void ABattalionPlayerControllerGMBase::Client_FirstPossessionCompleted_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_FinishedJoiningServer_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_ExitedCallOutVolume_Implementation(const FString& Name, int32 UniqueID) {
}

void ABattalionPlayerControllerGMBase::Client_EnteredCallOutVolume_Implementation(const FString& Name, int32 UniqueID) {
}

void ABattalionPlayerControllerGMBase::Client_EnsurePlayerHasCorrectViewTarget_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_EnableSpawnViewer_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_EnableOutlines_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_EnableInput_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_DisableSpawnViewer_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_DisableInput_Implementation(bool DisableSwapping, bool EnableCameraControls) {
}

void ABattalionPlayerControllerGMBase::Client_CurrentlySpectatingCharacterUpdated_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_CleanHUD_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_CacheStatsForAchievements_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_BattlerankRankupSoundEvent_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_BattlerankRankup_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_AwardMedal_Implementation(const FString& MedalUUID) {
}

void ABattalionPlayerControllerGMBase::Client_AttachSmokeLine_Implementation() {
}

void ABattalionPlayerControllerGMBase::Client_AddToLog_Implementation(const FString& Message) {
}

void ABattalionPlayerControllerGMBase::AttachGrenadeLine_Implementation() {
}

ABattalionPlayerControllerGMBase::ABattalionPlayerControllerGMBase() {
    this->SequencePlayer = NULL;
    this->SequenceAsset = NULL;
    this->WorldLoadPlayed = false;
    this->SwitchSidesUIDelay = 0.00f;
    this->ViewedGrenade = NULL;
    this->bSpectateBehindView = false;
    this->LastSpectatedPlayerState = NULL;
    this->LastSpectatedPlayerId = 0;
    this->bIsSpectator = false;
    this->bDisableMovementAndInputOnSpawn = false;
    this->UseProgress = 0.00f;
    this->SpawnViewerEnabled = false;
    this->CurrentRespawnTime = 0.00f;
    this->ProfilingPawnClass = NULL;
    this->PathFollowingComponent = CreateDefaultSubobject<UBattalionPathFollowingComponent>(TEXT("PathFollowingComponent"));
    this->CurrentPOI = NULL;
    this->DesiredPOI = NULL;
    this->BotOnLadder = false;
    this->BotFollowActor = NULL;
    this->BotTarget = NULL;
    this->BotPendingTarget = NULL;
    this->CurrentGameMode = NULL;
    this->IsBeingABot = false;
    this->DefaultNavigationFilterClass = NULL;
    this->PossessedBotPS = NULL;
    this->bSurrenderState = false;
    this->bCanOfferSurrender = true;
    this->IsApplicableForMatchBonus = false;
    this->KickWarningStartTime = 10.00f;
    this->bKickTimerVisible = false;
    this->ForceHideAllUIFlags = false;
    this->IsRecordingReplay = false;
    this->ShouldPlayVoiceLines = true;
    this->LastSpawnPoint = NULL;
    this->DefaultAkComp = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultAkComponent"));
    this->OcclusionCheckDelta = 0.10f;
    this->LevelUpEvent = NULL;
    this->ChallengeCompletedEvent = NULL;
    this->Battlerank_RankUpEvent = NULL;
    this->VoteStartedEvent = NULL;
    this->VoteCastEvent = NULL;
    this->MedalDataAsset = NULL;
    this->MedalEarnedSoundEvent = NULL;
    this->LookingAtFriendly = NULL;
    this->bIsWeaponVisible = true;
    this->bIsInThirdPerson = false;
    this->FlashCameraShakeInstancePtr = NULL;
}


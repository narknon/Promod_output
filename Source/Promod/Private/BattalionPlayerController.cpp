#include "BattalionPlayerController.h"
#include "Net/UnrealNetwork.h"

class UAkAudioEvent;

void ABattalionPlayerController::ToggleTeamSelect() {
}

void ABattalionPlayerController::Suicide() {
}

void ABattalionPlayerController::SetUnready_Implementation() {
}
bool ABattalionPlayerController::SetUnready_Validate() {
    return true;
}

void ABattalionPlayerController::SetReady_Implementation(uint8 TeamId, uint8 NationID, uint8 WeaponID) {
}
bool ABattalionPlayerController::SetReady_Validate(uint8 TeamId, uint8 NationID, uint8 WeaponID) {
    return true;
}

void ABattalionPlayerController::SetLookSensitivityZoomedZero(float Sens) {
}

void ABattalionPlayerController::SetGodMode(bool bEnable) {
}

void ABattalionPlayerController::ServerWeaponSelected_Implementation(uint8 WeaponID) {
}
bool ABattalionPlayerController::ServerWeaponSelected_Validate(uint8 WeaponID) {
    return true;
}

void ABattalionPlayerController::ServerUpdatePing_Implementation(float exactPing) {
}
bool ABattalionPlayerController::ServerUpdatePing_Validate(float exactPing) {
    return true;
}

void ABattalionPlayerController::ServerTeamSelected_Implementation(uint8 TeamId) {
}
bool ABattalionPlayerController::ServerTeamSelected_Validate(uint8 TeamId) {
    return true;
}

void ABattalionPlayerController::ServerSuicide_Implementation() {
}
bool ABattalionPlayerController::ServerSuicide_Validate() {
    return true;
}

void ABattalionPlayerController::ServerSay_Implementation(const FString& Msg) {
}
bool ABattalionPlayerController::ServerSay_Validate(const FString& Msg) {
    return true;
}

void ABattalionPlayerController::ServerRequestWeaponChange_Implementation() {
}
bool ABattalionPlayerController::ServerRequestWeaponChange_Validate() {
    return true;
}

void ABattalionPlayerController::ServerRequestTeamChange_Implementation() {
}
bool ABattalionPlayerController::ServerRequestTeamChange_Validate() {
    return true;
}

void ABattalionPlayerController::ServerModifyLoadoutClaim_Implementation(FBattalionLoadoutClaim ExistingClaim, FBattalionLoadoutClaim NewClaim, int32 Slot) {
}
bool ABattalionPlayerController::ServerModifyLoadoutClaim_Validate(FBattalionLoadoutClaim ExistingClaim, FBattalionLoadoutClaim NewClaim, int32 Slot) {
    return true;
}

void ABattalionPlayerController::ServerLoadoutConfirmed_Implementation() {
}
bool ABattalionPlayerController::ServerLoadoutConfirmed_Validate() {
    return true;
}

void ABattalionPlayerController::ServerCheat_Implementation(const FString& Msg) {
}
bool ABattalionPlayerController::ServerCheat_Validate(const FString& Msg) {
    return true;
}

void ABattalionPlayerController::ServerCancelTeamChange_Implementation() {
}
bool ABattalionPlayerController::ServerCancelTeamChange_Validate() {
    return true;
}

void ABattalionPlayerController::ServerBouncePing_Implementation(float Timestamp) {
}
bool ABattalionPlayerController::ServerBouncePing_Validate(float Timestamp) {
    return true;
}

void ABattalionPlayerController::ServerBattRestartPlayer_Implementation() {
}
bool ABattalionPlayerController::ServerBattRestartPlayer_Validate() {
    return true;
}

void ABattalionPlayerController::ServerAddLoadoutClaim_Implementation(FBattalionLoadoutClaim Claim, int32 Slot) {
}
bool ABattalionPlayerController::ServerAddLoadoutClaim_Validate(FBattalionLoadoutClaim Claim, int32 Slot) {
    return true;
}

void ABattalionPlayerController::Server_VoteForMapMode_Implementation(int32 Index) {
}
bool ABattalionPlayerController::Server_VoteForMapMode_Validate(int32 Index) {
    return true;
}

void ABattalionPlayerController::Server_SpawnPlayerFromSpectator_Implementation() {
}
bool ABattalionPlayerController::Server_SpawnPlayerFromSpectator_Validate() {
    return true;
}

void ABattalionPlayerController::Say(const FString& Msg) {
}

void ABattalionPlayerController::RecievedReadyResponse_Implementation(bool accepted) {
}

void ABattalionPlayerController::ReadyUp(uint8 TeamId, uint8 NationID, uint8 WeaponID) {
}

void ABattalionPlayerController::OnWeaponSelected(uint8 WeaponID) {
}

void ABattalionPlayerController::OnTeamSelected(uint8 TeamId) {
}

void ABattalionPlayerController::OnLoadoutConfirmed() {
}

bool ABattalionPlayerController::IsLastUsedInputXbox() const {
    return false;
}

bool ABattalionPlayerController::IsLastUsedInputGamepad() const {
    return false;
}

void ABattalionPlayerController::FindGoodView(const FVector& TargetLoc, bool bIsUpdate) {
}

void ABattalionPlayerController::ClientUpdateTeamLoadout_Implementation(int32 TeamId) {
}

void ABattalionPlayerController::ClientShowWeaponSelection_Implementation(int32 WeaponID) {
}

void ABattalionPlayerController::ClientShowTeamSelection_Implementation() {
}

void ABattalionPlayerController::ClientShowTeamLoadout_Implementation(int32 TeamId) {
}

void ABattalionPlayerController::ClientSendRoundEndEvent_Implementation(bool bIsWinner, int32 ExpendedTimeInSeconds) {
}

void ABattalionPlayerController::ClientReturnPing_Implementation(float Timestamp) {
}

void ABattalionPlayerController::ClientRequestedTeamChangeResult_Implementation(bool Result) {
}

void ABattalionPlayerController::ClientPostAudioEventReliable_Implementation(UAkAudioEvent* Sound) {
}

void ABattalionPlayerController::ClientPostAudioEvent_Implementation(UAkAudioEvent* Sound) {
}

void ABattalionPlayerController::ClientHideTeamSelection_Implementation() {
}

void ABattalionPlayerController::ClientHideTeamLoadout_Implementation() {
}

void ABattalionPlayerController::ClientHandleLastManEvent_Implementation() {
}

void ABattalionPlayerController::ClientGameStarted_Implementation() {
}

void ABattalionPlayerController::ClientAllowGameActions_Implementation(EGameActionsAllowed GameActionsAllowed) {
}

void ABattalionPlayerController::Client_RecogniseLoadoutClaim_Implementation(FBattalionLoadoutClaim Claim, int32 Slot, bool Force) {
}

void ABattalionPlayerController::Client_PostAudioEventAtLocation_Implementation(UAkAudioEvent* Sound, const FVector& Location) {
}

void ABattalionPlayerController::Client_OnPlayerSpawned_Implementation() {
}

void ABattalionPlayerController::Client_ClearPlayerNames_Implementation() {
}

bool ABattalionPlayerController::AreWeAServer() {
    return false;
}

void ABattalionPlayerController::ApplySettings() {
}

void ABattalionPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionPlayerController, JustJoined);
    DOREPLIFETIME(ABattalionPlayerController, ForceNoRespawn);
    DOREPLIFETIME(ABattalionPlayerController, bInfiniteClip);
    DOREPLIFETIME(ABattalionPlayerController, bHealthRegen);
    DOREPLIFETIME(ABattalionPlayerController, bGodMode);
}

ABattalionPlayerController::ABattalionPlayerController() {
    this->LookSensitivityZoomedZero = 1.00f;
    this->BattalionPlayerState = NULL;
    this->IsListeningForInput = false;
    this->JustJoined = true;
    this->LastUsedSpawnPoint = NULL;
    this->ForceNoRespawn = false;
    this->LastGoalYaw = 0.00f;
    this->LastPingCalcTime = 0.00f;
    this->MovementAndInputSpeedModifier = 1.00f;
    this->FinalViewTarget = NULL;
    this->bInfiniteClip = false;
    this->bHealthRegen = true;
    this->bGodMode = false;
    this->MatchWonSound = NULL;
    this->MatchLostSound = NULL;
    this->RoundWonSound = NULL;
    this->RoundLostSound = NULL;
    this->LastManSound = NULL;
    this->BombCollectedSound = NULL;
    this->BombDroppedSound = NULL;
    this->BombPlantedAllySound = NULL;
    this->BombPlantedEnemySound = NULL;
    this->DeathSpectatorPawn = NULL;
    this->BattInstance = NULL;
    this->BattSettings = NULL;
}


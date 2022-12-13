#include "BombPlayerController.h"

class ABattalionPlayerControllerGMBase;
class ABattalionCharacter;
class ABombMode_Zone;
class ABombPlayerState;
class APawn;

void ABombPlayerController::UpdateSpectatorHUDCarryingBomb_Implementation(uint8 SpectatingID, bool ViewTargetHasBomb) {
}

void ABombPlayerController::UpdateSpectatorHUDBombInteraction_Implementation(uint8 SpectatingID, bool Started, bool IsDefusing) {
}

void ABombPlayerController::UpdateHUDBombInteraction_Implementation(bool Started, bool IsDefusing) {
}

void ABombPlayerController::UpdateBombZoneMarkers(const FName CurrentMatchState) {
}

void ABombPlayerController::ServerViewBombSite_Implementation(ABattalionPlayerControllerGMBase* PC, ABombMode_Zone* Zone) {
}
bool ABombPlayerController::ServerViewBombSite_Validate(ABattalionPlayerControllerGMBase* PC, ABombMode_Zone* Zone) {
    return true;
}

void ABombPlayerController::Server_TakeBombFromBot_Implementation(APawn* PotentionBot) {
}
bool ABombPlayerController::Server_TakeBombFromBot_Validate(APawn* PotentionBot) {
    return true;
}

void ABombPlayerController::Server_OnStopUseBomb_Implementation() {
}
bool ABombPlayerController::Server_OnStopUseBomb_Validate() {
    return true;
}

void ABombPlayerController::Server_OnStopQuickUseBomb_Implementation() {
}
bool ABombPlayerController::Server_OnStopQuickUseBomb_Validate() {
    return true;
}

void ABombPlayerController::Server_OnStartUseBomb_Implementation() {
}
bool ABombPlayerController::Server_OnStartUseBomb_Validate() {
    return true;
}

void ABombPlayerController::Server_OnStartQuickUseBomb_Implementation() {
}
bool ABombPlayerController::Server_OnStartQuickUseBomb_Validate() {
    return true;
}

void ABombPlayerController::Server_OnFallenOutOfMap_Implementation() {
}
bool ABombPlayerController::Server_OnFallenOutOfMap_Validate() {
    return true;
}

void ABombPlayerController::Server_OnDropBomb_Implementation() {
}
bool ABombPlayerController::Server_OnDropBomb_Validate() {
    return true;
}

void ABombPlayerController::Client_TeamStoppedPlantingBomb_Implementation(ABombPlayerState* SubjectPlayerState) {
}

void ABombPlayerController::Client_TeamStoppedDefusingBomb_Implementation(ABombPlayerState* SubjectPlayerState) {
}

void ABombPlayerController::Client_TeamStartedPlantingBomb_Implementation(ABombPlayerState* SubjectPlayerState) {
}

void ABombPlayerController::Client_TeamStartedDefusingBomb_Implementation(ABombPlayerState* SubjectPlayerState) {
}

void ABombPlayerController::Client_TeamPlantedBomb_Implementation(ABombPlayerState* SubjectPlayerState) {
}

void ABombPlayerController::Client_TeamPickedUpBomb_Implementation(ABombPlayerState* SubjectPlayerState) {
}

void ABombPlayerController::Client_TeamDroppedBomb_Implementation(ABombPlayerState* SubjectPlayerState) {
}

void ABombPlayerController::Client_TeamDefusedBomb_Implementation(ABombPlayerState* SubjectPlayerState) {
}

void ABombPlayerController::Client_SetSwitchSidesUIDelay_Implementation(float InDelay) {
}

void ABombPlayerController::Client_SetQuickPlanting_Implementation(bool InPlanting) {
}

void ABombPlayerController::Client_SetPlanting_Implementation(bool InPlanting) {
}

void ABombPlayerController::Client_SetDefusing_Implementation(bool InDefusing) {
}

void ABombPlayerController::Client_SetDefuseDistance_Implementation(float InDefuseDistance) {
}

void ABombPlayerController::Client_SetAttackingNation_Implementation(float InAttackingNation) {
}

void ABombPlayerController::Client_ResetOverviewHUD_Implementation() {
}

void ABombPlayerController::Client_PlayerSpawned_Implementation(ABombPlayerState* SubjectPlayerState) {
}

void ABombPlayerController::Client_PickedUpBomb_Implementation() {
}

void ABombPlayerController::Client_InitTimers_Implementation(float InPlantTime, float InDefuseTime, float InQuickPlantTime) {
}

void ABombPlayerController::Client_FlashOverviewHUD_Implementation() {
}

void ABombPlayerController::Client_DroppedBomb_Implementation(ABattalionCharacter* Char) {
}

void ABombPlayerController::Client_DestroyAllBattCharacters_Implementation() {
}

ABombPlayerController::ABombPlayerController() {
    this->NearZone = NULL;
    this->NearBomb = NULL;
    this->ShowActionTakeBomb = false;
    this->ShowActionPossessBot = false;
    this->AttackingTeam = 0;
}


#include "CargoPlayerController.h"

void ACargoPlayerController::NetMulti_UpdateSafeZoneMovement_Implementation() {
}

void ACargoPlayerController::Client_UpdateUI_Implementation() {
}

void ACargoPlayerController::Client_UpdateSafeZones_Implementation(const FName CurrentMatchState, const int32 CurrentCheckpoint) {
}

void ACargoPlayerController::Client_UpdateCheckpointNotification_Implementation(ECargoNotificationState State) {
}

void ACargoPlayerController::Client_ShowTugOfWarVictory_Implementation(const float FinalProgress, const bool bWeWon, const float Duration) {
}

void ACargoPlayerController::Client_ShowTugOfWarOverview_Implementation() {
}

void ACargoPlayerController::Client_SetCargoVictoryState_Implementation(const FCargoResultData& OurResult, const FCargoResultData& TheirResult, const int32 WinningTeam, const int32 MyTeam, const bool bIsTimeRelevant, const float Duration) {
}

void ACargoPlayerController::Client_SetCargoResultState_Implementation(const FCargoResultData& Result, bool bWasPusher, bool bIsTimeRelevant) {
}

void ACargoPlayerController::Client_PlayCargoAdvantageAnimation_Implementation(const bool bNoAdvantage, const float TimeDifference, const float Advantage, const int32 AdvantageTeam, const float Duration) {
}

void ACargoPlayerController::Client_OnSuddenDeathStarted_Implementation() {
}

void ACargoPlayerController::Client_CheckpointReached_Implementation(int32 CheckpointIdx) {
}

void ACargoPlayerController::Client_CheckpointPipReached_Implementation(int32 CheckpointIdx, const int32 PipIdx) {
}

ACargoPlayerController::ACargoPlayerController() {
}


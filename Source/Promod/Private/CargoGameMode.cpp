#include "CargoGameMode.h"

int32 ACargoGameMode::GetCurrentCheckpoint() const {
    return 0;
}

float ACargoGameMode::GetCargoPathMaxTime() {
    return 0.0f;
}

float ACargoGameMode::CalculateTugOfWarAdvantage(const float TimeDifference) {
    return 0.0f;
}

ACargoGameMode::ACargoGameMode() {
    this->bCheckpointPipsCountForDraws = true;
    this->TugOfWarTitleTime = 0.00f;
    this->TugOfWarTransitionTime = 3.00f;
    this->TugOfWarPercentageAdvantageIncrementSize = 0.05f;
    this->TugOfWarPercentageAdvantageTickSize = 5.00f;
    this->TugOfWarMaxAdvantageCap = 0.30f;
    this->bTugOfWarFireupsAllowed = false;
    this->TugOfWarPassiveFireupMultiplier = 0.00f;
    this->TugOfWarTime = 120.00f;
    this->TugOfWarTime_SuddenDeath = 60.00f;
    this->TugOfWarSuddenDeathWinPercentage = 0.05f;
    this->TugOfWarRespawnTime = 1.00f;
    this->TugOfWarIdleTime = 5.00f;
    this->bUseTugOfWar = true;
    this->CargoVictoryTime = 10.00f;
    this->EndOfRoundMusicStart = 30.00f;
    this->FirstAttackerPayloadSpeed = 1.00f;
    this->PassivePayloadSpeed = 0.25f;
    this->MaxSpeedIncreaseAttackers = 2;
    this->ExtraAttackerPayloadSpeed = 0.50f;
    this->CargoIdleReverseTime = 5.00f;
    this->bAllowOvertime = true;
    this->TotalGracePeriod = 3.00f;
    this->MinimumGracePeriod = 3.00f;
    this->PayloadCloseTrigger = 0.90f;
    this->TugOfWarCloseTrigger = 0.75f;
    this->CargoGameState = NULL;
    this->CargoActor = NULL;
    this->TugOfWarActor = NULL;
    this->CargoPathActor = NULL;
    this->TugOfWarPathActor = NULL;
    this->CurrentCheckpoint = 0;
    this->LastRoundEndTime = 0.00f;
    this->TotalOvertimeUsed = 0.00f;
}


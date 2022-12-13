#include "LiveFireGameMode.h"

void ALiveFireGameMode::StartTraining() {
}

void ALiveFireGameMode::SpawnBot() {
}

bool ALiveFireGameMode::SetSpawnCount(int32 NewSpawnCount) {
    return false;
}

bool ALiveFireGameMode::SetDifficulty(ELiveFireTrainingDifficulty NewDifficulty) {
    return false;
}

bool ALiveFireGameMode::IsTrainingActive() const {
    return false;
}

void ALiveFireGameMode::EndTraining() {
}

ALiveFireGameMode::ALiveFireGameMode() {
    this->bUseRandomLocationForBotSpawning = false;
    this->CurrentDifficulty = ELiveFireTrainingDifficulty::EASY;
    this->BotClass = NULL;
    this->SpawnCount = 20;
    this->NumBotsSpawned = 0;
}


#include "BlitzGameMode.h"

ABlitzGameMode::ABlitzGameMode() {
    this->CurrentStageID = 0;
    this->bUseRandomStages = true;
    this->BombRespawnTime = 30.00f;
    this->BombRespawnTimeLeft = -1.00f;
    this->bShouldBombRespawn = false;
    this->BlitzGameState = NULL;
}


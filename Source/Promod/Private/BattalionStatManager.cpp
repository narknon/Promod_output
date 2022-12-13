#include "BattalionStatManager.h"

UBattalionStatManager::UBattalionStatManager() {
    this->BattInstance = NULL;
    this->PFPlayerData = NULL;
    this->PFPlayerCache = NULL;
    this->UpdateFrequency = 60.00f;
    this->UpdateClientFrequency = 1.00f;
}


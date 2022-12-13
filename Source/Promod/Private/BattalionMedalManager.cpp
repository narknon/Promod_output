#include "BattalionMedalManager.h"

void UBattalionMedalManager::OnReceivedPlayerData(const FPFPlayerId& PlayerId, const TArray<FPFPlayerData>& Data) {
}

UBattalionMedalManager::UBattalionMedalManager() {
    this->BattInstance = NULL;
    this->PFPlayerData = NULL;
    this->PFPlayerCache = NULL;
    this->GameMode = NULL;
    this->GameState = NULL;
    this->UpdateFrequency = 60.00f;
}


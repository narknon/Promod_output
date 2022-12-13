#include "PFServerSlotManager.h"

bool UPFServerSlotManager::TryGetPlayerInfoFromTitleId(const FString& TitlePlayerId, FPFPlayerInfo& OutInfo) {
    return false;
}

bool UPFServerSlotManager::TryGetPlayerInfo(const FPFPlayerId& PlayerId, FPFPlayerInfo& OutInfo) {
    return false;
}

bool UPFServerSlotManager::IsPlayerInSlotFromTitleId(const FString& TitlePlayerId) {
    return false;
}

bool UPFServerSlotManager::IsPlayerInSlot(const FPFPlayerId& PlayerId) {
    return false;
}

int32 UPFServerSlotManager::GetNumFreeSlots() {
    return 0;
}

int32 UPFServerSlotManager::GetNumFilledSlots() {
    return 0;
}

bool UPFServerSlotManager::GetMatchInfo(FPFMatchInfo& OutMatchInfo) const {
    return false;
}

TMap<FString, FPFPlayerInfo> UPFServerSlotManager::GetFilledSlots() {
    return TMap<FString, FPFPlayerInfo>();
}

UPFServerSlotManager::UPFServerSlotManager() {
    this->PlayFabSubsystem = NULL;
}


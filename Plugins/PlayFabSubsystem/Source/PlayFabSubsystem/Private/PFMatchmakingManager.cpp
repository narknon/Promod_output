#include "PFMatchmakingManager.h"

void UPFMatchmakingManager::StopMatchmaking() {
}

bool UPFMatchmakingManager::StartSoloMatchmaking(const FString& InBaseQueueName, const FPFPlayerInfo& InPlayerInfo) {
    return false;
}

bool UPFMatchmakingManager::StartPartyMatchmaking(const FString& InBaseQueueName, const FPFPlayerInfo& InPartyLeaderInfo, const TArray<FPFPlayerId>& InPartyMemberIds, const bool bCrossPlay) {
    return false;
}

void UPFMatchmakingManager::OnReceivedServerBuildId(const FString& InServerBuildId) {
}

void UPFMatchmakingManager::OnLoginCompleted(int32 ControllerId, bool bSuccess) {
}

void UPFMatchmakingManager::OnCalculatedRegionLatencies(const TArray<FRegionLatency>& RegionLatencies, bool bSuccess) {
}

bool UPFMatchmakingManager::JoinPartyMatchmaking(const FString& InBaseQueueName, const FPFPlayerInfo& InPlayerInfo, const FString& InMatchmakingTicketId) {
    return false;
}

UPFMatchmakingManager::UPFMatchmakingManager() {
    this->PlayFabSubsystem = NULL;
    this->LonelyMatchmakerThreshold = 60.00f;
}


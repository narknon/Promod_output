#include "PFPlayerDataManager.h"

void UPFPlayerDataManager::ServerSetPlayerStatistics(const FPFPlayerId& PlayerId, const TMap<FString, int32>& Stats, bool ForceSet) {
}

void UPFPlayerDataManager::ServerSetPlayerReadOnlyData(const FPFPlayerId& PlayerId, const TMap<FString, FString>& Data, bool bReadableByOthers) {
}

void UPFPlayerDataManager::ServerSetPlayerData(const FPFPlayerId& PlayerId, const TMap<FString, FString>& Data, bool bReadableByOthers) {
}

void UPFPlayerDataManager::ServerGetPlayerStatistics(const FPFPlayerId& PlayerId, const TArray<FString>& StatNames) {
}

void UPFPlayerDataManager::ServerGetPlayerReadOnlyData(const FPFPlayerId& PlayerId, const TArray<FString>& Keys) {
}

void UPFPlayerDataManager::ServerGetPlayerData(const FPFPlayerId& PlayerId, const TArray<FString>& Keys) {
}

void UPFPlayerDataManager::ServerGetLeaderboard(int32 MaxResultsCount, const FString& StatName, int32 StartPosition, int32 Version) {
}

void UPFPlayerDataManager::ServerGetFriendLeaderboard(const FPFPlayerId& PlayerId, int32 MaxResultsCount, const FString& StatName, int32 StartPosition, int32 Version, const FString& XboxToken) {
}

void UPFPlayerDataManager::ClientSetPlayerStatistics(const TMap<FString, int32>& Stats) {
}

void UPFPlayerDataManager::ClientSetPlayerData(const TMap<FString, FString>& Data, bool bReadableByOthers) {
}

void UPFPlayerDataManager::ClientGetTitleData(const TArray<FString>& Keys) {
}

void UPFPlayerDataManager::ClientGetPlayerStatisticVersions(const FString& StatName) {
}

void UPFPlayerDataManager::ClientGetPlayerStatistics(const TArray<FString>& StatNames) {
}

void UPFPlayerDataManager::ClientGetPlayerReadOnlyData(const TArray<FString>& Keys, int32 Version) {
}

void UPFPlayerDataManager::ClientGetPlayerData(const TArray<FString>& Keys, int32 Version) {
}

void UPFPlayerDataManager::ClientGetLeaderboardAroundPlayer(const FPFPlayerId& PlayerIdToCenterAround, int32 MaxResultsCount, const FString& StatName, int32 Version) {
}

void UPFPlayerDataManager::ClientGetLeaderboard(int32 MaxResultsCount, const FString& StatName, int32 StartPosition, int32 Version) {
}

void UPFPlayerDataManager::ClientGetFriendLeaderboardAroundPlayer(const FPFPlayerId& PlayerIdToCenterAround, int32 MaxResultsCount, const FString& StatName, int32 Version, const FString& XboxToken) {
}

void UPFPlayerDataManager::ClientGetFriendLeaderboard(int32 MaxResultsCount, const FString& StatName, int32 StartPosition, int32 Version, const FString& XboxToken) {
}

UPFPlayerDataManager::UPFPlayerDataManager() {
    this->PlayFabSubsystem = NULL;
    this->bIsServer = false;
}


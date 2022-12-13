#include "BattalionOnline.h"

class ABattalionPlayerState;

void UBattalionOnline::ToggleDebugMatchmakingRequest() {
}

void UBattalionOnline::SubmitPlayerStat(const FString& StatName, int32 StatValue) {
}

void UBattalionOnline::StopMatchmaking() {
}

void UBattalionOnline::StartMatchmaking(EMatchmakingQueue Queue) {
}

void UBattalionOnline::ShowPlayerProfile(const FUniqueNetIdRepl& UniqueID) {
}

void UBattalionOnline::SetPlayerSkinEquipped(EWeaponType Type, const FString& SkinId) {
}

void UBattalionOnline::Server_ReportPlayer_Implementation(ABattalionPlayerState* Requestor, ABattalionPlayerState* Reportee, const FString& ReportReason) {
}

void UBattalionOnline::Server_OnTimedOutPlayers() {
}

void UBattalionOnline::Server_OnMatchStarted() {
}

void UBattalionOnline::RequestStatsForPlayer(TArray<FString> StatNames) {
}

void UBattalionOnline::RequestPlayerStatsForMapPacks(TArray<FString> PackNames) {
}

void UBattalionOnline::RequestPersonalBestStatsForPlayer(TArray<FString>& StatNames) {
}

void UBattalionOnline::RequestMapStatsForPlayer(const FString& MapName, bool IsJumper) {
}

void UBattalionOnline::RequestLeaderboardForStatAroundPlayer(int32 MaxResultsCount, const FString& StatName) {
}

void UBattalionOnline::RequestLeaderboardForStat(int32 StartPosition, int32 MaxResultsCount, const FString& StatName) {
}

void UBattalionOnline::RequestFriendLeaderboardAroundPlayer(int32 MaxResultsCount, const FString& StatName) {
}

FMapStatList UBattalionOnline::RequestCachedMapLeaderboard(EMapPackGamemode GameMode, const FString& MapUUID) {
    return FMapStatList{};
}

void UBattalionOnline::OutputToLog(const FString& String) {
}

void UBattalionOnline::OpenUrlThroughSteam(const FString& URL) {
}

void UBattalionOnline::OpenSteamStorePage() {
}

void UBattalionOnline::OnReceivedPlayerStats(const FPFPlayerId& PlayerId, const TArray<FPFPlayerStat>& Stats) {
}

void UBattalionOnline::OnReceivedPlayerData(const FPFPlayerId& PlayerId, const TArray<FPFPlayerData>& Data) {
}

void UBattalionOnline::OnPartyMatchmakingReadyToJoin(const FString& MatchmakingTicketId, const FString& BaseQueueName, bool bCrossPlay) {
}

void UBattalionOnline::OnMatchmakingStopped() {
}

void UBattalionOnline::OnMatchmakingFailed(int32 ErrorCode, const FString& ErrorMessage) {
}

void UBattalionOnline::OnMatchmakingCompleted(const TArray<FPFPlayerInfo>& MatchMembers, const FString& ServerURL) {
}

void UBattalionOnline::LoginSucceeded(int32 ControllerId, bool bSuccess) {
}

bool UBattalionOnline::IsMatchmaking() const {
    return false;
}

bool UBattalionOnline::IsLocalPlayer(const FUniqueNetIdRepl& OtherPlayerID) {
    return false;
}

bool UBattalionOnline::IsCrossPlatformNetId(const FUniqueNetIdRepl& PlatformId) {
    return false;
}

bool UBattalionOnline::IsCrossPlatform(EOnlinePlatform PlatformType) {
    return false;
}

bool UBattalionOnline::GetPurchasedPremiumTier() {
    return false;
}

FProScoreInfo UBattalionOnline::GetProScoreInfo(int32 ProScore) {
    return FProScoreInfo{};
}

bool UBattalionOnline::GetPlayerSkinEquipped(EWeaponType Type, const FString& SkinId) {
    return false;
}

FString UBattalionOnline::GetPlayerName() {
    return TEXT("");
}

EOnlinePlatform UBattalionOnline::GetPlatformFromNetId(const FUniqueNetIdRepl& PlatformId) {
    return EOnlinePlatform::None;
}

bool UBattalionOnline::GetHasKickstarterDLC() {
    return false;
}

bool UBattalionOnline::GetDisplayPurchasePremiumTier() {
    return false;
}

int32 UBattalionOnline::GetCurrentXP() {
    return 0;
}

int32 UBattalionOnline::GetCurrentProScore() {
    return 0;
}

int32 UBattalionOnline::GetCurrentPlayerLevel() {
    return 0;
}

int32 UBattalionOnline::GetCachedStat(const FString& StatName) {
    return 0;
}

FString UBattalionOnline::GetCachedSkin(EWeaponType Type) {
    return TEXT("");
}

int32 UBattalionOnline::GetCachedMedalProgress(const FString& MedalName) {
    return 0;
}

void UBattalionOnline::EnqueueMapPackRequest(TArray<FString> StatNames) {
}

bool UBattalionOnline::AreCrossPlatformNetIds(const FUniqueNetIdRepl& PlatformIdA, const FUniqueNetIdRepl& PlatformIdB) {
    return false;
}

bool UBattalionOnline::AreCrossPlatform(EOnlinePlatform PlatformTypeA, EOnlinePlatform PlatformTypeB) {
    return false;
}

UBattalionOnline::UBattalionOnline() {
    this->XPMultiplier = 1;
    this->UseFriendlyNamesForBots = false;
    this->LeaderboardRetrieved = true;
    this->StatsRetrieved = false;
    this->BattInstance = NULL;
    this->BattSettings = NULL;
    this->PFPlayerData = NULL;
    this->PFPlayerCache = NULL;
    this->PFMatchmaking = NULL;
    this->PlayerNameOverridden = false;
    this->OverriddenPlayerName = TEXT("N/A");
}


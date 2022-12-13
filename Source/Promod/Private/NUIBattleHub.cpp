#include "NUIBattleHub.h"

class UWeaponNameDataAsset;

TArray<FSkinEntity> UNUIBattleHub::SortSkins(TArray<FSkinEntity> skins, UWeaponNameDataAsset* WeaponNames) {
    return TArray<FSkinEntity>();
}









void UNUIBattleHub::SendLeaderboardRequest(int32 LeaderboardPos, int32 LeaderboardPageLimit, bool FriendsOnly) {
}

void UNUIBattleHub::SendLeaderboardProfileRequest(const FString& PlatformUserId) {
}

void UNUIBattleHub::SendLeaderboardAroundPlayerRequest(int32 LeaderboardPageLimit, bool FriendsOnly) {
}

void UNUIBattleHub::RefreshRewardsTab_Implementation() {
}

void UNUIBattleHub::RefreshOverviewTab_Implementation() {
}

void UNUIBattleHub::RefreshMedalsTab_Implementation() {
}

void UNUIBattleHub::RefreshLeaderboardsTab_Implementation() {
}

void UNUIBattleHub::RefreshArmouryTab_Implementation() {
}














void UNUIBattleHub::OnTabChanged(int32 tabIndex) {
}

void UNUIBattleHub::OnSubtabChanged(int32 subtabIndex) {
}



int32 UNUIBattleHub::GetSavedTab() {
    return 0;
}

int32 UNUIBattleHub::GetSavedSubTab() {
    return 0;
}

FString UNUIBattleHub::GetFloatAsStringWithPrecision(float TheFloat, int32 Precision, bool IncludeLeadingZero) {
    return TEXT("");
}




UNUIBattleHub::UNUIBattleHub() {
    this->TabFirstDelay = 0.50f;
    this->TabAdditionalDelay = 0.25f;
    this->Reward_DpadFirstDelay = 0.50f;
    this->Reward_DpadAdditionalDelay = 0.25f;
    this->Armory_DpadFirstDelay = 0.50f;
    this->Armory_DpadAdditionalDelay = 0.25f;
    this->Medals_DpadFirstDelay = 0.50f;
    this->Medals_DpadAdditionalDelay = 0.25f;
    this->Stats_DpadFirstDelay = 0.50f;
    this->Stats_DpadAdditionalDelay = 0.25f;
    this->Leaderboards_DpadFirstDelay = 0.50f;
    this->Leaderboards_DpadAdditionalDelay = 0.25f;
    this->LeftStickVerticalDeadZone = 0.30f;
    this->LeftStickHorizontalDeadZone = 0.30f;
}


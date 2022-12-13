#include "BattalionChallengeManager.h"

FChallengeInfo UBattalionChallengeManager::GeWeeklyChallegeInfo() {
    return FChallengeInfo{};
}

FText UBattalionChallengeManager::GetFormattedWeeklyTimeRemaining() {
    return FText::GetEmpty();
}

FText UBattalionChallengeManager::GetFormattedDailyTimeRemaining() {
    return FText::GetEmpty();
}

FChallengeInfo UBattalionChallengeManager::GetDailyChallegeInfo(int32 challengeIndex) {
    return FChallengeInfo{};
}

void UBattalionChallengeManager::CheckValidChallenges() {
}

UBattalionChallengeManager::UBattalionChallengeManager() {
    this->BattInstance = NULL;
    this->PFPlayerCache = NULL;
}


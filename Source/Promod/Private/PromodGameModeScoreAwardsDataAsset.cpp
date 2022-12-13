#include "PromodGameModeScoreAwardsDataAsset.h"

void UPromodGameModeScoreAwardsDataAsset::ResetMapToDefaults() {
}

int32 UPromodGameModeScoreAwardsDataAsset::GetScoreFromAwardType(EScoreAwardType Type) {
    return 0;
}

float UPromodGameModeScoreAwardsDataAsset::GetFireUpScoreFromAwardType(EScoreAwardType Type) {
    return 0.0f;
}

UPromodGameModeScoreAwardsDataAsset::UPromodGameModeScoreAwardsDataAsset() {
    this->TimedObjectiveAwardTickInterval = 6.00f;
    this->MaxTimedObjectiveAward = 50;
}


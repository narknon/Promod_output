#include "BattalionMedalsDataAsset.h"

FText UBattalionMedalsDataAsset::GetRarityDisplayText(EBattalionMedalRarity Rarity) {
    return FText::GetEmpty();
}

FBattalionMedalEntity UBattalionMedalsDataAsset::GetMedalData(const FString& MedalUUID) {
    return FBattalionMedalEntity{};
}

UBattalionMedalsDataAsset::UBattalionMedalsDataAsset() {
}


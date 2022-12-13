#include "CrateDataAsset.h"

FCrateEntity UCrateDataAsset::GetPrevCrate(const FCrateEntity currentCrate) {
    return FCrateEntity{};
}

FCrateEntity UCrateDataAsset::GetNextCrate(const FCrateEntity currentCrate) {
    return FCrateEntity{};
}

FCrateEntity UCrateDataAsset::GetFirstCrate() {
    return FCrateEntity{};
}

FCrateEntity UCrateDataAsset::GetCrateFromName(const FString& Name) {
    return FCrateEntity{};
}

FCrateEntity UCrateDataAsset::GetCrate(const FString& ID) {
    return FCrateEntity{};
}

void UCrateDataAsset::ClearContents(const FString& crateId) {
}

void UCrateDataAsset::AddToCrateContents(const FString& crateId, TArray<FString> Contents) {
}

UCrateDataAsset::UCrateDataAsset() {
}


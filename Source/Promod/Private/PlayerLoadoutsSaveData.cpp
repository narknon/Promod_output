#include "PlayerLoadoutsSaveData.h"

void UPlayerLoadoutsSaveData::UpdateLoadout(FLoadoutData UpdatedLoadout) {
}

void UPlayerLoadoutsSaveData::RemoveLoadoutById(const FGuid& Guid) {
}

void UPlayerLoadoutsSaveData::RemoveLoadoutBasedOnName(FLoadoutData LoadoutToRemove) {
}

void UPlayerLoadoutsSaveData::RemoveLoadoutAtIndex(int32 LoadoutToRemove) {
}

void UPlayerLoadoutsSaveData::RemoveLoadout(FLoadoutData LoadoutToRemove) {
}

TArray<FLoadoutData> UPlayerLoadoutsSaveData::GetLoadouts() {
    return TArray<FLoadoutData>();
}

int32 UPlayerLoadoutsSaveData::GetLoadoutIndexFromName(const FString& LoadoutName) {
    return 0;
}

FLoadoutData UPlayerLoadoutsSaveData::GetLoadoutBasedOnName(const FString& LoadoutName) {
    return FLoadoutData{};
}

FLoadoutData UPlayerLoadoutsSaveData::GetFavouritedLoadout() {
    return FLoadoutData{};
}

void UPlayerLoadoutsSaveData::ClearAllLoadouts() {
}

int32 UPlayerLoadoutsSaveData::AddLoadout(FLoadoutData LoadoutToAdd) {
    return 0;
}

UPlayerLoadoutsSaveData::UPlayerLoadoutsSaveData() {
}


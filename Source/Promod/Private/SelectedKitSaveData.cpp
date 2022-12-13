#include "SelectedKitSaveData.h"

void USelectedKitSaveData::SaveLoadoutChosenGunKitMap(EClassName InClassName, FLoadoutData InLoadoutData) {
}

void USelectedKitSaveData::SaveFireupForClass(EClassName InClassName, EFireUpType Fireup) {
}

EParentModKit USelectedKitSaveData::GetSavedModkitForArchetype(EWeaponArchetype Archetype) {
    return EParentModKit::Default;
}

FLoadoutData USelectedKitSaveData::GetSavedLoadoutChosenGunKitMap(EClassName InClassName, EWeaponArchetype DefaultPrimaryArchetype) {
    return FLoadoutData{};
}

EFireUpType USelectedKitSaveData::GetFireUpForClass(EClassName InClassName) {
    return EFireUpType::None;
}

USelectedKitSaveData::USelectedKitSaveData() {
}


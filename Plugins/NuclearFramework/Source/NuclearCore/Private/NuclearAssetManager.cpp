#include "NuclearAssetManager.h"

class UObject;

ENuclearAssetResult UNuclearAssetManager::GetSoftObject(const TSoftObjectPtr<UObject>& SoftObjectReference, UClass* ObjectClass, UObject*& Object) {
    return ENuclearAssetResult::Valid;
}

UNuclearAssetManager::UNuclearAssetManager() {
}


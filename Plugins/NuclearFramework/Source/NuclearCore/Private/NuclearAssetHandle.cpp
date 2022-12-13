#include "NuclearAssetHandle.h"

class UNuclearAsset;

UNuclearAsset* UNuclearAssetHandle::GetAsset() const {
    return NULL;
}

UNuclearAssetHandle::UNuclearAssetHandle() {
    this->Asset = NULL;
}


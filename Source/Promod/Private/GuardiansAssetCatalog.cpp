#include "GuardiansAssetCatalog.h"
#include "Templates/SubclassOf.h"

class UGuardiansAsset;
class UGuardiansMapAsset;

void UGuardiansAssetCatalog::ReleaseAsset(UGuardiansAsset* Asset) {
}

ENuclearAssetResult UGuardiansAssetCatalog::AcquireMapAsset(const FString& Map, UGuardiansMapAsset*& Asset) {
    return ENuclearAssetResult::Valid;
}

ENuclearAssetResult UGuardiansAssetCatalog::AcquireAssetByTag(const TSubclassOf<UGuardiansAsset> AssetClass, const FName& TagName, const FGuardiansAssetTagPredicate& Predicate, UGuardiansAsset*& Asset) {
    return ENuclearAssetResult::Valid;
}

UGuardiansAssetCatalog::UGuardiansAssetCatalog() {
}


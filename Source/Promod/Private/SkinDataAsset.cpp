#include "SkinDataAsset.h"

class UMaterialInstance;
class UTexture2D;
class UObject;

void USkinDataAsset::ReplaceSkinTexture(const FString& SkinId, EWeaponType WeaponType, UTexture2D* NewTexture) {
}

void USkinDataAsset::MarkObjectDirty(UObject* TextureAsset) {
}

FSkinEntity USkinDataAsset::GetSkinFromIDOnly(const FString& ID) {
    return FSkinEntity{};
}

FSkinEntity USkinDataAsset::GetSkinFromIDAndWeaponType(const FString& ID, EWeaponType WeaponType) {
    return FSkinEntity{};
}

TArray<FSkinEntity> USkinDataAsset::GetSkinEntriesForWeapon(EWeaponType WeaponType, bool IgnoreLevelZeroSkins, bool IncludeKickstarter) {
    return TArray<FSkinEntity>();
}

TArray<FSkinEntity> USkinDataAsset::GetSkinEntriesForUnlockLevel(int32 UnlockLevel) {
    return TArray<FSkinEntity>();
}

FSkinEntity USkinDataAsset::GetSkin(const FString& ID, EWeaponType Type) {
    return FSkinEntity{};
}

TArray<FSkinEntity> USkinDataAsset::GetNextUnlockEntries(int32 CurrentLevel) {
    return TArray<FSkinEntity>();
}

UMaterialInstance* USkinDataAsset::GetMaterialFromPath(FSoftObjectPath skin) {
    return NULL;
}

FText USkinDataAsset::GetConditionDisplayText(EWeaponCondition WeaponCondition) {
    return FText::GetEmpty();
}

void USkinDataAsset::CleanWeaponSkinNames() {
}

USkinDataAsset::USkinDataAsset() {
    this->RarityColoursDataAsset = NULL;
}


#include "PromodWeaponArchetypeDataAsset.h"
#include "Templates/SubclassOf.h"

class ABattalionWeapon;

FString UPromodWeaponArchetypeDataAsset::GetWeaponNameFromParentModKit(EParentModKit ParentModKit) {
    return TEXT("");
}

TSubclassOf<ABattalionWeapon> UPromodWeaponArchetypeDataAsset::GetWeaponFromParentModKit(EParentModKit ParentModKit) {
    return NULL;
}

TSubclassOf<ABattalionWeapon> UPromodWeaponArchetypeDataAsset::GetWeaponByName(const FString& WeaponName) {
    return NULL;
}

UPromodWeaponArchetypeDataAsset::UPromodWeaponArchetypeDataAsset() {
    this->WeaponArchetype = EWeaponArchetype::SMG;
}


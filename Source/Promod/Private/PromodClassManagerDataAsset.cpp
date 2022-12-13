#include "PromodClassManagerDataAsset.h"
#include "Templates/SubclassOf.h"

class ABattalionWeapon;
class UPromodClassDataAsset;

FString UPromodClassManagerDataAsset::GetWeaponNameFromArchetypeAndModKit(EWeaponArchetype Archetype, EParentModKit ModKit) {
    return TEXT("");
}

TSubclassOf<ABattalionWeapon> UPromodClassManagerDataAsset::GetWeaponFromName(const FString& WeaponName) {
    return NULL;
}

TSubclassOf<ABattalionWeapon> UPromodClassManagerDataAsset::GetWeaponFromArchetypeAndModKit(EWeaponArchetype Archetype, EParentModKit ModKit) {
    return NULL;
}

EWeaponArchetype UPromodClassManagerDataAsset::GetDefaultWeaponArchetypeForClass(EClassName LoadoutClass) {
    return EWeaponArchetype::SMG;
}

UPromodClassDataAsset* UPromodClassManagerDataAsset::GetClassDataAsset(EClassName ClassNameToFind) {
    return NULL;
}

UPromodClassManagerDataAsset::UPromodClassManagerDataAsset() {
    this->AllFireUps = NULL;
}


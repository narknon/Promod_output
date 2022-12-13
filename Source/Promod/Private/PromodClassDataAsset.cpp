#include "PromodClassDataAsset.h"
#include "Templates/SubclassOf.h"

class ABattalionWeapon;
class UPromodFireUpDataAsset;

FString UPromodClassDataAsset::GetWeaponNameFromArchetypeAndModKit(EWeaponArchetype Archetype, EParentModKit ModKit) {
    return TEXT("");
}

TSubclassOf<ABattalionWeapon> UPromodClassDataAsset::GetWeaponFromName(const FString& WeaponName) {
    return NULL;
}

TSubclassOf<ABattalionWeapon> UPromodClassDataAsset::GetWeaponFromArchetypeAndModKit(EWeaponArchetype Archetype, EParentModKit ModKit) {
    return NULL;
}

UPromodFireUpDataAsset* UPromodClassDataAsset::GetFireUpDataAsset(EFireUpType FireUpType) {
    return NULL;
}

UPromodClassDataAsset::UPromodClassDataAsset() {
    this->ClassName = EClassName::ASSAULT;
    this->BodyMesh3P_Friendly = NULL;
    this->BodyMesh3P_Enemy = NULL;
    this->HeadMesh3P_Friendly = NULL;
    this->HeadMesh3P_Enemy = NULL;
}


#include "SkinEntity.h"

FSkinEntity::FSkinEntity() {
    this->Weapon = EWeaponType::AK74u;
    this->Texture = NULL;
    this->Rarity = ESkinRarity::Stock;
    this->Condition = EWeaponCondition::War_Torn;
    this->ExcludeWhenViewingUnowned = false;
    this->UnlockLevel = 0;
    this->IsPremium = false;
    this->IsKickstarter = false;
}


#include "LoadoutInitializer.h"

FLoadoutInitializer::FLoadoutInitializer() {
    this->PrimaryWeapon = NULL;
    this->SecondaryWeapon = NULL;
    this->MeleeWeapon = NULL;
    this->bAllowedGrenades = false;
    this->SlotToEquip = ESlotType::Primary;
    this->bMulticast = false;
    this->bUseQuickEquip = false;
}


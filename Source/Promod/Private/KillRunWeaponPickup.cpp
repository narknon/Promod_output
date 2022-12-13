#include "KillRunWeaponPickup.h"
#include "AkComponent.h"


AKillRunWeaponPickup::AKillRunWeaponPickup() {
    this->DefaultAkComp = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultAkComponent"));
    this->SaveData = NULL;
    this->KitSaveData = NULL;
}


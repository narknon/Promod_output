#include "WeaponAudioData.h"

FWeaponAudioData::FWeaponAudioData() {
    this->bLoopedFireSound = false;
    this->ADSInSound = NULL;
    this->ADSOutSound = NULL;
    this->FireSound1pSingle = NULL;
    this->FireSound3pSingle = NULL;
    this->FireSound1pLoop = NULL;
    this->FireSound3pLoop = NULL;
    this->FireFinishSound1p = NULL;
    this->FireFinishSound3p = NULL;
    this->OutOfAmmoSound = NULL;
    this->ReloadSound = NULL;
    this->FinalShotSound = NULL;
    this->FinalShotSound3P = NULL;
    this->RechamberSound = NULL;
    this->EquipSound = NULL;
    this->HolsterSound = NULL;
    this->CancelReloadEvent = NULL;
}


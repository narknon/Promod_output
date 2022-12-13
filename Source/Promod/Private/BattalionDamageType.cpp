#include "BattalionDamageType.h"

UBattalionDamageType::UBattalionDamageType() {
    this->WeaponType = EWeaponType::AK74u;
    this->HitForceFeedback = NULL;
    this->KilledForceFeedback = NULL;
    this->HeadshotHitmarkerSound = false;
    this->IsGrenade = false;
    this->IsHeadshot = false;
    this->IsWallbang = false;
    this->IsMelee = false;
    this->IsPrimary = false;
    this->IsBoltAction = false;
    this->IsSniper = false;
}


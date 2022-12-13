#include "GrenadeThrowInfo.h"

FGrenadeThrowInfo::FGrenadeThrowInfo() {
    this->GrenadeMeshFP = NULL;
    this->FirstPersonMaterial = NULL;
    this->GrenadeMeshTP = NULL;
    this->GrenadeMeshClass = NULL;
    this->OffensiveUtilType = EGrenadeType::Frag;
    this->TacticalUtilType = ESpecialGrenadeType::SGT_WhiteSmoke;
    this->bOffensiveGrenade = false;
    this->GrenadePrepTime = 0.00f;
}


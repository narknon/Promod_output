#include "PromodWorldSettings.h"

APromodWorldSettings::APromodWorldSettings() {
    this->bAutoAssignTeam = true;
    this->AssignedTeam = 0;
    this->bHasDefaultClass = true;
    this->AssignedClass = 0;
    this->DefaultSpecialGrenade = ESpecialGrenadeType::SGT_WhiteSmoke;
}


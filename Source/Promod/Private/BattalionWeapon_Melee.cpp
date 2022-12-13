#include "BattalionWeapon_Melee.h"

void ABattalionWeapon_Melee::ServerDisplayMeleeAttack_Implementation() {
}
bool ABattalionWeapon_Melee::ServerDisplayMeleeAttack_Validate() {
    return true;
}

ABattalionWeapon_Melee::ABattalionWeapon_Melee() {
    this->OffhandAnimClass = NULL;
}


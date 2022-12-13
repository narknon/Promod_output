#include "KillRunGrenadePickup.h"

class ABattalionGrenade;

void AKillRunGrenadePickup::SetGrenade(ABattalionGrenade* NewGrenade) {
}

AKillRunGrenadePickup::AKillRunGrenadePickup() {
    this->bUnlimitedSupply = false;
    this->NumSupply = 1;
    this->Grenade = NULL;
    this->GrenadeClass = NULL;
}


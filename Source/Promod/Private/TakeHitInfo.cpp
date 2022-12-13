#include "TakeHitInfo.h"

FTakeHitInfo::FTakeHitInfo() {
    this->ActualDamage = 0.00f;
    this->DamageTypeClass = NULL;
    this->DamageEventClassID = 0;
    this->bKilled = false;
    this->TimeOfHit = 0.00f;
    this->EnsureReplicationByte = 0;
}


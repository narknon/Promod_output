#include "BattalionStunGrenade.h"

void ABattalionStunGrenade::NetMulti_Stun_Implementation(const TArray<FStunResult>& StunedCharacters) {
}

ABattalionStunGrenade::ABattalionStunGrenade() {
    this->DecalMaterialPtr = NULL;
    this->DecalLifeTime = 5.00f;
    this->ObjectLifeSpan = 5.00f;
    this->bShowDebugStunRange = false;
}


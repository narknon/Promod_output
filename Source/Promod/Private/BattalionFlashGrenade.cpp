#include "BattalionFlashGrenade.h"

void ABattalionFlashGrenade::NetMulti_Flash_Implementation(const TArray<FFlashResult>& FlashedCharacters) {
}

ABattalionFlashGrenade::ABattalionFlashGrenade() {
    this->DirectionFactorInfluencePercentage = 0.75f;
    this->DecalMaterialPtr = NULL;
    this->DecalLifeTime = 5.00f;
    this->ObjectLifeSpan = 5.00f;
    this->bShowDebugFlashRange = false;
}


#include "LevelSelectMapEntity.h"

FLevelSelectMapEntity::FLevelSelectMapEntity() {
    this->UnHoveredTexture = NULL;
    this->HoveredTexture = NULL;
    this->LoadoutClassType = EClassName::ASSAULT;
    this->StarUnlockRequirement = 0;
}


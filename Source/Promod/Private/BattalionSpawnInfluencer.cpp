#include "BattalionSpawnInfluencer.h"

ABattalionSpawnInfluencer::ABattalionSpawnInfluencer() {
    this->RootSceneComponent = NULL;
    this->TeamToInfluence = 0;
    this->InfluenceDistance = 0.00f;
    this->InfluenceValue = 0.00f;
    this->InfluenceExponent = 1.00f;
}


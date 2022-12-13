#include "BattalionPlayerSpawn.h"

void ABattalionPlayerSpawn::CalculateModeWeightsForMap() {
}

ABattalionPlayerSpawn::ABattalionPlayerSpawn() : APlayerStart(FObjectInitializer::Get()) {
    this->InitialSpawn = false;
    this->Team = 0;
    this->ModeWeights.AddDefaulted(5);
    this->SpawnWeightDistanceCurve = NULL;
    this->FinalWeight = 0.00f;
    this->bIsShootoutSpawn = false;
}


#include "DeathAnim.h"

FDeathAnim::FDeathAnim() {
    this->DeathAnim = NULL;
    this->RagdollDelay = 0.00f;
    this->RagdollLimpDelay = 0.00f;
    this->InitialMuscleStrength = 0.00f;
    this->InitialLegsMuscleStrength = 0.00f;
    this->InitialAnimPhysicsBlend = 0.00f;
    this->TimeToBlendToPhysics = 0.00f;
    this->RandomWeight = 0.00f;
    this->RandomSpin = 0.00f;
}


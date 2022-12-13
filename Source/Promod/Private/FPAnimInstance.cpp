#include "FPAnimInstance.h"

UFPAnimInstance::UFPAnimInstance() {
    this->AnimHipIdle = NULL;
    this->AnimSprint = NULL;
    this->AnimSprintIn = NULL;
    this->AnimHipAdditiveAltIdle = NULL;
    this->AnimADSLocomotion = NULL;
    this->ActiveAnimTarget = NULL;
    this->IsRunning = false;
    this->IsChambering = false;
    this->IsTargeting = false;
    this->IsVaulting = false;
    this->TargetingTransition = 0.00f;
    this->TeamCharacterType = ECharacterTeam::CHR_FRIENDLY;
    this->IsAlternativeAnimationSystem = false;
    this->IsReloadEnding = false;
    this->DisplayRunAnim = 1.00f;
    this->CompressSize = 0.25f;
    this->ProneRotateGun = 0.00f;
    this->ProneRotateGunVelocity = 1.00f;
    this->ProneRotateGunVelocityReverse = 20.00f;
    this->VaultRotateGun = 0.00f;
    this->IsKnife = false;
    this->IsThompson = false;
}


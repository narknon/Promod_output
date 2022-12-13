#include "FirstPersonAnimInstance.h"

UFirstPersonAnimInstance::UFirstPersonAnimInstance() {
    this->AnimHipIdle = NULL;
    this->AnimSprint = NULL;
    this->AnimSprintIn = NULL;
    this->AnimHipAdditiveAltIdle = NULL;
    this->AnimADSLocomotion = NULL;
    this->AnimSlide = NULL;
    this->ActiveAnimTarget = NULL;
    this->bIsMovementAllowed = false;
    this->IsHoldingMove = false;
    this->IsRunning = false;
    this->IsChambering = false;
    this->IsTargeting = false;
    this->IsQuickEquipping = false;
    this->bIsQuickEquippingADS = false;
    this->IsVaulting = false;
    this->TargetingTransition = 0.00f;
    this->TeamCharacterType = ECharacterTeam::CHR_FRIENDLY;
    this->IsAlternativeAnimationSystem = false;
    this->IsReloadEnding = false;
    this->DisplayRunAnim = 1.00f;
    this->CompressSize = 0.25f;
    this->bProneRotateGun = false;
    this->ProneRotateGun = 0.00f;
    this->VaultRotateGun = 0.00f;
    this->ProneGunTranslateVelocity = 1.00f;
    this->ProneGunTranslateVelocityReverse = 20.00f;
    this->IsStanding = false;
    this->IsCrouch = false;
    this->IsProne = false;
    this->bIsKnifeEqupped = false;
    this->MeleeComboIndex = 0;
}


#include "WeaponVisualData.h"

FWeaponVisualData::FWeaponVisualData() {
    this->DamageType = NULL;
    this->MeshOverrideFirstPerson = NULL;
    this->MeshOverrideThirdPerson = NULL;
    this->bLoopedFireAnim = false;
    this->BashScreenSway = NULL;
    this->bUseAlternateAnimationSystem = false;
    this->HipIdleAnim1P = NULL;
    this->HipIdleAdditiveAltAnim1P = NULL;
    this->SprintAnim1P = NULL;
    this->SprintInAnim1P = NULL;
    this->AnimADSLocomotion1P = NULL;
    this->SlideAnim1P = NULL;
    this->TargetingAnim1P = NULL;
    this->TargetingOutAnim1P = NULL;
    this->FlinchModifier = 0.00f;
    this->AdditiveGripPose3P = NULL;
    this->IdleAnim3P = NULL;
    this->RunIdleAnim1P = NULL;
    this->CrawlIdleAnim1P = NULL;
    this->JumpStartAnim1P = NULL;
    this->JumpLoopAnim1P = NULL;
    this->JumpEndAnim1P = NULL;
    this->SprintOutAnim1P = NULL;
    this->ReloadScreenSway = NULL;
    this->ReloadSegmentedScreenSway = NULL;
    this->ReloadFromEmptyScreenSway = NULL;
    this->RechamberScreenSway = NULL;
    this->EquipScreenSway = NULL;
    this->QuickEquipScreenSway = NULL;
    this->InspectScreenSway = NULL;
    this->ADSFOVCrush = 0.00f;
    this->ADSFOVAspectFix = 0.00f;
    this->SwayForwardDistanceAiming = 0.00f;
    this->SwayForwardDistanceNotAiming = 0.00f;
    this->SwayAimingVerticalClamp = 0.00f;
    this->SwayAimingHorizontalClamp = 0.00f;
    this->SwayHipVerticalClamp = 0.00f;
    this->SwayHipHorizontalClamp = 0.00f;
    this->SwayAimingVerticalScale = 0.00f;
    this->SwayAimingHorizontalScale = 0.00f;
    this->SwayHipVerticalScale = 0.00f;
    this->SwayHipHorizontalScale = 0.00f;
    this->WeaponFOV = 0.00f;
    this->DepthScale = 0.00f;
    this->DepthScaleADS = 0.00f;
    this->DepthScaleTransitionPower = 0.00f;
    this->bLoopedMuzzleFX = false;
}


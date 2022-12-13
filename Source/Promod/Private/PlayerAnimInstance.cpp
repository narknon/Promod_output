#include "PlayerAnimInstance.h"

class UCurveFloat;
class UAnimMontage;

void UPlayerAnimInstance::TurnInPlaceCpp2(bool ShouldRotate, bool TurnRight, FRotator TurnInPlaceTarget) {
}

void UPlayerAnimInstance::TurnInPlaceCpp1(bool ShouldRotate, bool TurnRight, FRotator TurnInPlaceTarget) {
}

bool UPlayerAnimInstance::TurnInPlaceCheckTurnRight(float TurnThreshold, float TurnAngle) {
    return false;
}

bool UPlayerAnimInstance::TurnInPlaceCheckTShouldRotate(float TurnThreshold, float TurnAngle) {
    return false;
}

FRotator UPlayerAnimInstance::TurnInPlaceCheckTargetRotation(float TurnThreshold, float TurnAngle) {
    return FRotator{};
}

void UPlayerAnimInstance::TurnInPlace(FRotator Start, FRotator Target, FRotator AddTarget, UCurveFloat* Curve, UAnimMontage* TurnAnimation) {
}

void UPlayerAnimInstance::StopTurnInPlace() {
}

void UPlayerAnimInstance::SetCharacterRotationCpp(FRotator TargetRotation, float CharRotationRate) {
}

UPlayerAnimInstance::UPlayerAnimInstance() {
    this->StandToCrouchMontage = NULL;
    this->CrouchToProneMontage = NULL;
    this->ProneToCrouchMontage = NULL;
    this->CrouchToStandMontage = NULL;
    this->JumpLandMontage = NULL;
    this->DefaultGripPoseSequence = NULL;
    this->Turn90HalfSecondCurve = NULL;
    this->StandShuffleMontage = NULL;
    this->StandShuffleMontageReverse = NULL;
    this->CrouchTurnLeft90 = NULL;
    this->CrouchTurnRight90 = NULL;
    this->StandShuffle180Montage = NULL;
    this->StandShuffle180MontageReverse = NULL;
    this->CrouchTurnLeft180 = NULL;
    this->CrouchTurnRight180 = NULL;
    this->FootPosition = 0.00f;
    this->FootPositionDirection = 0.00f;
    this->Speed = 0.00f;
    this->ThirdPersonPawn = NULL;
    this->InAir = false;
    this->Direction = 0.00f;
    this->StartPosition = 0.00f;
    this->RootOffsetYaw = 0.00f;
    this->Stance = 0;
    this->StanceEquals2 = false;
    this->AdditiveGripPose3P = NULL;
    this->IsOneHanded = false;
    this->TargetingAnimTransition = 0.00f;
    this->IsRunning = false;
    this->RunLean = 0.00f;
    this->ShouldStandStill = false;
    this->InstantDirection = 0.00f;
    this->IsFiring = false;
    this->bDisplayDead = true;
    this->OnLadder = false;
    this->LadderAnimationProgress = 0.00f;
    this->BlendGripPose = false;
    this->BlendGripPoseFlt = 0.00f;
    this->AdditiveInvertedGripFixApply = 0.00f;
    this->AdditiveInvertedGripFixApplyBool = false;
    this->IsOneHandedFloat = 0.00f;
    this->LastTimeInAirST1 = false;
    this->CardinalLerpDirection = 0.00f;
    this->IsKnife = false;
    this->IsThompsonOrTargeting = false;
    this->IsSliding = false;
}


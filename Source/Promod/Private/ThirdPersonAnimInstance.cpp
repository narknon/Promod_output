#include "ThirdPersonAnimInstance.h"

class UCurveFloat;
class UAnimMontage;

void UThirdPersonAnimInstance::TurnInPlaceCpp2(bool ShouldRotate, bool TurnRight, FRotator TurnInPlaceTarget) {
}

void UThirdPersonAnimInstance::TurnInPlaceCpp1(bool ShouldRotate, bool TurnRight, FRotator TurnInPlaceTarget) {
}

bool UThirdPersonAnimInstance::TurnInPlaceCheckTurnRight(float TurnThreshold, float TurnAngle) {
    return false;
}

bool UThirdPersonAnimInstance::TurnInPlaceCheckTShouldRotate(float TurnThreshold, float TurnAngle) {
    return false;
}

FRotator UThirdPersonAnimInstance::TurnInPlaceCheckTargetRotation(float TurnThreshold, float TurnAngle) {
    return FRotator{};
}

void UThirdPersonAnimInstance::TurnInPlace20(bool ShouldRotate, bool TurnRight, FRotator TurnInPlaceTarget) {
}

void UThirdPersonAnimInstance::TurnInPlace(FRotator Start, FRotator Target, FRotator AddTarget, UCurveFloat* Curve, UAnimMontage* TurnAnimation) {
}

void UThirdPersonAnimInstance::StopTurnInPlace() {
}

void UThirdPersonAnimInstance::SetCharacterRotationCpp(FRotator TargetRotation, float CharRotationRate) {
}

UThirdPersonAnimInstance::UThirdPersonAnimInstance() {
    this->CurrentVaultHeight = 0.00f;
    this->CurrentVaultProgress = 0.00f;
    this->bJustLaunchedFromPad = false;
    this->bIsKnifeEqupped = false;
    this->StandToCrouchMontage = NULL;
    this->CrouchToProneMontage = NULL;
    this->ProneToCrouchMontage = NULL;
    this->CrouchToStandMontage = NULL;
    this->JumpLandMontage = NULL;
    this->DefaultGripPoseSequence = NULL;
    this->Turn70HalfSecondCurve = NULL;
    this->StandShuffle20Montage = NULL;
    this->StandShuffle20MontageReverse = NULL;
    this->CrouchTurnLeft20 = NULL;
    this->CrouchTurnRight20 = NULL;
    this->StandShuffleMontage = NULL;
    this->StandShuffleMontageReverse = NULL;
    this->CrouchTurnLeft70 = NULL;
    this->CrouchTurnRight70 = NULL;
    this->StandShuffle180Montage = NULL;
    this->StandShuffle180MontageReverse = NULL;
    this->CrouchTurnLeft180 = NULL;
    this->CrouchTurnRight180 = NULL;
    this->FootPosition = 0.00f;
    this->FootPositionDirection = 0.00f;
    this->Speed = 0.00f;
    this->CharacterOwner = NULL;
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
    this->bIsBot = false;
    this->bIsSliding = false;
}


#include "BattalionCharacterMovement.h"

class ALadder;

void UBattalionCharacterMovement::SetLadderClimbing_Implementation(ALadder* SLadderClimbing) {
}

float UBattalionCharacterMovement::FallingDamageReduction(float FallingDamage, const FHitResult& Hit) {
    return 0.0f;
}

void UBattalionCharacterMovement::ClientNoBaseAdjustPosition_Implementation(float Timestamp, FVector NewLoc, FVector NewVelocity, uint8 ServerMovementMode) {
}

void UBattalionCharacterMovement::ClearRestrictedJump() {
}

void UBattalionCharacterMovement::ApplyImpactVelocity(FVector JumpDir, bool bIsFullImpactImpulse) {
}

UBattalionCharacterMovement::UBattalionCharacterMovement() {
    this->MAXPOSITIONERRORSQUARED = 5.00f;
    this->LastClientAdjustmentTime = -1.00f;
    this->LastGoodMoveAckTime = -1.00f;
    this->bLargeCorrection = false;
    this->LargeCorrectionThreshold = 15.00f;
    this->MinTimeBetweenClientAdjustments = 0.10f;
    this->AvgSpeed = 0.00f;
    this->MaxFallingAcceleration = 4200.00f;
    this->MaxSwimmingAcceleration = 4200.00f;
    this->FastInitialAcceleration = 12000.00f;
    this->MaxFastAccelSpeed = 250.00f;
    this->MaxTargetingClampAccel = 1000000000.00f;
    this->MaxSprintingAccel = 4048.00f;
    this->MaxRelativeSwimmingAccelNumerator = 0.00f;
    this->MaxRelativeSwimmingAccelDenominator = 1000.00f;
    this->BrakingDecelerationSliding = 300.00f;
    this->DefaultBrakingDecelerationWalking = 2048.00f;
    this->LadderFriction = 10.00f;
    this->LadderJumpVelocity = 500.00f;
    this->LadderMaxSpeed = 340.00f;
    this->PlayerLadderClimbingMultiplier = 0.00f;
    this->ADSLandPunishTimeScalar = 1.20f;
    this->LandForwardVelocityTolerance = 100.00f;
    this->LandingPunishDivisorMin = 700.00f;
    this->LandingPunishDivisorMax = 1000.00f;
    this->ADSLandPunishTimeHipMovementTimeDecayScalar = 2.00f;
    this->SprintLandPunishTimeScalar = 1.00f;
    this->SprintLandPunishTimeScalarMax = 10.00f;
    this->SprintLandPunishTimeScalarMin = 0.00f;
    this->SprintJumpPunishTimeScalar = 0.00f;
    this->SprintLandTwicePunishTimeScalar = 0.00f;
    this->FlagSpeedModifierScalar = 0.00f;
    this->MaxWaterSpeed = 450.00f;
    this->SwimmingWallPushImpulse = 730.00f;
    this->bFallingInWater = false;
    this->QuakeJumpScalar = 1.00f;
    this->MaxWalkSpeedProne = 62.00f;
    this->ProneHalfHeight = 40.00f;
    this->ProneBlockDelta = 0.00f;
    this->CrouchToStandTime = 0.20f;
    this->ProneToCrouchTime = 0.40f;
    this->StandingToCrouchTime = 0.20f;
    this->CrouchToProneTime = 0.40f;
    this->bProneMaintainsBaseLocation = true;
    this->EasyImpactImpulse = 1100.00f;
    this->EasyImpactDamage = 25.00f;
    this->FullImpactImpulse = 1600.00f;
    this->FullImpactDamage = 40.00f;
    this->ImpactMaxHorizontalVelocity = 1500.00f;
    this->ImpactMaxVerticalFactor = 1.00f;
    this->MaxUndampedImpulse = 2000.00f;
    this->bIsTaunting = false;
    this->MaxMultiJumpCount = 0;
    this->CurrentMultiJumpCount = 0;
    this->bExplicitJump = false;
    this->bAllowJumpMultijumps = true;
    this->MaxMultiJumpZSpeed = 280.00f;
    this->bAlwaysAllowFallingMultiJump = false;
    this->MultiJumpImpulse = 600.00f;
    this->MultiJumpAirControl = 0.45f;
    this->bRestrictedJump = false;
    this->LandingStepUp = 40.00f;
    this->LandingAssistBoost = 430.00f;
    this->bJumpAssisted = false;
    this->JumpTime = -1000.00f;
    this->CrouchJumpVelocity = 128.00f;
    this->JumpHalfJumpDivisor = 1.60f;
    this->JumpHalfJumpTimeout = 1.00f;
    this->JumpStartZ = 0.00f;
    this->bIsAgainstWall = false;
    this->LastCheckedAgainstWall = 0.00f;
    this->CurrentServerMoveTime = 0.00f;
    this->bWantsToInfectionSprint = false;
}


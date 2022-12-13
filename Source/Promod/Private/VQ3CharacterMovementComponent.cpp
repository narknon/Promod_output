#include "VQ3CharacterMovementComponent.h"

UVQ3CharacterMovementComponent::UVQ3CharacterMovementComponent() {
    this->bQueueJump = false;
    this->bJustLanded = false;
    this->ScalingFactor = 1.00f;
    this->Gravity = 800.00f;
    this->JumpForce = 270.00f;
    this->JumpMode = JUMP_Queued;
    this->bEnableMovementSpeedCap = false;
    this->MovementSpeedCap = 0.00f;
    this->Friction = 6.00f;
    this->GroundStopSpeed = 100.00f;
    this->GroundMaxSpeed = 320.00f;
    this->ProneMaxSpeed = 100.00f;
    this->GroundAcceleration = 10.00f;
    this->bUseGroundAccelerationCurve = false;
    this->GroundAccelerationCurve = NULL;
    this->CrouchSpeedScale = 0.25f;
    this->AllowedToJumpWhileCrouched = true;
    this->AirAccelerate = 1.00f;
    this->AirStopAccelerate = 1.00f;
    this->AirStrafeSpeed = 30.00f;
    this->AirStrafeAcceleration = 70.00f;
    this->CPMAirControl = 150.00f;
    this->GroundTraceDistance = 0.25f;
    this->Overclip = 1.00f;
    this->Underclip = 0.01f;
    this->PenRecoveryMultiplier = 1.10f;
    this->SkipClipWhenPen = true;
    this->CollisionPenResolutionMultiplier = 100.00f;
    this->MaxClipPlanes = 5;
    this->MaxStepSize = 18.00f;
    this->bSimpleCollision = true;
    this->bEnableSweepAssistance = true;
    this->bEnableBisectoring = false;
    this->BisectorSpread = 0.50f;
    this->BisectorSize = 10.00f;
    this->Jumped = false;
    this->JumpStartZ = 0.00f;
}


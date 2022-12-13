#include "PromodCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

void UPromodCharacterMovementComponent::SetWantsToADS(const bool bInWantsToAds) {
}

void UPromodCharacterMovementComponent::SetIsDashing(const bool bNewIsDashing) {
}

void UPromodCharacterMovementComponent::SetInfiniteSprint(bool bEnable) {
}

void UPromodCharacterMovementComponent::Server_StopSprint_Implementation(const bool bEnableSprintButtonUpRequired, const bool bDisableWantsToSprint) {
}
bool UPromodCharacterMovementComponent::Server_StopSprint_Validate(const bool bEnableSprintButtonUpRequired, const bool bDisableWantsToSprint) {
    return true;
}

void UPromodCharacterMovementComponent::ResetSprintEnergy() {
}

void UPromodCharacterMovementComponent::ReleaseStanceChangeRestriction() {
}

void UPromodCharacterMovementComponent::ReleaseJumpRestriction() {
}

void UPromodCharacterMovementComponent::ReleaseHorizontalMovementRestriction() {
}

void UPromodCharacterMovementComponent::OnRep_LastVault() {
}

void UPromodCharacterMovementComponent::OnRep_IsVaulting() {
}

bool UPromodCharacterMovementComponent::IsVaulting() const {
    return false;
}

bool UPromodCharacterMovementComponent::IsDashing() const {
    return false;
}

bool UPromodCharacterMovementComponent::IsClimbingLadder() const {
    return false;
}

void UPromodCharacterMovementComponent::GiveInfiniteSprintForTime(float Seconds) {
}

int32 UPromodCharacterMovementComponent::GetHorizontalMovementRestrictions() {
    return 0;
}

void UPromodCharacterMovementComponent::Client_UpdateHUDInfiniteSprint_Implementation() const {
}

void UPromodCharacterMovementComponent::Client_SetMovementEnabled_Implementation(bool B) {
}

void UPromodCharacterMovementComponent::ClearStanceChangeRestrictions() {
}

void UPromodCharacterMovementComponent::ClearJumpRestrictions() {
}

void UPromodCharacterMovementComponent::ClearInfiniteSprint() {
}

void UPromodCharacterMovementComponent::ClearHorizontalMovementRestrictions() {
}

void UPromodCharacterMovementComponent::AcquireStanceChangeRestriction() {
}

void UPromodCharacterMovementComponent::AcquireJumpRestriction() {
}

void UPromodCharacterMovementComponent::AcquireHorizontalMovementRestriction() {
}

void UPromodCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPromodCharacterMovementComponent, AbsWishMove);
    DOREPLIFETIME(UPromodCharacterMovementComponent, SprintEnergyRemaining);
    DOREPLIFETIME(UPromodCharacterMovementComponent, CurrentStaminaEvent);
    DOREPLIFETIME(UPromodCharacterMovementComponent, bIsSlidingAlongSurface);
    DOREPLIFETIME(UPromodCharacterMovementComponent, Jumped);
    DOREPLIFETIME(UPromodCharacterMovementComponent, LastVault);
    DOREPLIFETIME(UPromodCharacterMovementComponent, bIsVaulting);
    DOREPLIFETIME(UPromodCharacterMovementComponent, bIsMovementEnabled);
    DOREPLIFETIME(UPromodCharacterMovementComponent, bIsSprinting);
    DOREPLIFETIME(UPromodCharacterMovementComponent, bWantsToLeanLeft);
    DOREPLIFETIME(UPromodCharacterMovementComponent, bWantsToLeanRight);
    DOREPLIFETIME(UPromodCharacterMovementComponent, bHoldingADS);
}

UPromodCharacterMovementComponent::UPromodCharacterMovementComponent() {
    this->bADSState = false;
    this->bPrevADSState = false;
    this->bPrevWantsToADS = false;
    this->ADSInTimestamp = 0.00f;
    this->ADSOutTimestamp = 0.00f;
    this->CurrADSTransition = 0.00f;
    this->LastMoveTimestamp = 0.00f;
    this->RelWishMoveThreshold = 0.01f;
    this->ControllerAirStrafingAssistance = 0.15f;
    this->CurrentServerMoveTime = 0.00f;
    this->bCanSprint = false;
    this->InfiniteSprintRemaining = 0.00f;
    this->bInfiniteSprintEnabled = false;
    this->SprintEnergyRemaining = 0.00f;
    this->bUseAccurateLandingVelocity = true;
    this->bDebugLogFallDamage = false;
    this->CurrentLadder = NULL;
    this->bIsSlidingAlongSurface = false;
    this->Jumped = false;
    this->JumpStartZ = 0.00f;
    this->bQueueJump = false;
    this->bCrashLanded = false;
    this->bIsVaulting = false;
    this->bWantsToSlide = false;
    this->bIsCurrentlySlideMoving = false;
    this->CurrentSlideTime = 0.00f;
    this->SlideStepTime = 0.00f;
    this->CurrentSlideStepFriction = 0.00f;
    this->SlideTimeSinceEnded = 0.00f;
    this->SlideDistance = 0.00f;
    this->SlideIntoADSMomentumTlPlayhead = 0.00f;
    this->ViewHeightLerpTimeStamp = 0.00f;
    this->ViewHeightLerpDeltaTime = 0.00f;
    this->ViewHeightLerpTarget = 0.00f;
    this->ViewHeightLerpDown = 0;
    this->ViewHeightSprintOut = false;
    this->ViewHeightTarget = 60.00f;
    this->ViewHeightCurrent = 60.00f;
    this->ProneChange = 0.00f;
    this->ProneDirection = 0.00f;
    this->ProneBlocked = false;
    this->bIsMovementEnabled = true;
    this->bWantsToProne = false;
    this->bWantsToSprint = false;
    this->bIsSprinting = false;
    this->bWasWantingToSprint = false;
    this->bWantsToLeanLeft = false;
    this->bWantsToLeanRight = false;
    this->bWantsToADS = false;
    this->bHoldingADS = false;
    this->PromodCharacterOwner = NULL;
    this->bEncodeCompressedFlags = false;
    this->Friction = 5.50f;
    this->GroundStopSpeed = 100.00f;
    this->GroundAcceleration = 9.00f;
    this->GroundMaxSpeed = 190.00f;
    this->InertiaMax = 50.00f;
    this->InertiaAngle = 0.00f;
    this->BackSpeedScale = 0.70f;
    this->StrafeSpeedScale = 0.80f;
    this->JumpCooldown = 0.50f;
    this->AirAccelerate = 1.00f;
    this->JumpHeight = 39.00f;
    this->JumpSlowdownEnabled = true;
    this->JumpLandSlowdownTime = 1800.00f;
    this->HotDropSlowdownTime = 1000.00f;
    this->HotDropVelocityMultiplier = 0.65f;
    this->JumpStepUpHeight = 18.00f;
    this->JumpLadderPushOffVelocity = 128.00f;
    this->bTreatInputAsAcceleration = true;
    this->bEncodeYawIntoAccelZ = false;
    this->bUseCameraViewForMovement = true;
    this->Gravity = 800.00f;
    this->GravityLinearDilation = -275.00f;
    this->GravityLogDilation = 1.00f;
    this->MovementScale = 1.00f;
    this->SprintSpeedScale = 1.50f;
    this->SprintStrafeSpeedScale = 0.67f;
    this->SprintRechargePause = 1.50f;
    this->SprintTime = 4.00f;
    this->SprintDurationScale = 1.00f;
    this->SprintMinTime = 1.00f;
    this->bForceAllowStartSprintInAir = true;
    this->MinSpeedToUseStamina = 100.00f;
    this->LeanSpeedScale = 0.40f;
    this->bSmoothSteps = true;
    this->StepLerpTime = 0.05f;
    this->StepLerpThreshold = 7.00f;
    this->StepLerpMaxChange = 32.00f;
    this->MaxLadderZSpeed = 50.00f;
    this->LadderYawLimit = 100.00f;
    this->LadderAttachmentWidth = 45.00f;
    this->LadderDetachmentDistBottom = 100.00f;
    this->LadderDetachmentDistTop = 100.00f;
    this->bAllowSliding = false;
    this->MaxSlideDistance = 0.00f;
    this->bADSStopsSlide = true;
    this->bMaxSlideDistance3D = false;
    this->SlideCooldown = 0.50f;
    this->SlidingFovCurveAddition = NULL;
    this->SlidingFovEaseInSpeed = 1.00f;
    this->SlidingFovEaseOutSpeed = 1.00f;
    this->bForceSlideCancelUponADS = true;
    this->bForceStandWhenSlideEnds = false;
    this->bStopSlidingWhenFallingOffLedge = true;
    this->SlideRampFrictionScalarCurve = NULL;
    this->SlideStepFrictionHeightCurveMap = NULL;
    this->SlideStepFrictionFalloff = NULL;
    this->bCanJumpDirectlyOutOfSlide = true;
    this->bCanInitiateSlideWhileInAir = true;
    this->MinGroundSpeedForSliding = 800.00f;
    this->StopSlideGroundSpeedThreshold = 400.00f;
    this->SlideMoveScaleScalar = 1.00f;
    this->SlideMoveScaleScalarCurve = NULL;
    this->SlideFriction = 0.40f;
    this->SlideFrictionCurve = NULL;
    this->SlideAcceleration = 0.40f;
    this->SlideAccelerationCurve = NULL;
    this->SlideYawClamp = 0.00f;
    this->SlideIntoADSMomentum = NULL;
    this->SlideIntoADSMomentumPlayrate = 0.75f;
    this->SlideStaminaRegenSpeed = 1.00f;
    this->ColliderHeightStanding = 70.00f;
    this->ColliderHeightCrouching = 50.00f;
    this->ColliderHeightProning = 30.00f;
    this->ColliderProneFeetDist = 50.00f;
    this->ProneFeetSkin = 2.00f;
    this->StandingCheckCapsuleHeightAdjust = 0.99f;
    this->LadderSweepDist = 16.00f;
    this->bUseNewFloorCheck = false;
    this->FloorSweepWidthScalar = 1.00f;
    this->FloorSweepStartOffset = 80.00f;
    this->FloorSweepEndOffset = 0.00f;
    this->FloorSweepColliderHeight = 5.00f;
    this->AdjustFloorSweepWidthScalar = 0.71f;
    this->AdjustFloorStartOffset = 80.00f;
    this->AdjustFloorEndOffset = 0.00f;
    this->AdjustFloorColliderHeight = 5.00f;
    this->bConserveLedgeVelocity = false;
    this->FallDamageMinHeight = 128.00f;
    this->FallDamageMaxHeight = 300.00f;
    this->FallDamageLinearDilation = 58.00f;
    this->FallDamageLogDilation = 0.63f;
    this->FallDmgTypeClass = NULL;
    this->MeshLocationStanding = -112.00f;
    this->MeshLocationCrouching = -80.00f;
    this->MeshLocationProning = -30.00f;
    this->bIsDashing = false;
}


#include "PromodCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "Components/TimelineComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/PostProcessComponent.h"
#include "MapIconComponent.h"
#include "MapViewComponent.h"
#include "WorldMarkerComponent.h"
#include "PromodInventoryComponent.h"
#include "PromodDeathCamera.h"

class APromodBouncePad;
class UAkAudioEvent;
class UAkComponent;
class APromodCharacter;
class APromodPlayerController;
class AFireUpAction;
class UAnimMontage;
class USkeletalMesh;
class UAnimInstance;
class UPromodCharacterMovementComponent;
class UCurveVector;

void APromodCharacter::VaultUpdate(float BlendIn) {
}

void APromodCharacter::VaultEnd() {
}


void APromodCharacter::UpdateSprintValue(float NewSprintValue, bool bCanSprint) {
}

void APromodCharacter::UpdateNadeAndQuickUtilCount() {
}

void APromodCharacter::UpdateLeanValue(float LeanValue) {
}

void APromodCharacter::UnProne() {
}

bool APromodCharacter::TryGetRemainingStunDuration(float& OutDuration) const {
    return false;
}

void APromodCharacter::ToggleDebugDrawHitBox() {
}

void APromodCharacter::StunTimelineUpdate(float StunAmount) {
}

void APromodCharacter::StunTimelineEnd() const {
}

void APromodCharacter::StunEndSound() {
}

void APromodCharacter::StunEnded() {
}

void APromodCharacter::StopTryVault() {
}

void APromodCharacter::StopSprintToggle() {
}

void APromodCharacter::StopSprint() {
}

void APromodCharacter::StopGizmoEffectsAfterTimer() {
}


void APromodCharacter::StartTryVault() {
}

void APromodCharacter::StartSprintToggle() {
}

void APromodCharacter::StartSprint() {
}

void APromodCharacter::StartGizmoEffectsAfterTimer() {
}


void APromodCharacter::SetTargeting(bool bNewTargeting) {
}

void APromodCharacter::SetPendingTargeting(bool bPendingNewTargeting, bool bToggle) {
}

void APromodCharacter::SetIsInZone(bool InZone) {
}

void APromodCharacter::SetAlreadyActivatedFireup(EFireUpSlotType SlotType, const bool bNewAlreadyActivatedFireup) {
}

void APromodCharacter::SetAllMovementAndInputSpeedModifier(float Modifier) {
}

void APromodCharacter::Server_TryActivateFireUp_Implementation(EFireUpSlotType SlotType) {
}
bool APromodCharacter::Server_TryActivateFireUp_Validate(EFireUpSlotType SlotType) {
    return true;
}

void APromodCharacter::Server_SwitchNextPrevWeapon_Implementation(bool SwitchNext) {
}

void APromodCharacter::Server_StartTryVault_Implementation() {
}
bool APromodCharacter::Server_StartTryVault_Validate() {
    return true;
}

void APromodCharacter::Server_SetCanSeeBomb_Implementation(bool CanSee) {
}
bool APromodCharacter::Server_SetCanSeeBomb_Validate(bool CanSee) {
    return true;
}

void APromodCharacter::Server_ReloadWeapon_Implementation() {
}

void APromodCharacter::Server_ReleaseFireUpKey_Implementation(EFireUpSlotType SlotType) {
}
bool APromodCharacter::Server_ReleaseFireUpKey_Validate(EFireUpSlotType SlotType) {
    return true;
}

void APromodCharacter::Server_QuickSwitchWeapons_Implementation(int32 KeyPressed) {
}
bool APromodCharacter::Server_QuickSwitchWeapons_Validate(int32 KeyPressed) {
    return true;
}

void APromodCharacter::Server_QuickSwitchMelee_Implementation() {
}

void APromodCharacter::Server_QueryServerVaultData_Implementation() {
}
bool APromodCharacter::Server_QueryServerVaultData_Validate() {
    return true;
}

void APromodCharacter::Server_PlaySoundOnAllClients_Implementation(UAkAudioEvent* ToPlay, UAkComponent* akComp, APromodPlayerController* SkipSelf, bool SpectatorsOnly, APromodCharacter* SpectatorSkipChar) {
}

void APromodCharacter::Server_Ping_Implementation(const FVector& Loc, const FVector& Dir, EPingType PingType) {
}
bool APromodCharacter::Server_Ping_Validate(const FVector& Loc, const FVector& Dir, EPingType PingType) {
    return true;
}

void APromodCharacter::Server_OnStopUse_Implementation() {
}
bool APromodCharacter::Server_OnStopUse_Validate() {
    return true;
}

void APromodCharacter::Server_NotifyLaunchedFromBouncePad_Implementation(APromodCharacter* Jumper, APromodBouncePad* BouncePad) {
}

void APromodCharacter::Server_Lean_Implementation(float LeanAxisValue) {
}
bool APromodCharacter::Server_Lean_Validate(float LeanAxisValue) {
    return true;
}

void APromodCharacter::Server_FindAndStartUseInteractable_Implementation() {
}
bool APromodCharacter::Server_FindAndStartUseInteractable_Validate() {
    return true;
}

void APromodCharacter::Server_EquipWeapon_Implementation(ESlotType SlotToEquip, bool bQuickEquip, bool bAllowReequipSameSlot) {
}
bool APromodCharacter::Server_EquipWeapon_Validate(ESlotType SlotToEquip, bool bQuickEquip, bool bAllowReequipSameSlot) {
    return true;
}

void APromodCharacter::SaveCurrentSlotType() {
}

void APromodCharacter::ResetGizmoSpawnLocation() {
}


int32 APromodCharacter::Push(const FVector& Direction, const float ForceMultiplier, const float Duration) {
    return 0;
}

void APromodCharacter::Prone() {
}

bool APromodCharacter::PrepareGizmoForSavePosition() {
    return false;
}

bool APromodCharacter::PrepareGizmoForLoadPosition() {
    return false;
}

void APromodCharacter::PlaySocketMeshAnim(UAnimMontage* Animation, USkeletalMesh* SocketMesh, TSubclassOf<UAnimInstance> MeshAnimClass, FName SocketAttachPoint, float InPlayRate, bool bUseAlternateSocketMesh) {
}


void APromodCharacter::PlayCharacterAnim(const FCharacterAnim& Animation, UCurveVector* ScreenSway, float InPlayRate, FName StartSectionName) {
}

void APromodCharacter::Ping(const FVector& Loc, const FVector& Dir, EPingType PingType, bool bClientOnly) {
}

void APromodCharacter::OnWeaponFireStateChanged(bool bIsFiringNow, float Intensitiy, EWeaponArchetype WeaponArchetype) {
}

void APromodCharacter::OnStartGizmoSavePosition() {
}

void APromodCharacter::OnStartGizmoLoadPosition() {
}


void APromodCharacter::OnSlidePressed() {
}

void APromodCharacter::OnRep_ReplicatedFireUpAction() {
}

void APromodCharacter::OnRep_IsProned() {
}

void APromodCharacter::OnRep_CurrentLeanValue() {
}

void APromodCharacter::OnPlantingStarted() {
}

void APromodCharacter::OnFootstepAnimNotify() {
}

void APromodCharacter::OnDefusingStarted() {
}

void APromodCharacter::NetMulti_UpdateHealthbar_Implementation(float NewHealth) {
}

void APromodCharacter::NetMulti_StartHealthbarRegen_Implementation(float RegenRate) {
}

void APromodCharacter::NetMulti_PlaySocketMeshAnim_Implementation(UAnimMontage* Animation, USkeletalMesh* SocketMesh, TSubclassOf<UAnimInstance> MeshAnimClass, FName SocketAttachPoint, float InPlayRate, bool bUseAlternateSocketMesh) {
}

void APromodCharacter::NetMulti_PlayCharacterAnim_Implementation(const FCharacterAnim& Animation, UCurveVector* ScreenSway, float InPlayRate, FName StartSectionName, bool bIgnoreOwner) {
}

void APromodCharacter::NetMulti_AttachSocketMeshForTime_Implementation(USkeletalMesh* SocketMesh, TSubclassOf<UAnimInstance> MeshAnimClass, FName SocketAttachPoint, float Time, const bool bUseAlternateSocketMesh) {
}

void APromodCharacter::Multicast_OnMeleeEndedEtc_Implementation() {
}

void APromodCharacter::Multicast_OnLaunchedFromBouncePad_Implementation(APromodCharacter* Jumper, APromodBouncePad* BouncePad) {
}

void APromodCharacter::Multicast_InitializeLoadout_Implementation(const FLoadoutInitializer& LoadoutInitializer) {
}

void APromodCharacter::Multi_PlaySoundOnAllClients_Implementation(UAkAudioEvent* ToPlay, UAkComponent* akComp, APromodPlayerController* SkipSelf, bool SpectatorsOnly, APromodCharacter* SpectatorSkipChar) {
}

void APromodCharacter::Move(FVector Direction, float Value) {
}

void APromodCharacter::Lean(float LeanAxisValue) {
}

bool APromodCharacter::IsPlayerDefusingOrPlantingBomb() const {
    return false;
}

bool APromodCharacter::HasAlreadyActivatedFireup(EFireUpSlotType SlotType) const {
    return false;
}

void APromodCharacter::GizmoRespawnPlayerFromSavedLocation(int32 SavedLocationIndex) {
}

void APromodCharacter::GizmoRespawnPlayerAfterAnimationEnd() {
}

void APromodCharacter::GizmoReEquipWeapons(bool bImmediate) {
}

void APromodCharacter::GizmoEquipWeaponsAfterAnimationEnd() {
}

UAkAudioEvent* APromodCharacter::GetWeaponStopEvent(bool firstPerson) {
    return NULL;
}

float APromodCharacter::GetVaultLowWallMax() const {
    return 0.0f;
}

float APromodCharacter::GetStunCurveMaxTime() {
    return 0.0f;
}


bool APromodCharacter::GetIsInZone() {
    return false;
}

float APromodCharacter::GetCurrentVaultProgress() {
    return 0.0f;
}

float APromodCharacter::GetCurrentLeanValue() {
    return 0.0f;
}

float APromodCharacter::GetCurrentLeanFraction() {
    return 0.0f;
}

AFireUpAction* APromodCharacter::GetCurrentFireUpAction() const {
    return NULL;
}

UPromodCharacterMovementComponent* APromodCharacter::GetCharacterMovementComponent() const {
    return NULL;
}

FRotator APromodCharacter::Get1PCameraRotation() const {
    return FRotator{};
}

FVector APromodCharacter::Get1PCameraLocation() const {
    return FVector{};
}

void APromodCharacter::ForceInteractionUIUpdate() {
}

void APromodCharacter::DebugDrawPhysicsAsset() const {
}

void APromodCharacter::Client_UpdateCargoSafeZones_Implementation() {
}

void APromodCharacter::Client_StopCriticalHealthSound_Implementation() {
}

void APromodCharacter::Client_SetBusRTPC_Implementation(float Value, FName RTPC) {
}

void APromodCharacter::Client_QueriedServerVaultData_Implementation(const FVaultData& Vault) {
}

void APromodCharacter::Client_PlaySoundOnAK_Implementation(UAkAudioEvent* ToPlay, UAkComponent* akComp) {
}

void APromodCharacter::Client_PlayResupplyAmmoSound_Implementation() {
}

void APromodCharacter::Client_OnSwitchNextPrevWeapon_Implementation(bool SwitchNext) {
}

void APromodCharacter::Client_FlashHitMarker_Implementation(bool bFromDeath, const FHitResult& HitResult) const {
}

void APromodCharacter::Client_DisablePostProcess_Implementation() const {
}

void APromodCharacter::Client_CancelFireUp_Implementation() {
}

void APromodCharacter::Client_AmmoAdded_Implementation(int32 AmmoAdded, int32 NewReserveAmmo, const bool bAddedAmmoToEquippedWeapon) {
}

void APromodCharacter::ClearStunEffect() {
}

void APromodCharacter::ClearGizmoAfterDeath() {
}

void APromodCharacter::ClearCurrentSlotType() {
}

void APromodCharacter::CheckFlyByBullet(FVector TraceStart, FVector Direction) {
}

void APromodCharacter::CharacterStunned(float Duration, float Power) {
}

void APromodCharacter::CancelPreparedGizmo(bool bAlwaysCancel) {
}

void APromodCharacter::Break() {
}

void APromodCharacter::Audio_RespawnPlayer() {
}

void APromodCharacter::AttachSocketMeshForTime(USkeletalMesh* SocketMesh, TSubclassOf<UAnimInstance> MeshAnimClass, FName SocketAttachPoint, float Time, const bool bUseAlternateSocketMesh) {
}

void APromodCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APromodCharacter, bIsVaulting);
    DOREPLIFETIME(APromodCharacter, LastVault);
    DOREPLIFETIME(APromodCharacter, bIsSprinting);
    DOREPLIFETIME(APromodCharacter, bIsProned);
    DOREPLIFETIME(APromodCharacter, bCanSeeBomb);
    DOREPLIFETIME(APromodCharacter, bIsSliding);
    DOREPLIFETIME(APromodCharacter, HandCannonWeapon);
    DOREPLIFETIME(APromodCharacter, InventoryComponent);
    DOREPLIFETIME(APromodCharacter, CurrentLeanValue);
    DOREPLIFETIME(APromodCharacter, PredictedFireUpAction);
    DOREPLIFETIME(APromodCharacter, ReplicatedFireUpAction);
    DOREPLIFETIME(APromodCharacter, PredictedQuickUtilFireUpAction);
    DOREPLIFETIME(APromodCharacter, ReplicatedQuickUtilFireUpAction);
}

APromodCharacter::APromodCharacter() {
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->MapIconComponent = CreateDefaultSubobject<UMapIconComponent>(TEXT("MapIconComponent"));
    this->MapIconSize = 0.00f;
    this->ArrowMiniMapTexture = NULL;
    this->BombMiniMapTexture = NULL;
    this->BombMiniMapObjectiveTexture = NULL;
    this->SpatialMarkerComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("SpatialMarker"));
    this->MapViewComponent = CreateDefaultSubobject<UMapViewComponent>(TEXT("MapViewComponent"));
    this->VaultTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("VaultTimeline"));
    this->VaultTimelineCurve = NULL;
    this->VaultLowWallCurve = NULL;
    this->VaultHighWallCurve = NULL;
    this->VaultLowWallMax = 100.00f;
    this->bIsVaulting = false;
    this->BombCarrierWorldMarker = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("BombCarrierMarkerComponent"));
    this->bIsSprinting = false;
    this->bAllowGizmo = false;
    this->ProneLandBobScalar = 0.20f;
    this->SpatialMarkerParentBoneName = TEXT("head_J");
    this->EnemyMapIconActorClass = NULL;
    this->EnemyMapIconActor = NULL;
    this->bPrevIsSprinting = false;
    this->bIsProned = false;
    this->bCanSeeBomb = false;
    this->bIsSliding = false;
    this->bIsOnFire = false;
    this->OnFireScore = 0;
    this->ScalingFactor = 1.00f;
    this->WallRunChromaticAberrationAmount = 1.00f;
    this->WallRunVelocityThresholdForEffects = 950.00f;
    this->WallRunFovIncrease = 15.00f;
    this->WallRunEffectIncreaseRate = 1.00f;
    this->WallRunEffectDecreaseRate = 5.00f;
    this->WallRunTimeToHitMaxEffect = 2.00f;
    this->bLaunchedFromPad = false;
    this->Bomb1PSkeletalMesh = NULL;
    this->Bomb3PSkeletalMesh = NULL;
    this->Bomb1PSkeletalMeshAnimClass = NULL;
    this->Bomb3PSkeletalMeshAnimClass = NULL;
    this->SnapShotMaterial = NULL;
    this->SnapShotMaterialInstance = NULL;
    this->PingActorClass = NULL;
    this->healthRTPCToPush = 100.00f;
    this->HandCannonWeapon = NULL;
    this->HandCannonWeaponClass = NULL;
    this->DeathCameraComponent = CreateDefaultSubobject<UPromodDeathCamera>(TEXT("DeathCameraComp"));
    this->InputDoubleTapTime = 0.35f;
    this->InputHoldTime = 0.15f;
    this->LastPredictedPing = NULL;
    this->LastLookedAtInteractable = NULL;
    this->CurrentlyLookedAtInteractable = NULL;
    this->CurrentInteractable = NULL;
    this->InteractionDistance = 250.00f;
    this->NoDamagePhsyMat = NULL;
    this->SilentNoDamagePhsyMat = NULL;
    this->DebugShowStats = false;
    this->bDebugShowCurrentControllerType = false;
    this->bIsGizmoHeld = false;
    this->InventoryComponent = CreateDefaultSubobject<UPromodInventoryComponent>(TEXT("InventoryComponent"));
    this->HotdropLandSound = NULL;
    this->FootstepSpeedThreshold = 0.00f;
    this->OldMoveVal = 4200.00f;
    this->SprintEndEvent = NULL;
    this->SprintDrainEventStart = NULL;
    this->SprintDrainEventStop = NULL;
    this->FireUpRifleEvent = NULL;
    this->FireUpSMGEvent = NULL;
    this->FireUpSniperEvent = NULL;
    this->FireUpHandcannonStopEvent1P = NULL;
    this->FireUpReadySound = NULL;
    this->SprintDrainTriggerZone = 0.40f;
    this->bDoingWeaponBlockingAction = false;
    this->CurrentLeanValue = 0.00f;
    this->SmoothMaxLeanFrac = -1.00f;
    this->WeaponCycleDelay = 3.00f;
    this->bCanADSInProne = false;
    this->PredictedFireUpAction = NULL;
    this->ReplicatedFireUpAction = NULL;
    this->PredictedQuickUtilFireUpAction = NULL;
    this->ReplicatedQuickUtilFireUpAction = NULL;
    this->PromodCharacterMovementComponent = NULL;
    this->ShouldMakeFootstepSound = true;
    this->InitialFootstepDelay = 0.30f;
    this->ForwardFootstepIntervalTimeWalk = 0.38f;
    this->ForwardFootstepIntervalTimeSprint = 0.26f;
    this->EnableASDFootstepIntervals = false;
    this->LeftFootstepIntervalTimeWalk = 0.38f;
    this->BackFootstepIntervalTimeWalk = 0.38f;
    this->GizmoAnimationTimeLength = 0.70f;
    this->GizmoPrepareTime = 0.00f;
    this->GizmoEndPrepareTime = 0.00f;
    this->GizmoWeaponEquipTime = 1.00f;
    this->GizmoChromaticAberrationAmount = 1.00f;
    this->GizmoEffectIncreaseRate = 1.00f;
    this->GizmoEffectDecreaseRate = 5.00f;
    this->GizmoTimeToHitMaxEffect = 0.50f;
    this->GizmoStopEffectTime = 0.50f;
    this->GizmoStartEffectTime = 0.10f;
    this->Target360SpinRotation = 360.00f;
    this->StrafeKillSpeedTarget = 1000.00f;
    this->StrafeActiveTime = 1.00f;
    this->CurrentHUDSprintValue = 1.00f;
    this->WorldVFXManager = NULL;
    this->StunTimelinePtr = CreateDefaultSubobject<UTimelineComponent>(TEXT("StunTimeline"));
    this->StunnedMontagePtr = NULL;
    this->StunStartSound = NULL;
    this->StunStopSound = NULL;
    this->bIsStunned = false;
    this->StunCurvePtr = NULL;
    this->StunMeterialParameterCollectionPtr = NULL;
    this->PromodGameState = NULL;
    this->CargoGameState = NULL;
}


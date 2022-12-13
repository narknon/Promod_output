#include "BattalionCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "Components/TimelineComponent.h"
#include "FOVSkeletalMeshComponent.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "AudioPassByComponent.h"
#include "Components/WidgetComponent.h"
#include "PlayerSceneCaptureComponent2D.h"

class AActor;
class UDamageType;
class UAkAudioEvent;
class ABattalionWeapon;
class UBattalionDamageType;
class ABattalionPlayerState;
class ABattalionPlayerControllerGMBase;
class ABattalionWeaponPickup;
class APawn;
class UPrimitiveComponent;

void ABattalionCharacter::UpdateWeaponMaterials() {
}

void ABattalionCharacter::UpdateTeamMesh(bool IsClassChange, FLoadoutData NewLoadout) {
}

void ABattalionCharacter::UpdateTeamDependantVisuals(bool IsClassChange, FLoadoutData NewLoadout) {
}

void ABattalionCharacter::UpdateFlashEffect(float FlashAmount) {
}

void ABattalionCharacter::UpdateDynamicWeaponMaterialProperties() {
}

void ABattalionCharacter::UpdateDynamicMaterials() {
}

void ABattalionCharacter::UpdateDynamicHeadMaterialProperties() {
}

void ABattalionCharacter::UpdateDynamicBodyMaterialProperties() {
}

void ABattalionCharacter::UnProne_DEPRECATED(bool bClientSimulation) {
}


void ABattalionCharacter::TrySwapWeapon_Implementation(TSubclassOf<AActor> PickupClass) {
}
bool ABattalionCharacter::TrySwapWeapon_Validate(TSubclassOf<AActor> PickupClass) {
    return true;
}

bool ABattalionCharacter::TryGetRemainingFlashDuration(float& OutDuration) const {
    return false;
}

void ABattalionCharacter::TriggerHealthRegen(const FHealthRegenEvent& HealthRegenEvent) {
}

void ABattalionCharacter::TriggerBulletPassByEvent_Implementation(EWeaponArchetype WeaponType) {
}



void ABattalionCharacter::StorePreparedGrenade(const FGrenadeThrowInfo& GrenadeInfoStruct) {
}


void ABattalionCharacter::StartDestroyTimer() {
}

void ABattalionCharacter::SpawnActiveGrenade(const FVector& Position, const FVector_NetQuantizeNormal& Forward) {
}

bool ABattalionCharacter::ShouldSwapWeapon(TSubclassOf<AActor> PickupClass, AActor* NearPickup) {
    return false;
}

bool ABattalionCharacter::ShouldPlay1PVisuals() {
    return false;
}

void ABattalionCharacter::SetWwiseAudioSwitches(bool IsSpectator) const {
}

void ABattalionCharacter::SetTargetingBlocked(bool bBlocked) {
}

void ABattalionCharacter::SetOutlineLocal(bool bNowOutlined) {
}

void ABattalionCharacter::SetKnifeVisibility(bool Show) {
}

void ABattalionCharacter::SetIsThrowingGrenade(const bool bNewIsThrowingGrenade) {
}

void ABattalionCharacter::SetIsPerformingLeftHandAction(bool bPerformingLeftHandAction) {
}

void ABattalionCharacter::SetIsMeleeAttacking(bool IsMeleeAttacking) {
}

void ABattalionCharacter::SetHasFireHeld(const bool bNewHasFireHeld) {
}

void ABattalionCharacter::SetHasFinishedDeathAnimation(const bool bNewHasFinishedDeathAnimation) {
}

void ABattalionCharacter::SetCarryingHeavyItem(bool Val) {
}

void ABattalionCharacter::SetBombMeshVsibility(bool bVisible) {
}

void ABattalionCharacter::ServerVaultNotify_Implementation(float VaultHeight) {
}
bool ABattalionCharacter::ServerVaultNotify_Validate(float VaultHeight) {
    return true;
}

void ABattalionCharacter::ServerStopBombPlant_Implementation() {
}
bool ABattalionCharacter::ServerStopBombPlant_Validate() {
    return true;
}

void ABattalionCharacter::ServerStopBombDefuse_Implementation() {
}
bool ABattalionCharacter::ServerStopBombDefuse_Validate() {
    return true;
}

void ABattalionCharacter::ServerStartGrenadeThrow_Implementation() {
}
bool ABattalionCharacter::ServerStartGrenadeThrow_Validate() {
    return true;
}

void ABattalionCharacter::ServerStartGrenadePrepare_Implementation(const FGrenadeThrowInfo& GrenadeInfo) {
}
bool ABattalionCharacter::ServerStartGrenadePrepare_Validate(const FGrenadeThrowInfo& GrenadeInfo) {
    return true;
}

void ABattalionCharacter::ServerStartBombPlant_Implementation() {
}
bool ABattalionCharacter::ServerStartBombPlant_Validate() {
    return true;
}

void ABattalionCharacter::ServerStartBombDefuse_Implementation() {
}
bool ABattalionCharacter::ServerStartBombDefuse_Validate() {
    return true;
}

void ABattalionCharacter::ServerSetTargeting_Implementation(bool bNewTargeting) {
}
bool ABattalionCharacter::ServerSetTargeting_Validate(bool bNewTargeting) {
    return true;
}

void ABattalionCharacter::ServerSetRunning_Implementation(bool bNewRunning, bool bToggle) {
}
bool ABattalionCharacter::ServerSetRunning_Validate(bool bNewRunning, bool bToggle) {
    return true;
}

void ABattalionCharacter::ServerSetLeanRight_Implementation(bool NewWantsToLeanRight) {
}
bool ABattalionCharacter::ServerSetLeanRight_Validate(bool NewWantsToLeanRight) {
    return true;
}

void ABattalionCharacter::ServerSetLeanLeft_Implementation(bool NewWantsToLeanLeft) {
}
bool ABattalionCharacter::ServerSetLeanLeft_Validate(bool NewWantsToLeanLeft) {
    return true;
}

void ABattalionCharacter::ServerNotifyStopWeaponFire_Implementation() {
}
bool ABattalionCharacter::ServerNotifyStopWeaponFire_Validate() {
    return true;
}

void ABattalionCharacter::ServerNotifyStartWeaponFire_Implementation() {
}
bool ABattalionCharacter::ServerNotifyStartWeaponFire_Validate() {
    return true;
}

void ABattalionCharacter::ServerNotifySingleWeaponFire_Implementation() {
}
bool ABattalionCharacter::ServerNotifySingleWeaponFire_Validate() {
    return true;
}

void ABattalionCharacter::ServerNotifyMeleeHit_Implementation(const FHitResult& Impact, FVector_NetQuantizeNormal ShootDir, TSubclassOf<UDamageType> DamageType, float MeleeDamageAmount) {
}
bool ABattalionCharacter::ServerNotifyMeleeHit_Validate(const FHitResult& Impact, FVector_NetQuantizeNormal ShootDir, TSubclassOf<UDamageType> DamageType, float MeleeDamageAmount) {
    return true;
}

void ABattalionCharacter::ServerJumpNotify_Implementation() {
}
bool ABattalionCharacter::ServerJumpNotify_Validate() {
    return true;
}

void ABattalionCharacter::ServerEquipWeapon_Implementation(ESlotType NewWeapon) {
}
bool ABattalionCharacter::ServerEquipWeapon_Validate(ESlotType NewWeapon) {
    return true;
}

void ABattalionCharacter::ServerDisplayMeleeAttack_Implementation(int32 ComboIndex, bool bAsPrimary) {
}
bool ABattalionCharacter::ServerDisplayMeleeAttack_Validate(int32 ComboIndex, bool bAsPrimary) {
    return true;
}

void ABattalionCharacter::ServerCancelPreparedGrenade_Implementation() {
}
bool ABattalionCharacter::ServerCancelPreparedGrenade_Validate() {
    return true;
}

void ABattalionCharacter::Server_PlayerAttacking_Implementation() {
}
bool ABattalionCharacter::Server_PlayerAttacking_Validate() {
    return true;
}

void ABattalionCharacter::Server_OnStopGrenade_Implementation(const FGrenadeThrowInfo& GrenadeInfo) {
}

void ABattalionCharacter::Server_CancelGrenade_Implementation() {
}

void ABattalionCharacter::ResetMaterials(ECharacterTeam Team, FLoadoutData NewClass) {
}

void ABattalionCharacter::ResetADS() {
}

void ABattalionCharacter::QueuedResetRTPCHandle() {
}

void ABattalionCharacter::Prone_DEPRECATED(bool bClientSimulation) {
}

void ABattalionCharacter::PostVoiceAkEvent(UAkAudioEvent* AudioEvent) {
}

void ABattalionCharacter::PlayKillAbberation() {
}

void ABattalionCharacter::OnStopUse() {
}

void ABattalionCharacter::OnStopTargeting() {
}

void ABattalionCharacter::OnStopJump() {
}

void ABattalionCharacter::OnStopFire() {
}

void ABattalionCharacter::OnStopControllerUse() {
}

void ABattalionCharacter::OnStartUse() {
}

void ABattalionCharacter::OnStartTargeting() {
}

void ABattalionCharacter::OnStartJump() {
}

void ABattalionCharacter::OnStartFire() {
}

void ABattalionCharacter::OnStartControllerUse() {
}

void ABattalionCharacter::OnRep_UpdateTargetingTransition() {
}

void ABattalionCharacter::OnRep_ThrowGrenade() {
}

void ABattalionCharacter::OnRep_LastTakeHitInfo() {
}

void ABattalionCharacter::OnRep_LastSetSurface(const FString& PreviousLastSetSurface) {
}

void ABattalionCharacter::OnRep_IsTargeting() {
}

void ABattalionCharacter::OnRep_Inventory() {
}

void ABattalionCharacter::OnRep_CurrentWeapon(ABattalionWeapon* LastWeapon) {
}

void ABattalionCharacter::OnRep_ADSState() {
}

void ABattalionCharacter::OnGrenadeThrowFullyEnded() {
}

void ABattalionCharacter::OnGrenadeThrow(const FGrenadeThrowInfo& GrenadeThrowInfo) {
}

void ABattalionCharacter::OnFinishedGrenadePrepare(const FGrenadeThrowInfo& GrenadeThrowInfo) {
}


FRotator ABattalionCharacter::NormalToQuaternionRotator(const FVector& UpRotator) const {
    return FRotator{};
}

void ABattalionCharacter::NetMutli_StartGrenadePrepare_Implementation(const FGrenadeThrowInfo& GrenadeInfo) {
}

void ABattalionCharacter::NetMulti_UpdateTacticalUtilOnHUD_Implementation(ESpecialGrenadeType Type, const int32 Count) {
}

void ABattalionCharacter::NetMulti_UpdateQucikUtilOnHUD_Implementation(EFireUpType Type) {
}

void ABattalionCharacter::NetMulti_UpdateOffsensiveUtilOnHUD_Implementation(EGrenadeType Type, const int32 Count) {
}

void ABattalionCharacter::NetMulti_StartMeleeAttack_Implementation(int32 ComboIndex, bool bAsPrimary) {
}

void ABattalionCharacter::NetMulti_SetBombMeshVsibility_Implementation(bool bVisible) {
}

void ABattalionCharacter::NetMulti_OnStopGrenade_Implementation(const FGrenadeThrowInfo& GrenadeInfo) {
}

void ABattalionCharacter::NetMulti_ClientLandedEffects_Implementation(float StoredSpeed, bool FromJump, bool WasDamageTaken) {
}

void ABattalionCharacter::MulticastCancelPreparedGrenade_Implementation() {
}

void ABattalionCharacter::Multicast_GrenadePrepare_Implementation(const FGrenadeThrowInfo& GrenadeInfo) {
}

void ABattalionCharacter::Multi_TriggerHealthRegen_Implementation(const FHealthRegenEvent& HealthRegenEvent) {
}



bool ABattalionCharacter::IsWantingToRun() const {
    return false;
}

bool ABattalionCharacter::IsWantingToFire() const {
    return false;
}

bool ABattalionCharacter::IsUsingAlternateAnimationSystem() const {
    return false;
}

bool ABattalionCharacter::IsThrowingGrenade() const {
    return false;
}

bool ABattalionCharacter::IsTargeting() const {
    return false;
}

bool ABattalionCharacter::IsSingleHandedThirdPerson() const {
    return false;
}

bool ABattalionCharacter::IsRunningInAir() const {
    return false;
}

bool ABattalionCharacter::IsRunning() const {
    return false;
}

bool ABattalionCharacter::IsRegeneratingHealth() const {
    return false;
}

bool ABattalionCharacter::IsRechambering() const {
    return false;
}

bool ABattalionCharacter::IsProneBlocked() const {
    return false;
}

bool ABattalionCharacter::IsPlayerBelowFiftyHealth() {
    return false;
}

bool ABattalionCharacter::IsPlayerBelowCriticalHealth() {
    return false;
}

bool ABattalionCharacter::IsPendingTargeting() const {
    return false;
}

bool ABattalionCharacter::IsOutlined(uint8 TestTeam) const {
    return false;
}

bool ABattalionCharacter::IsOnLadder() const {
    return false;
}

bool ABattalionCharacter::IsMovingForAnim() const {
    return false;
}

bool ABattalionCharacter::IsMakingFootstepNoise() const {
    return false;
}

bool ABattalionCharacter::IsLeaning() const {
    return false;
}

bool ABattalionCharacter::IsFirstPerson() const {
    return false;
}

bool ABattalionCharacter::IsFiring() const {
    return false;
}

bool ABattalionCharacter::IsDisplayRunning() {
    return false;
}

bool ABattalionCharacter::IsDisplayFalling() const {
    return false;
}

bool ABattalionCharacter::IsAlive() const {
    return false;
}

void ABattalionCharacter::HideSocketMeshes() {
}

bool ABattalionCharacter::HasFinishedDeathAnimation() const {
    return false;
}

void ABattalionCharacter::GrenadePrepare(const FGrenadeThrowInfo& GrenadeInfo) {
}

ABattalionWeapon* ABattalionCharacter::GetWeaponInSlot(ESlotType SlotToQuery) const {
    return NULL;
}

ABattalionWeapon* ABattalionCharacter::GetWeapon() const {
    return NULL;
}

bool ABattalionCharacter::GetWantsToRunHeld() {
    return false;
}

int32 ABattalionCharacter::GetTeamNum() const {
    return 0;
}

float ABattalionCharacter::GetTargetingTransition() const {
    return 0.0f;
}

float ABattalionCharacter::GetTargetingSpeedModifier() const {
    return 0.0f;
}

USkeletalMeshComponent* ABattalionCharacter::GetSpecificSocketMesh(bool bWantFirstPerson, const bool bUseAlternateSocketMesh) const {
    return NULL;
}

USkeletalMeshComponent* ABattalionCharacter::GetSpecifcPawnMesh(bool WantFirstPerson) const {
    return NULL;
}

int32 ABattalionCharacter::GetSpecialGrenadeCount() {
    return 0;
}

UBattalionDamageType* ABattalionCharacter::GetSecondaryWeaponDmgType() {
    return NULL;
}

float ABattalionCharacter::GetRunningSpeedModifier() const {
    return 0.0f;
}

ABattalionPlayerState* ABattalionCharacter::GetProxyPlayerState() {
    return NULL;
}

UBattalionDamageType* ABattalionCharacter::GetPrimaryWeaponDmgType() {
    return NULL;
}

FGrenadeThrowInfo ABattalionCharacter::GetPreparedGrenade() const {
    return FGrenadeThrowInfo{};
}

bool ABattalionCharacter::GetPendingTargetingToggled() {
    return false;
}

AActor* ABattalionCharacter::GetNearWeaponPickup() const {
    return NULL;
}





int32 ABattalionCharacter::GetMaxHealth() const {
    return 0;
}

ABattalionPlayerControllerGMBase* ABattalionCharacter::GetLocalViewer() const {
    return NULL;
}

FVector ABattalionCharacter::GetLeanOffset() const {
    return FVector{};
}

float ABattalionCharacter::GetLeaningSpeedModifier() const {
    return 0.0f;
}

float ABattalionCharacter::GetLeaningSpeedADSModifier() const {
    return 0.0f;
}

EStanceType ABattalionCharacter::GetLastStance() const {
    return EStanceType::ST_Standing;
}

FVector ABattalionCharacter::GetLastInAirVelocityForAnim() const {
    return FVector{};
}

UBattalionDamageType* ABattalionCharacter::GetKnifeDmgType() {
    return NULL;
}

bool ABattalionCharacter::GetJumpedForAnim() const {
    return false;
}

bool ABattalionCharacter::GetIsSprinting() const {
    return false;
}

bool ABattalionCharacter::GetIsMeleeAttacking() {
    return false;
}

float ABattalionCharacter::GetIsCriticalHealth() {
    return 0.0f;
}

float ABattalionCharacter::GetHealthRatio() const {
    return 0.0f;
}

bool ABattalionCharacter::GetHasFireHeld() const {
    return false;
}

int32 ABattalionCharacter::GetGrenadeCount() {
    return 0;
}

float ABattalionCharacter::GetDefaultSpeedModifier() const {
    return 0.0f;
}

UBattalionDamageType* ABattalionCharacter::GetCurrentWeaponDmgType() {
    return NULL;
}

EStanceType ABattalionCharacter::GetCurrentStance() const {
    return EStanceType::ST_Standing;
}

float ABattalionCharacter::GetCurrentLean() const {
    return 0.0f;
}

float ABattalionCharacter::GetClimbingVelocity() {
    return 0.0f;
}

void ABattalionCharacter::FlashTimelineUpdate(float FlashAmount) {
}

void ABattalionCharacter::FlashTimelineEnd() const {
}

void ABattalionCharacter::EnableReloadInput() {
}

void ABattalionCharacter::EnableLookInput() {
}

void ABattalionCharacter::EnableInfectionPostProcess() {
}

void ABattalionCharacter::EnableEquipInput() {
}

void ABattalionCharacter::DisableReloadInput() {
}

void ABattalionCharacter::DisableLookInput() {
}

void ABattalionCharacter::DisableInfectionPostProcess() {
}

void ABattalionCharacter::DisableEquipInput() {
}

void ABattalionCharacter::ContinueGrenadePrepareAfterHolster(ABattalionWeapon* HolsteredWeapon) {
}

void ABattalionCharacter::ConsumePreparedGrenade(FGrenadeThrowInfo& outGrenadeInfoStruct) {
}

void ABattalionCharacter::CollateralKillEvent(const int32 PlayersKilled) {
}

void ABattalionCharacter::ClientVaultNotify_Implementation(float VaultHeight) {
}

void ABattalionCharacter::ClientUpdateTeams_Implementation(uint8 TeamId, uint8 NationID) {
}

void ABattalionCharacter::ClientNotifyWeaponPickedUp_Implementation() {
}

void ABattalionCharacter::ClientNotifyGrenadePickedUp_Implementation(bool bSpecial) {
}

void ABattalionCharacter::ClientNotifyDeath_Implementation() {
}

void ABattalionCharacter::ClientNotifyDamageTaken_Implementation(FKillMetaData HurtData) {
}

void ABattalionCharacter::ClientJumpNotify_Implementation() {
}

void ABattalionCharacter::Client_UpdateSpecificPawnMeshBasedOnClassChange_Implementation(ABattalionPlayerState* PS, FLoadoutData NewClass) {
}

void ABattalionCharacter::Client_UpdatePlayerInfectionVars_Implementation(int32 In_InfectedMaxHealth, float In_InfectedSpeedModifier, int32 In_InfectedKnifeDamage, float In_InfectionHealthRegenPercentage) {
}

void ABattalionCharacter::Client_UpdateAllPawnMeshes_Implementation() {
}

void ABattalionCharacter::Client_TakenDamage_Implementation(const FVector& HitLocation, FName BoneName, FVector ShotFromDirection) {
}

void ABattalionCharacter::Client_StopInfectionAudio_Implementation() {
}

void ABattalionCharacter::Client_SetWeaponSlot_Implementation(int32 NewWeaponSlot) {
}

void ABattalionCharacter::Client_SetKnifeMesh_Implementation(const FString& KnifeID) {
}

void ABattalionCharacter::Client_SetAkSwitchState_Implementation(const FString& SwitchGroup, const FString& SwitchState) {
}

void ABattalionCharacter::Client_QuickReloadEvent_Implementation(ABattalionWeapon* WeaponQuickReloaded) {
}

void ABattalionCharacter::Client_QuickFireEvent_Implementation() {
}

void ABattalionCharacter::Client_PlayerAttacking_Implementation() {
}

void ABattalionCharacter::Client_OnFlagHandle_Implementation(bool isHoldingFlag) {
}

void ABattalionCharacter::Client_CancelReload_Implementation() {
}

void ABattalionCharacter::ClearInventory_Implementation() {
}
bool ABattalionCharacter::ClearInventory_Validate() {
    return true;
}

void ABattalionCharacter::ClearFlashEffect() {
}

void ABattalionCharacter::CharacterFlashed(float Duration) {
}

bool ABattalionCharacter::CanPickupWeapon(const ABattalionWeaponPickup* WeaponToPickup) const {
    return false;
}

void ABattalionCharacter::CancelReload() {
}

void ABattalionCharacter::CancelMovementFromFire() {
}







void ABattalionCharacter::BlueprintPlayHit(float DamageTaken, APawn* PawnInstigator, AActor* DamageCauser, bool FromDeath) {
}

void ABattalionCharacter::BattServerMoveSaved_Implementation(float Timestamp, FVector_NetQuantize InAccel, uint8 PendingFlags, float ViewYaw, float ViewPitch) {
}
bool ABattalionCharacter::BattServerMoveSaved_Validate(float Timestamp, FVector_NetQuantize InAccel, uint8 PendingFlags, float ViewYaw, float ViewPitch) {
    return true;
}

void ABattalionCharacter::BattServerMoveQuick_Implementation(float Timestamp, FVector_NetQuantize InAccel, uint8 PendingFlags) {
}
bool ABattalionCharacter::BattServerMoveQuick_Validate(float Timestamp, FVector_NetQuantize InAccel, uint8 PendingFlags) {
    return true;
}

void ABattalionCharacter::BattServerMoveOld_Implementation(float OldTimeStamp, FVector_NetQuantize OldAccel, float OldYaw, uint8 OldMoveFlags) {
}
bool ABattalionCharacter::BattServerMoveOld_Validate(float OldTimeStamp, FVector_NetQuantize OldAccel, float OldYaw, uint8 OldMoveFlags) {
    return true;
}

void ABattalionCharacter::BattServerMove_Implementation(float Timestamp, FVector_NetQuantize InAccel, FVector_NetQuantize ClientLoc, uint8 CompressedMoveFlags, float ViewYaw, float ViewPitch, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}
bool ABattalionCharacter::BattServerMove_Validate(float Timestamp, FVector_NetQuantize InAccel, FVector_NetQuantize ClientLoc, uint8 CompressedMoveFlags, float ViewYaw, float ViewPitch, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
    return true;
}

void ABattalionCharacter::ApplySettings() {
}

void ABattalionCharacter::AddSpecialGrenade(ESpecialGrenadeType SpecialGrenadeType) {
}

void ABattalionCharacter::AddGrenade(EGrenadeType GrenadeType) {
}


void ABattalionCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionCharacter, LastSetSurface);
    DOREPLIFETIME(ABattalionCharacter, Grenades);
    DOREPLIFETIME(ABattalionCharacter, SpecialGrenades);
    DOREPLIFETIME(ABattalionCharacter, Inventory);
    DOREPLIFETIME(ABattalionCharacter, CurrentWeapon);
    DOREPLIFETIME(ABattalionCharacter, LastTakeHitInfo);
    DOREPLIFETIME(ABattalionCharacter, bHorizontalSpeedEnabled);
    DOREPLIFETIME(ABattalionCharacter, bADSState);
    DOREPLIFETIME(ABattalionCharacter, bIsTargeting);
    DOREPLIFETIME(ABattalionCharacter, TargetingTransition);
    DOREPLIFETIME(ABattalionCharacter, CurrentLean);
    DOREPLIFETIME(ABattalionCharacter, WantsToLeanRight);
    DOREPLIFETIME(ABattalionCharacter, WantsToLeanLeft);
    DOREPLIFETIME(ABattalionCharacter, bMeleeAttacking);
    DOREPLIFETIME(ABattalionCharacter, KnifeInfo);
    DOREPLIFETIME(ABattalionCharacter, bGrenadePrepared);
    DOREPLIFETIME(ABattalionCharacter, bGrenadeThrowing);
    DOREPLIFETIME(ABattalionCharacter, bGrenadeHeld);
    DOREPLIFETIME(ABattalionCharacter, bHasBomb);
    DOREPLIFETIME(ABattalionCharacter, KnifeMesh);
    DOREPLIFETIME(ABattalionCharacter, bHealthRegenerating);
    DOREPLIFETIME(ABattalionCharacter, Health);
    DOREPLIFETIME(ABattalionCharacter, LastHitTime);
    DOREPLIFETIME(ABattalionCharacter, LastWeaponFireTime);
    DOREPLIFETIME(ABattalionCharacter, CurrentStance);
    DOREPLIFETIME(ABattalionCharacter, bIsCurrentlyThrowingGrenade);
}

ABattalionCharacter::ABattalionCharacter() {
    this->bHasFireHeld = false;
    this->JoystickInputMaxDuration = 2.00f;
    this->bMeleeHoldEquipComplete = false;
    this->bWeaponSwapEquipComplete = false;
    this->TimeCycleWeaponStarted = 0.00f;
    this->bWantsToADSNewWeapon = false;
    this->GrenadeClass = NULL;
    this->SmokeGrenadeClass = NULL;
    this->IncendiaryGrenadeClass = NULL;
    this->FlashGrenadeClass = NULL;
    this->StunGrenadeClass = NULL;
    this->USGrenadePickupClass = NULL;
    this->DEGrenadePickupClass = NULL;
    this->RUSGrenadePickupClass = NULL;
    this->BRITGrenadePickupClass = NULL;
    this->SpecialGrenadePickupClass = NULL;
    this->RayStartOffsetForward = 0.00f;
    this->KnifeDamageType = NULL;
    this->QuickMeleeDamageType = NULL;
    this->FallDamageType = NULL;
    this->FireDamageType = NULL;
    this->FallDamageMinSpeed = 1550.00f;
    this->FallDamageMaxSpeed = 2000.00f;
    this->FallDamageMinDamage = 0.00f;
    this->FallDamageMaxDamage = 101.00f;
    this->WantedWeaponSlot = 0;
    this->PreviousWeaponSlot = 0;
    this->NadeDamageType = NULL;
    this->BombDamageType = NULL;
    this->VoiceOverDistance = 5000.00f;
    this->VoiceOverFriendlyDistance = 2500.00f;
    this->VoiceLinePlayedIncrementSeconds = 3.00f;
    this->VoiceLineDeathScreamDistance = 4000.00f;
    this->SniperCrosshairTexture = NULL;
    this->SensitivityMultiplier = 1.00f;
    this->UnScopeVelocityThreshold = 0.00f;
    this->bIsPerformingLeftHandAction = false;
    this->bTargetingBlocked = false;
    this->Mesh1PSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PawnMesh1PSceneComponent"));
    this->AudioPassByComponent = CreateDefaultSubobject<UAudioPassByComponent>(TEXT("AudioPassByComponent"));
    this->ProneCapsuleComponent = NULL;
    this->PlayerName = CreateDefaultSubobject<UWidgetComponent>(TEXT("PlayerNameCpp"));
    this->PlayerNameInstance = NULL;
    this->Mesh1P = CreateDefaultSubobject<UFOVSkeletalMeshComponent>(TEXT("PawnMesh1P"));
    this->Mesh1PSocketMesh = CreateDefaultSubobject<UFOVSkeletalMeshComponent>(TEXT("Mesh1PSocketMesh"));
    this->Mesh1PSocketMeshAlternate = CreateDefaultSubobject<UFOVSkeletalMeshComponent>(TEXT("Mesh1PSocketMeshAlternate"));
    this->Mesh3PSocketMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh3PSocketMesh"));
    this->Mesh3PSocketMeshAlternate = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh3PSocketMeshAlternate"));
    this->PlayerSceneCapture2D = CreateDefaultSubobject<UPlayerSceneCaptureComponent2D>(TEXT("PlayerSceneCapture"));
    this->MeshHead = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HeadMesh3P"));
    this->MeshBomb = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BombMesh3P"));
    this->SmokeGrenadeMesh = NULL;
    this->SmokeGrenadeMeshTP = NULL;
    this->SmokeGrenadeMeshClass = NULL;
    this->AmericanGrenadeMesh = NULL;
    this->AmericanGrenadeMeshTP = NULL;
    this->AmericanGrenadeMeshClass = NULL;
    this->GermanGrenadeMesh = NULL;
    this->GermanGrenadeMeshTP = NULL;
    this->GermanGrenadeMeshClass = NULL;
    this->RussianGrenadeMesh = NULL;
    this->RussianGrenadeMeshTP = NULL;
    this->BritishGrenadeMesh = NULL;
    this->BritishGrenadeMeshTP = NULL;
    this->RussianGrenadeMeshClass = NULL;
    this->BritishGrenadeMeshClass = NULL;
    this->CurrentWeapon = NULL;
    this->NearPickupWeapon = NULL;
    this->bShouldAutoPickupAmmo = true;
    this->TargetingSpeedModifier = 0.40f;
    this->bPendingTargeting = false;
    this->bPendingTargetingToggled = false;
    this->bHorizontalSpeedEnabled = true;
    this->bADSState = false;
    this->bIsTargeting = false;
    this->TargetingTransition = 0.00f;
    this->TargetingTransitionProgress = 0.00f;
    this->TargetingSlowTransitionSpeed = 0.30f;
    this->TargetingAnimProgress = 0.00f;
    this->JumpedForAnim = false;
    this->CurrentLean = 0.00f;
    this->LeanLeftTarget = -1.00f;
    this->LeanRightTarget = 1.00f;
    this->LeanCheckDistance = 80.00f;
    this->LeanDistanceModifier = 10.00f;
    this->RunningSpeedModifier = 1.50f;
    this->WeaponPickupDistance = 300.00f;
    this->LeaningSpeedModifier = 0.50f;
    this->LeaningSpeedADSModifier = 0.90f;
    this->LeanADSWeapRollCurve = NULL;
    this->LeanExtent = 20.00f;
    this->BattEyeHeight = 80.00f;
    this->BattCrouchedEyeHeight = 24.00f;
    this->BattPronedEyeHeight = -60.00f;
    this->HoldTimeToProne = 0.25f;
    this->HoldTimeToSwitchWeapon = 0.25f;
    this->WantsToLeanRight = false;
    this->WantsToLeanLeft = false;
    this->ViewRecoilPermanentPercentage = 1.00f;
    this->bHasFinishedDeathAnimation = false;
    this->FlinchCurve = NULL;
    this->RedFlinchCurve = NULL;
    this->FlinchHeadScalar = 0.05f;
    this->ProneToCrouchInterp = NULL;
    this->CrouchToProneInterp = NULL;
    this->ProneRotationMaxPitchClamp = 45.00f;
    this->ProneRotationMinPitchClamp = -45.00f;
    this->StandingRotationMaxPitchClamp = 85.00f;
    this->StandingRotationMinPitchClamp = -85.00f;
    this->GrenadePrepTime = 0.50f;
    this->GrenadeThrowTime = 0.33f;
    this->GrenadeThrowAnimLength = 0.43f;
    this->GrenadeWeaponRequipTime = 0.10f;
    this->bMeleeAttacking = false;
    this->bMeleeAttackingAsPrimary = false;
    this->KnifeAnimLength = 1.00f;
    this->KnifeAttackTime = 0.80f;
    this->KnifeCancelTime = 0.00f;
    this->bGrenadePrepared = false;
    this->bGrenadeThrowing = 0;
    this->bGrenadeHeld = 0;
    this->bHasBomb = 0;
    this->Mesh1PMID = NULL;
    this->ActiveGrenadePrepareCameraSway = NULL;
    this->ActiveGrenadeThrowCameraSway = NULL;
    this->KnifeMesh = NULL;
    this->KnifeMeshClass = NULL;
    this->KnifeAnimSway = NULL;
    this->KnifeAnimSwayTranslation = NULL;
    this->DeathAnim = NULL;
    this->FlashedMontagePtr = NULL;
    this->ThrowingAxeSound = NULL;
    this->DefaultAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultAkComponent"));
    this->BulletPassByEvent = NULL;
    this->BulletPassByEvent_Sniper = NULL;
    this->DeathSound = NULL;
    this->GrenadePickedUpEvent = NULL;
    this->SpecialGrenadePickedUpEvent = NULL;
    this->WeaponPickedUpEvent = NULL;
    this->HurtmarkerSoundEvent = NULL;
    this->HurtMarkerHeadshotSound = NULL;
    this->DamageFromFallSoftSound = NULL;
    this->DamageFromFallHardSound = NULL;
    this->HurtmarkerKnifeSoundEvent = NULL;
    this->VaultHigh = NULL;
    this->VaultMedium = NULL;
    this->VaultLow = NULL;
    this->CrouchToStandingSound = NULL;
    this->StandingToCrouchSound = NULL;
    this->StandingToProneSound = NULL;
    this->ProneToStandingSound = NULL;
    this->CrouchToProneSound = NULL;
    this->ProneToCrouchSound = NULL;
    this->VaultSound = NULL;
    this->DeathBloodFX = NULL;
    this->HitWarpFX = NULL;
    this->RespawnFX = NULL;
    this->RespawnSound = NULL;
    this->LowHealthLoopSound = NULL;
    this->LowHealthSoundStop = NULL;
    this->LowHealthGasp = NULL;
    this->HealthRegeneratedSound = NULL;
    this->HealthStartedRegeneratingSound = NULL;
    this->RunLoopSound = NULL;
    this->RunStopSound = NULL;
    this->TargetingSound = NULL;
    this->TargetingOutSound = NULL;
    this->StopCriticalHealthSounds = NULL;
    this->ActionFootstep = NULL;
    this->ActionLadderFootstep = NULL;
    this->ActionLadderFootstepMetal = NULL;
    this->ActionLand = NULL;
    this->ActionJump1p = NULL;
    this->ActionJump3p = NULL;
    this->HitmarkerSound = NULL;
    this->HitmarkerKnifeSound = NULL;
    this->HitmarkerHeadshotSound = NULL;
    this->HitmarkerHeadshotKillSound = NULL;
    this->MeleeDistance = 200.00f;
    this->QuickMeleeDamage = 250.00f;
    this->bDebugMelee = false;
    this->MeleeProneDistance = 60.00f;
    this->ZombieAttackVocal = NULL;
    this->ZombieAttackFlesh = NULL;
    this->SurvivorKillConfirmed = NULL;
    this->WeaponPickUpSound = NULL;
    this->StartSlideLoop = NULL;
    this->StopSlideLoop = NULL;
    this->KillConfirmedSound = NULL;
    this->KillConfirmedCollateralSound = NULL;
    this->HeadshotKillConfirmedSound = NULL;
    this->StartBombPlantSound = NULL;
    this->StartDefusePlantSound = NULL;
    this->FallingSound = NULL;
    this->DeathScream = NULL;
    this->StopFallingEvent = NULL;
    this->FlashStartSound = NULL;
    this->FlashStopSound = NULL;
    this->FirstPersonWalkTriggerSpeedDivisor = 540.00f;
    this->FirstPersonLadderWalkTriggerSpeedDivisor = 400.00f;
    this->WalkGunBobRotation = NULL;
    this->WalkGunBobRotationScale = 1.00f;
    this->WalkGunBobRotationSpeed = 1.00f;
    this->LeftFootPlacementTime = 0.01f;
    this->RightFootPlacementTime = 0.25f;
    this->LeftFootSecondaryPlacementTime = 0.50f;
    this->RightFootSecondaryPlacementTime = 0.75f;
    this->SprintScreenBob = NULL;
    this->SprintScreenBobRotationScale = 1.00f;
    this->SprintScreenBobRotationSpeed = 1.00f;
    this->CameraAnimLerpSpeed = 0.10f;
    this->JumpLandScreenBob = NULL;
    this->JumpLandGunBob = NULL;
    this->JumpLandBobMinScale = 0.00f;
    this->JumpLandBobMaxScale = 1.00f;
    this->JumpLandBobMinSpeed = 0.00f;
    this->JumpLandBobMaxSpeed = 760.00f;
    this->ProxyPlayerState = NULL;
    this->EnemyTeamFPPMesh = NULL;
    this->EnemyTeamTPPMesh = NULL;
    this->EnemyTeamTPPHeadMesh = NULL;
    this->FriendlyTeamFPPMesh = NULL;
    this->FriendlyTeamTPPMesh = NULL;
    this->FriendlyTeamTPPHeadMesh = NULL;
    this->NormalPhysicsAsset = NULL;
    this->RagdollPhysicsAsset = NULL;
    this->KillAbberationCurve = NULL;
    this->QuickReloadTime = 1.00f;
    this->QuickReloadSound = NULL;
    this->QuickFireGlitchTime = 0.20f;
    this->QuickFireGlitchSound = NULL;
    this->MovementStoppedByFire = false;
    this->FlashTimelinePtr = CreateDefaultSubobject<UTimelineComponent>(TEXT("FlashTimeline"));
    this->CurrentViewerPC = NULL;
    this->bHealthRegenerating = false;
    this->bIsDying = false;
    this->Health = 0.00f;
    this->LastHitTime = 0.00f;
    this->LastWeaponFireTime = 0.00f;
    this->bIsFlashed = false;
    this->FlashCurvePtr = NULL;
    this->CameraShakePtr = NULL;
    this->FlashMeterialParameterCollectionPtr = NULL;
    this->WhiteScreenWeightParameterName = TEXT("WhiteScreenWeight");
    this->ScreenCaptureWeightParameterName = TEXT("ScreenCaptureWeight");
    this->bPressedVault = false;
    this->ClientMaxCorpsesOverTenPlayers = 5;
    this->ClientMaxCorpsesUnderTenPlayers = 8;
    this->ClientCorpseTimeout = 25.00f;
    this->ServerCorpseTimeout = 10.00f;
    this->CharacterType = ECharacterTeam::CHR_ENEMY;
    this->CurrentClass = EClassName::ASSAULT;
    this->Nation = ENationType::Nation_FRIENDLY;
    this->CharacterGearSetType = 0;
    this->PossesedAliveTime = 0.00f;
    this->HoldingWeaponTime = 0.00f;
    this->LadderForAnimation = NULL;
    this->CachedController = NULL;
    this->CurrentStance = EStanceType::ST_Standing;
    this->bIsCriticalHealth = false;
    this->CriticalHealth = 30.00f;
    this->bCriticalRegen = false;
    this->HealthRegenAmount = 0.00f;
    this->HealthRegenDelay = 0.00f;
    this->HealthRegenSpeed = 0.00f;
    this->bUseDeathAnim = false;
    this->CriticalHealthLoop = NULL;
    this->CriticalHealthLoopReset = NULL;
    this->CritcalHealthRegenerated = NULL;
    this->bLocalOutline = false;
    this->bForceNoOutline = false;
    this->LastDamagedPlayer = NULL;
    this->InfectedFace = NULL;
    this->InfectedBody = NULL;
    this->InfectedPlayIdleLoop_FP = NULL;
    this->InfectedPlayIdleLoop_3P = NULL;
    this->InfectedStopIdleLoop_FP = NULL;
    this->InfectedStopIdleLoop_3P = NULL;
    this->InfectedAttackVocal_FP = NULL;
    this->InfectedAttackVocal_3P = NULL;
    this->InfectedDeathScream = NULL;
    this->AutoAimInnerRadius = 115.00f;
    this->AutoAimOuterRadius = 160.00f;
    this->AutoAimInnerRadiusCrouching = 82.00f;
    this->AutoAimOuterRadiusCrouching = 127.00f;
    this->AutoAimInnerRadiusProne = 50.00f;
    this->AutoAimOuterRadiusProne = 95.00f;
    this->AutoAimTargetInnerRadiusVsDistanceCurve = NULL;
    this->AutoAimTargetOuterRadiusVsDistanceCurve = NULL;
    this->JoyStickAccelerationCurveVertical = NULL;
    this->JoyStickAccelerationCurveHorizontal = NULL;
    this->JoyStickAccelerationCurveADSVertical = NULL;
    this->JoyStickAccelerationCurveADSHorizontal = NULL;
    this->JoyStickAccelerationCurveScopedVertical = NULL;
    this->JoyStickAccelerationCurveScopedHorizontal = NULL;
    this->AutoAimFollowDistanceCurve = NULL;
    this->AutoAimFollowDistanceCurvePrecision = NULL;
    this->AutoAimFollowDistanceCurveFocus = NULL;
    this->AutoAimFollowDistanceCurveScoped = NULL;
    this->AutoAimFollowDistanceCurveScopedPrecision = NULL;
    this->AutoAimFollowDistanceCurveScopedFocus = NULL;
    this->AutoAimFollowDistanceCurveADS = NULL;
    this->AutoAimFollowDistanceCurveADSPrecision = NULL;
    this->AutoAimFollowDistanceCurveADSFocus = NULL;
    this->AutoAimFollowDistanceCurveScopedADS = NULL;
    this->AutoAimFollowDistanceCurveScopedADSPrecision = NULL;
    this->AutoAimFollowDistanceCurveScopedADSFocus = NULL;
    this->AutoAimTargetStrengthCurveHorizontal = NULL;
    this->AutoAimTargetStrengthCurveHorizontalPrecision = NULL;
    this->AutoAimTargetStrengthCurveHorizontalFocus = NULL;
    this->AutoAimTargetStrengthCurveVertical = NULL;
    this->AutoAimTargetStrengthCurveVerticalPrecision = NULL;
    this->AutoAimTargetStrengthCurveVerticalFocus = NULL;
    this->AutoAimTreacleHipCurveHorizontal = NULL;
    this->AutoAimTreacleHipCurveHorizontalPrecision = NULL;
    this->AutoAimTreacleHipCurveHorizontalFocus = NULL;
    this->AutoAimTreacleADSCurveHorizontal = NULL;
    this->AutoAimTreacleADSCurveHorizontalPrecision = NULL;
    this->AutoAimTreacleADSCurveHorizontalFocus = NULL;
    this->AutoAimTreacleScopeCurveHorizontal = NULL;
    this->AutoAimTreacleScopeCurveHorizontalPrecision = NULL;
    this->AutoAimTreacleScopeCurveHorizontalFocus = NULL;
    this->AutoAimTreacleHipCurveVertical = NULL;
    this->AutoAimTreacleADSCurveVertical = NULL;
    this->AutoAimTreacleScopeCurveVertical = NULL;
    this->AutoAimDistanceStrengthCurve = NULL;
    this->AutoAimDistanceStrengthCurvePrecision = NULL;
    this->AutoAimDistanceStrengthCurveFocus = NULL;
    this->AutoAimPlayerVelocityStrengthCurve = NULL;
    this->ControllerScopedSensitivityMultiplier = 1.30f;
    this->ControllerVerticalSensitivityMultiplier = 0.40f;
    this->ControllerHorizontalSensitivityMultiplier = 1.00f;
    this->ControllerBaseADSSensitivityMultiplier = 0.60f;
    this->ControllerTriggerAxisThreshold = 0.15f;
    this->ControllerResetAccelerationDotThreshold = 0.98f;
    this->UseButtonHoldTime = 0.25f;
    this->UseButtonMeleeHold = 0.50f;
    this->UseButtonWeaponSwapHold = 0.30f;
    this->TimeToDestroy = 5.00f;
    this->BattInstance = NULL;
    this->BattSettings = NULL;
    this->ControllerSensitivityStepOffset = 10;
    this->ControllerSensitivityStepMultiplier = 2.00f;
    this->bCanEquipCancelFromFiring = false;
    this->bEnableEquipInput = true;
    this->bEnableReloadInput = true;
    this->bEnableLookInput = true;
    this->ShouldRetryUpdateTeamMesh = false;
    this->RetryUpdateTeamCount = 0;
    this->MaxRetryUpdateTeamAttempts = 10;
    this->bIsCurrentlyThrowingGrenade = false;
    this->DestroyTimer = 0.00f;
    this->bShouldDestroy = false;
    this->MeleeComboIndex = 0;
    this->MeleeComboMax = 2;
    this->MeleeComboMaxCutoffTime = 0.25f;
}


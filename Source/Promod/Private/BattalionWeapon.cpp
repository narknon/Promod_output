#include "BattalionWeapon.h"
#include "Net/UnrealNetwork.h"
#include "Components/TimelineComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "FOVSkeletalMeshComponent.h"
#include "FOVParticleSystemComponent.h"

class ABattalionCharacter;
class ABattalionPlayerState;
class ABattalionWeapon;
class UAnimSequence;

bool ABattalionWeapon::WillTryADSOnEquipFinished() const {
    return false;
}

void ABattalionWeapon::StartVisibilityTimer(bool useActualTime) {
}

void ABattalionWeapon::StartCancelHolster() {
}

void ABattalionWeapon::SetWeaponVisibility(bool Show, bool ThirdPerson) {
}

void ABattalionWeapon::ServerStopReload_Implementation() {
}
bool ABattalionWeapon::ServerStopReload_Validate() {
    return true;
}

void ABattalionWeapon::ServerStopRechamber_Implementation() {
}
bool ABattalionWeapon::ServerStopRechamber_Validate() {
    return true;
}

void ABattalionWeapon::ServerStopFire_Implementation() {
}
bool ABattalionWeapon::ServerStopFire_Validate() {
    return true;
}

void ABattalionWeapon::ServerStartReload_Implementation() {
}
bool ABattalionWeapon::ServerStartReload_Validate() {
    return true;
}

void ABattalionWeapon::ServerStartRechamber_Implementation() {
}
bool ABattalionWeapon::ServerStartRechamber_Validate() {
    return true;
}

void ABattalionWeapon::ServerStartInspect_Implementation() {
}
bool ABattalionWeapon::ServerStartInspect_Validate() {
    return true;
}

void ABattalionWeapon::ServerStartHolster_Implementation(bool SwapAfterHolster) {
}
bool ABattalionWeapon::ServerStartHolster_Validate(bool SwapAfterHolster) {
    return true;
}

void ABattalionWeapon::ServerStartFire_Implementation() {
}
bool ABattalionWeapon::ServerStartFire_Validate() {
    return true;
}

void ABattalionWeapon::ServerHandleFiring_Implementation() {
}
bool ABattalionWeapon::ServerHandleFiring_Validate() {
    return true;
}

void ABattalionWeapon::Server_StartCancelHolster_Implementation() {
}

void ABattalionWeapon::Server_CancelReload_Implementation() {
}

void ABattalionWeapon::ResetVisibilityTimer() {
}

void ABattalionWeapon::ResetFireRateChecker() {
}

void ABattalionWeapon::ResetCanFireAfterLadder() {
}

void ABattalionWeapon::OnRep_WeaponDematerializationData() {
}

void ABattalionWeapon::OnRep_Skin() {
}

void ABattalionWeapon::OnRep_Reload() {
}

void ABattalionWeapon::OnRep_Rechamber() {
}

void ABattalionWeapon::OnRep_PendingHolster(bool bLastPendingHolsterValue) {
}

void ABattalionWeapon::OnRep_MyPawn(ABattalionCharacter* LastPawn) {
}

void ABattalionWeapon::OnRep_IsHolstered(bool bLastIsHolstered) {
}

void ABattalionWeapon::OnRep_Inspect() {
}

void ABattalionWeapon::OnRep_CancelCounter() {
}

void ABattalionWeapon::OnRep_BurstCounter(FWeaponBurstCounter LastBurstCount) {
}



void ABattalionWeapon::NetMulti_StartCancelHolster_Implementation() {
}

void ABattalionWeapon::NetMulti_OnEquip_Implementation(const ABattalionWeapon* LastWeapon, bool bQuickEquip, bool bFromLadder, bool bFromGizmo, bool bNewTryADSOnEquip) {
}

void ABattalionWeapon::Multicast_OnHolsterFinished_Implementation() {
}

void ABattalionWeapon::Multicast_AddAmmoDirectToClip_Implementation(int32 AmmoCount) {
}

bool ABattalionWeapon::IsQuickEquippingADS() const {
    return false;
}

bool ABattalionWeapon::IsQuickEquipping() const {
    return false;
}

void ABattalionWeapon::HandleFiring(bool& bOutShotWasFired, bool PlayAudio, bool bFromServer) {
}

bool ABattalionWeapon::GiveAmmo(int32 AddAmount) {
    return false;
}

EWeaponType ABattalionWeapon::GetWeaponType() const {
    return EWeaponType::AK74u;
}

EWeaponArchetype ABattalionWeapon::GetWeaponArchetype() const {
    return EWeaponArchetype::SMG;
}

UAnimSequence* ABattalionWeapon::GetSprintOutAnim1P() {
    return NULL;
}

float ABattalionWeapon::GetSprintingTransitionOutTime() const {
    return 0.0f;
}

float ABattalionWeapon::GetSprintingTransitionInTime() const {
    return 0.0f;
}

ABattalionCharacter* ABattalionWeapon::GetPawnOwner() const {
    return NULL;
}

ABattalionPlayerState* ABattalionWeapon::GetMyPlayerState() {
    return NULL;
}

int32 ABattalionWeapon::GetMaxAmmo() const {
    return 0;
}

int32 ABattalionWeapon::GetCurrentWeaponLevel() {
    return 0;
}

EWeaponState ABattalionWeapon::GetCurrentState() const {
    return EWeaponState::Idle;
}

int32 ABattalionWeapon::GetCurrentAmmoInReserve() const {
    return 0;
}

int32 ABattalionWeapon::GetCurrentAmmoInClip() const {
    return 0;
}

int32 ABattalionWeapon::GetCurrentAmmo() const {
    return 0;
}

FVector ABattalionWeapon::GetAnimInstanceHipScaleCrushOffset() {
    return FVector{};
}

FVector ABattalionWeapon::GetAnimInstanceHipScaleCrush() {
    return FVector{};
}

FVector ABattalionWeapon::GetAnimInstanceADSScaleCrushOffset() {
    return FVector{};
}

FVector ABattalionWeapon::GetAnimInstanceADSScaleCrush() {
    return FVector{};
}

UAnimSequence* ABattalionWeapon::GetAnim3PIdleSequence() {
    return NULL;
}

float ABattalionWeapon::GetADSFOVAspectFix() const {
    return 0.0f;
}

void ABattalionWeapon::ForceWeaponVisible() {
}

void ABattalionWeapon::DematerializeUpdate(float BlendIn) {
}

void ABattalionWeapon::DematerializeEnd() {
}

void ABattalionWeapon::ClientStartReload_Implementation() {
}

void ABattalionWeapon::ClientReliableUpdateAmmo_Implementation(int32 NewCurrentAmmo, int32 NewCurrentAmmoInClip) {
}

void ABattalionWeapon::ClientRechamberForce_Implementation() {
}
bool ABattalionWeapon::ClientRechamberForce_Validate() {
    return true;
}

void ABattalionWeapon::Client_StartCancelHolsterAfterDelay_Implementation() {
}

void ABattalionWeapon::Client_OnHolsterFinished_Implementation() {
}

void ABattalionWeapon::ClearStateMulticast_Implementation(bool bClearPawnReference) {
}

void ABattalionWeapon::AddAmmoDirectToClip(int32 AmmoCount) {
}

void ABattalionWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionWeapon, SkinId);
    DOREPLIFETIME(ABattalionWeapon, MyPawn);
    DOREPLIFETIME(ABattalionWeapon, bStopSegmentedReload);
    DOREPLIFETIME(ABattalionWeapon, bIsHolstered);
    DOREPLIFETIME(ABattalionWeapon, bPendingReload);
    DOREPLIFETIME(ABattalionWeapon, InspectCounter);
    DOREPLIFETIME(ABattalionWeapon, bPendingRechamber);
    DOREPLIFETIME(ABattalionWeapon, bPendingHolster);
    DOREPLIFETIME(ABattalionWeapon, CurrentState);
    DOREPLIFETIME(ABattalionWeapon, CurrentAmmo);
    DOREPLIFETIME(ABattalionWeapon, CurrentAmmoInClip);
    DOREPLIFETIME(ABattalionWeapon, Chambered);
    DOREPLIFETIME(ABattalionWeapon, BurstCounter);
    DOREPLIFETIME(ABattalionWeapon, CancelCounter);
    DOREPLIFETIME(ABattalionWeapon, bSwapAfterHolster);
    DOREPLIFETIME(ABattalionWeapon, WeaponDematerializationData);
}

ABattalionWeapon::ABattalionWeapon() {
    this->DematerializeTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DematerializeTimeline"));
    this->WeaponMaterialIcon = NULL;
    this->AmmoIconsCount = 0.00f;
    this->PrimaryClipIconOffset = 0;
    this->SecondaryClipIconOffset = 0;
    this->UseLaserDot = false;
    this->UseCustomCrosshair = false;
    this->UseCustomAimingCrosshair = false;
    this->bHideCrosshairWhileNotAiming = false;
    this->bHideCrosshairWhileAiming = false;
    this->HideWeaponDuringTransition = false;
    this->TransitionHideWeaponPoint = 0.90f;
    this->EnableRTPCSinceBurst = false;
    this->RTPCSinceBurstMAX = 1.00f;
    this->DefaultAkComp = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultAkComponent"));
    this->MyPawn = NULL;
    this->MyPawn_PlayerState = NULL;
    this->CurrentWeaponLevel = 0;
    this->WeaponIcon = NULL;
    this->WeaponModKitIcon = NULL;
    this->ParentModKit = EParentModKit::Default;
    this->StatsDataAsset = NULL;
    this->RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->Mesh1P = CreateDefaultSubobject<UFOVSkeletalMeshComponent>(TEXT("WeaponMesh1P"));
    this->Mesh3P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh3P"));
    this->BulletCasingEmitter = CreateDefaultSubobject<UFOVParticleSystemComponent>(TEXT("BulletCasingEmitter"));
    this->MagazineCasingEmitter = CreateDefaultSubobject<UFOVParticleSystemComponent>(TEXT("MagazineCasingEmitter"));
    this->WeaponTraceStartOffset = 10.00f;
    this->EnableSniperGracePeriod = false;
    this->SniperGracePeriod = 0.20f;
    this->bUseBurstShotRTPC = false;
    this->SingleFireBurstRecoverySpeed = 15.00f;
    this->AddedPerBurstValue = 20.00f;
    this->bEnableTransitionTelescope = false;
    this->PawnAkComponent = NULL;
    this->TelescopeMaterialIndex = 0;
    this->TelescopeMaterialInstance = NULL;
    this->Muzzle1PAttachToGun = false;
    this->MuzzleFX1P = NULL;
    this->MuzzleFX3P = NULL;
    this->MuzzlePSC1P = NULL;
    this->MuzzlePSC3P = NULL;
    this->BulletCasing = NULL;
    this->BulletCasingDelay = 0.00f;
    this->MagazineCasing = NULL;
    this->MagazineCasingDelay = 0.00f;
    this->FireCameraShake = NULL;
    this->FireForceFeedback = NULL;
    this->bStopSegmentedReload = false;
    this->bIsHolstered = false;
    this->bPendingReload = false;
    this->InspectCounter = 0;
    this->bPendingRechamber = false;
    this->bPendingHolster = false;
    this->CurrentState = EWeaponState::Idle;
    this->CurrentAmmo = 0;
    this->CurrentAmmoInClip = 0;
    this->Chambered = true;
    this->CancelCounter = 0;
    this->b3pFireAudioLoopActive = false;
    this->b1pFireAudioLoopActive = false;
    this->AudioMercyShotTolerance = 3.00f;
    this->CanFireAfterLadder = true;
    this->CustomDepthMesh = NULL;
    this->bSwapAfterHolster = true;
    this->DematerializeTimelineLength = 4.00f;
}


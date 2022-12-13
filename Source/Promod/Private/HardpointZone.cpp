#include "HardpointZone.h"
#include "Net/UnrealNetwork.h"
#include "MapIconComponent.h"
#include "WorldMarkerComponent.h"
#include "Components/SceneComponent.h"

class APlayerState;
class APromodPlayerController;





void AHardpointZone::SetOvertimeTimers_Implementation(float MarkerTimeLimit) {
}

void AHardpointZone::SetLockedTime(float NewLockedTime) {
}

void AHardpointZone::SetLockedTickTime(float NewLockedTickTime) {
}

void AHardpointZone::SetIsZoneActive(bool Active) {
}

void AHardpointZone::SetIsLocked(bool Locked) {
}

void AHardpointZone::SetIsFullyUnlocked(bool FullyUnlocked) {
}

void AHardpointZone::SetIsFirstZone_Implementation(bool First) {
}

void AHardpointZone::SetCurrentlyCapturedTeamAllegiance(int32 NewTeamNum) {
}

void AHardpointZone::SetCurrentHardpointState(EHardpointState NewState) {
}

void AHardpointZone::PlayerExitedZone(APlayerState* ExitingPlayer) {
}

void AHardpointZone::PlayerEnteredZone(APlayerState* EnteringPlayer) {
}

void AHardpointZone::HideCurrentZoneWorldMarkers_Implementation() {
}

float AHardpointZone::GetLockedTime() {
    return 0.0f;
}

float AHardpointZone::GetLockedTickTime() {
    return 0.0f;
}

APromodPlayerController* AHardpointZone::GetLocalPlayerController() {
    return NULL;
}

bool AHardpointZone::GetIsZoneActive() {
    return false;
}

bool AHardpointZone::GetIsLocked() {
    return false;
}

bool AHardpointZone::GetIsFullyUnlocked() {
    return false;
}

bool AHardpointZone::GetIsFirstZone() {
    return false;
}

int32 AHardpointZone::GetCurrentlyCapturedTeamAllegiance() {
    return 0;
}

EHardpointState AHardpointZone::GetCurrentHardpointState() {
    return EHardpointState::NEUTRAL;
}


void AHardpointZone::DeactivateZone_Implementation() {
}



void AHardpointZone::ActivateZone_Implementation() {
}

void AHardpointZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHardpointZone, bIsUnlocking);
    DOREPLIFETIME(AHardpointZone, bIsActive);
    DOREPLIFETIME(AHardpointZone, bIsFirstZone);
    DOREPLIFETIME(AHardpointZone, LockedTime);
    DOREPLIFETIME(AHardpointZone, LockedTickTimer);
    DOREPLIFETIME(AHardpointZone, bIsFullyUnlocked);
    DOREPLIFETIME(AHardpointZone, LastCaptureTeam);
}

AHardpointZone::AHardpointZone() {
    this->MiniMapIconComponent = CreateDefaultSubobject<UMapIconComponent>(TEXT("MiniMapIconComponent"));
    this->HardpointName = TEXT("Ben please set me");
    this->ZoneIndex = -1;
    this->CurrentlyCapturedTeamAllegiance = 87;
    this->CurrentHardpointState = EHardpointState::NEUTRAL;
    this->WorldMarkerComponentFirstLocked = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerFirstLocked"));
    this->WorldMarkerComponentCaptureNeutral = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerCaptureNeutral"));
    this->WorldMarkerComponentCaptureEnemy = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerCaptureEnemy"));
    this->WorldMarkerComponentDefend = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerDefend"));
    this->WorldMarkerComponentContest = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerContest"));
    this->WorldMarkerComponentNext = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerNext"));
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->bIsUnlocking = false;
    this->bIsActive = false;
    this->bIsFirstZone = false;
    this->LockedTime = 15.00f;
    this->LockedTickTimer = 0.00f;
    this->bIsFullyUnlocked = false;
    this->LastCaptureTeam = -1;
}


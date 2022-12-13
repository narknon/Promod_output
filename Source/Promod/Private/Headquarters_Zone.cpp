#include "Headquarters_Zone.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "WorldMarkerComponent.h"

void AHeadquarters_Zone::ZoneUnlocked_Implementation() {
}

void AHeadquarters_Zone::ZoneLocked_Implementation() {
}



void AHeadquarters_Zone::OnRep_ZoneRadiusChanged() {
}

void AHeadquarters_Zone::OnRep_TeamAllegianceChanged() {
}

void AHeadquarters_Zone::OnRep_IsContestedChanged() {
}

void AHeadquarters_Zone::OnRep_ImageIDChanged() {
}

void AHeadquarters_Zone::OnRep_CaptureProgressChanged() {
}

void AHeadquarters_Zone::NetMultiCastExplode_Implementation() {
}

void AHeadquarters_Zone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHeadquarters_Zone, ZoneRadius);
    DOREPLIFETIME(AHeadquarters_Zone, CurrentTeamAllegiance);
    DOREPLIFETIME(AHeadquarters_Zone, CurrentNationAllegiance);
    DOREPLIFETIME(AHeadquarters_Zone, ImageID);
    DOREPLIFETIME(AHeadquarters_Zone, CaptureProgress);
    DOREPLIFETIME(AHeadquarters_Zone, IsBeingCaptured);
    DOREPLIFETIME(AHeadquarters_Zone, ShouldTick);
    DOREPLIFETIME(AHeadquarters_Zone, CapturingTeam);
    DOREPLIFETIME(AHeadquarters_Zone, CapturingNation);
    DOREPLIFETIME(AHeadquarters_Zone, IsContested);
    DOREPLIFETIME(AHeadquarters_Zone, PlayerStatesInZone);
    DOREPLIFETIME(AHeadquarters_Zone, bCanBeCaptured);
    DOREPLIFETIME(AHeadquarters_Zone, IsBeingNeutralised);
}

AHeadquarters_Zone::AHeadquarters_Zone() {
    this->ZoneRadius = 0.00f;
    this->ZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Zone Mesh"));
    this->CollisionComp = NULL;
    this->CurrentTeamAllegiance = -1;
    this->CurrentNationAllegiance = ENationType::Nation_Invalid;
    this->DetonateEffect = NULL;
    this->CaptureProgress = 0.00f;
    this->IsBeingCaptured = false;
    this->ShouldTick = true;
    this->TimeCaptured = 0.00f;
    this->CapturingTeam = 0;
    this->CapturingNation = ENationType::Nation_FRIENDLY;
    this->ReturnCaptureCoolDown = 0.00f;
    this->NumPlayersCapping = 0;
    this->IsContested = false;
    this->DefaultWorldMarker = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("DefaultWorldMarker"));
    this->CaptureTime = 0.00f;
    this->CooldownTime = 0.00f;
    this->AIcon = NULL;
    this->BIcon = NULL;
    this->CIcon = NULL;
    this->NeutraliseTime = 0.00f;
    this->Neutral = true;
    this->bCanBeCaptured = false;
    this->StraightCap = false;
    this->IsBeingNeutralised = false;
    this->HQUnlockEvent = NULL;
    this->StartHQRadioStaticEvent = NULL;
    this->StopHQRadioStaticEvent = NULL;
    this->HQDestroyedEvent = NULL;
}


#include "DOMMode_Zone.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "WorldMarkerComponent.h"



void ADOMMode_Zone::OnRep_ZoneRadiusChanged() {
}

void ADOMMode_Zone::OnRep_TeamAllegianceChanged() {
}

void ADOMMode_Zone::OnRep_IsContestedChanged() {
}

void ADOMMode_Zone::OnRep_ImageIDChanged() {
}

void ADOMMode_Zone::OnRep_CaptureProgressChanged() {
}

void ADOMMode_Zone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADOMMode_Zone, ZoneRadius);
    DOREPLIFETIME(ADOMMode_Zone, CurrentTeamAllegiance);
    DOREPLIFETIME(ADOMMode_Zone, CurrentNationAllegiance);
    DOREPLIFETIME(ADOMMode_Zone, ImageID);
    DOREPLIFETIME(ADOMMode_Zone, CaptureProgress);
    DOREPLIFETIME(ADOMMode_Zone, IsBeingCaptured);
    DOREPLIFETIME(ADOMMode_Zone, ShouldTick);
    DOREPLIFETIME(ADOMMode_Zone, CapturingTeam);
    DOREPLIFETIME(ADOMMode_Zone, CapturingNation);
    DOREPLIFETIME(ADOMMode_Zone, IsContested);
    DOREPLIFETIME(ADOMMode_Zone, PlayerStatesInZone);
    DOREPLIFETIME(ADOMMode_Zone, IsBeingNeutralised);
}

ADOMMode_Zone::ADOMMode_Zone() {
    this->ZoneRadius = 0.00f;
    this->ZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Zone Mesh"));
    this->CollisionComp = NULL;
    this->CurrentTeamAllegiance = -1;
    this->CurrentNationAllegiance = ENationType::Nation_Invalid;
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
    this->StraightCap = false;
    this->IsBeingNeutralised = false;
}


#include "CargoCheckpoint.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "WorldMarkerComponent.h"

class UPrimitiveComponent;
class AActor;
class APromodPlayerController;


void ACargoCheckpoint::OnRep_CheckpointNumber() {
}

void ACargoCheckpoint::OnRep_CheckpointData() {
}

void ACargoCheckpoint::OnEndOverlapContestBox(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


void ACargoCheckpoint::OnBeginOverlapContestBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACargoCheckpoint::NetMulti_Reset_Implementation() {
}

APromodPlayerController* ACargoCheckpoint::GetLocalPlayerController() {
    return NULL;
}




void ACargoCheckpoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACargoCheckpoint, CheckpointNumber);
    DOREPLIFETIME(ACargoCheckpoint, CheckpointData);
    DOREPLIFETIME(ACargoCheckpoint, CargoActor);
    DOREPLIFETIME(ACargoCheckpoint, bIsAtSplineStart);
    DOREPLIFETIME(ACargoCheckpoint, bIsEnabled);
}

ACargoCheckpoint::ACargoCheckpoint() {
    this->CheckpointDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("CheckpointDecal"));
    this->ObjectiveDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("ObjectiveDecal"));
    this->ObjectiveDecalCorner1 = CreateDefaultSubobject<UDecalComponent>(TEXT("ObjectiveDecalCorner1"));
    this->ObjectiveDecalCorner2 = CreateDefaultSubobject<UDecalComponent>(TEXT("ObjectiveDecalCorner2"));
    this->ObjectiveDecalCorner3 = CreateDefaultSubobject<UDecalComponent>(TEXT("ObjectiveDecalCorner3"));
    this->ObjectiveDecalCorner4 = CreateDefaultSubobject<UDecalComponent>(TEXT("ObjectiveDecalCorner4"));
    this->ContestantBox = CreateDefaultSubobject<UBoxComponent>(TEXT("ContestBox"));
    this->TimeToUnlock = 0.00f;
    this->CheckpointNumber = -1;
    this->PrevCheckpointState = ECargoCheckpointState::Unoccupied;
    this->CheckpointState = ECargoCheckpointState::Unoccupied;
    this->NumAttackersPresent = 0;
    this->NumDefendersPresent = 0;
    this->UnlockProgress = 0.00f;
    this->UnlockProgressPercent = 0.00f;
    this->CurrentUnlockProgressPip = 0;
    this->PipPercentageTickSize = 0.25f;
    this->MinimumUnlockProgress = 0.00f;
    this->MinimumUnlockProgressPercent = 0.00f;
    this->CurrentUnoccupiedDecayTimer = 0.00f;
    this->DecayTimeToDecrease = 3.00f;
    this->CargoActor = NULL;
    this->WorldMarkerComponentCheckpoint = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerComponentCheckpoint"));
    this->WorldMarkerComponentDefendCapture = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerComponentDefendCapture"));
    this->WorldMarkerComponentContested = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerContest"));
    this->bIsAtSplineStart = false;
    this->bIsEnabled = false;
    this->CargoGameState = NULL;
    this->WorldMarkerAllowedVisibilityStates.AddDefaulted(5);
}


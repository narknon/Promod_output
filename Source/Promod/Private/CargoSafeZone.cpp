#include "CargoSafeZone.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"

void ACargoSafeZone::UpdateSafeZone(const FName MatchState, const int32 CurrentCheckpoint) {
}

void ACargoSafeZone::NetMulti_UpdateSafeZone_Implementation(const FName MatchState, const int32 CurrentCheckpoint) {
}

void ACargoSafeZone::NetMulti_ResetToOriginalTeam_Implementation(const FName MatchState, const int32 CurrentCheckpoint) {
}


void ACargoSafeZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACargoSafeZone, Team);
    DOREPLIFETIME(ACargoSafeZone, OriginalTeam);
    DOREPLIFETIME(ACargoSafeZone, Checkpoint);
}

ACargoSafeZone::ACargoSafeZone() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->Team = 0;
    this->OriginalTeam = 0;
    this->Checkpoint = 0;
    this->bNoEntryUntilActive = false;
    this->bActivated = false;
    this->bAllowed = false;
    this->CargoGameState = NULL;
}


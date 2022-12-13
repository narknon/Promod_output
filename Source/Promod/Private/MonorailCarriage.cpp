#include "MonorailCarriage.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MapIconComponent.h"
#include "WorldMarkerComponent.h"
#include "AkComponent.h"

class UPrimitiveComponent;
class AActor;
class APromodPlayerController;

void AMonorailCarriage::OnEndOverlapContestBox(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMonorailCarriage::OnBeginOverlapContestBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMonorailCarriage::NetMulti_StopSoundsAtRoundEnd_Implementation() {
}

void AMonorailCarriage::NetMulti_StopReachedLockedCheckpointSound_Implementation() {
}

void AMonorailCarriage::NetMulti_StartCargoMovementSound_Implementation() {
}

void AMonorailCarriage::NetMulti_PlayReachedLockedCheckpointSound_Implementation() {
}

void AMonorailCarriage::NetMulti_PlayCheckpointUnlockedSound_Implementation() {
}

void AMonorailCarriage::NetMulti_PlayCargoUnlockProgressSound_Implementation(float Progress) {
}

void AMonorailCarriage::NetMulti_DisablePayload_Implementation(bool Disabled) {
}

void AMonorailCarriage::GiveAmmoToOccupyingTeam() {
}

APromodPlayerController* AMonorailCarriage::GetLocalPlayerController() {
    return NULL;
}




void AMonorailCarriage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMonorailCarriage, AreAttackersPresent);
    DOREPLIFETIME(AMonorailCarriage, NumberOfAttackersPresent);
    DOREPLIFETIME(AMonorailCarriage, AreDefendersPresent);
    DOREPLIFETIME(AMonorailCarriage, bIsTeam0Present);
    DOREPLIFETIME(AMonorailCarriage, bIsTeam1Present);
    DOREPLIFETIME(AMonorailCarriage, CargoVelocity);
}

AMonorailCarriage::AMonorailCarriage() {
    this->MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    this->ContestantBox = CreateDefaultSubobject<UBoxComponent>(TEXT("ContestBox"));
    this->MapIconComponent = CreateDefaultSubobject<UMapIconComponent>(TEXT("MapIconComponent"));
    this->AmmoAddition = 5;
    this->AmmoTime = 1.00f;
    this->DamageTypeClass = NULL;
    this->AreAttackersPresent = false;
    this->NumberOfAttackersPresent = 0;
    this->AreDefendersPresent = false;
    this->bIsTeam0Present = false;
    this->bIsTeam1Present = false;
    this->WorldMarkerComponentEscortAttack = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerFirstLocked"));
    this->WorldMarkerComponentDisabledRepair = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerCaptureNeutral"));
    this->WorldMarkerComponentContested = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerCaptureEnemy"));
    this->WorldMarkerComponentDisable = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerDefend"));
    this->WorldMarkerComponentRepair = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarkerContest"));
    this->DefaultAkComp = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultkComponent"));
    this->CargoVelocity = 0.00f;
    this->DefendLabel = TEXT("DEFEND");
    this->RepairLabel = TEXT("REPAIR");
    this->EscortLabel = TEXT("ESCORT");
    this->DisableLabel = TEXT("DISABLE");
}


#include "BombMode_Bomb.h"
#include "Net/UnrealNetwork.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "WorldMarkerComponent.h"
#include "Components/SceneComponent.h"
#include "MapIconComponent.h"

class APromodPlayerController;
class AActor;


void ABombMode_Bomb::UpdateAllegiance() {
}

void ABombMode_Bomb::SetShouldSeeBombIcon(bool AttackersShouldSee, bool DefendersShouldSee) {
}

void ABombMode_Bomb::OnRep_TeamAllegiance() {
}

APromodPlayerController* ABombMode_Bomb::GetLocalPlayerController() {
    return NULL;
}

void ABombMode_Bomb::Client_StopTickingSound_Implementation() {
}

void ABombMode_Bomb::Client_StoppedPlanting_Implementation() {
}

void ABombMode_Bomb::Client_StoppedDefusing_Implementation() {
}

void ABombMode_Bomb::Client_StartedPlanting_Implementation() {
}

void ABombMode_Bomb::Client_StartedDefusing_Implementation() {
}

void ABombMode_Bomb::Client_PlantSuccesful_Implementation() {
}

void ABombMode_Bomb::Client_DefuseSuccesful_Implementation() {
}

void ABombMode_Bomb::Client_BombExplodeEffect_Implementation() {
}

void ABombMode_Bomb::Client_BeginTickingSound_Implementation() {
}

bool ABombMode_Bomb::CanBeSeenFrom(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor) const {
    return false;
}


void ABombMode_Bomb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABombMode_Bomb, DefuseBox);
    DOREPLIFETIME(ABombMode_Bomb, TeamAllegiance);
    DOREPLIFETIME(ABombMode_Bomb, Zone);
    DOREPLIFETIME(ABombMode_Bomb, Armed);
    DOREPLIFETIME(ABombMode_Bomb, Fuse);
    DOREPLIFETIME(ABombMode_Bomb, IsBeingDefused);
    DOREPLIFETIME(ABombMode_Bomb, bAttackersSeeBombIcon);
    DOREPLIFETIME(ABombMode_Bomb, bDefendersSeeBombIcon);
    DOREPLIFETIME(ABombMode_Bomb, bCanBeSeenByDefender);
    DOREPLIFETIME(ABombMode_Bomb, MaxFuse);
}

ABombMode_Bomb::ABombMode_Bomb() {
    this->DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRoot"));
    this->BombMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Bomb Mesh"));
    this->MapIconComponent = CreateDefaultSubobject<UMapIconComponent>(TEXT("MapIconComponent"));
    this->DetonateEffect = NULL;
    this->TeamAllegiance = 0;
    this->Zone = NULL;
    this->Armed = false;
    this->Fuse = 0.00f;
    this->IsBeingDefused = false;
    this->Defuser = NULL;
    this->Planter = NULL;
    this->DamageFalloff = NULL;
    this->WorldMarkerComponent = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarker"));
    this->DefaultAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultAkComponent"));
    this->bAttackersSeeBombIcon = true;
    this->bDefendersSeeBombIcon = false;
    this->bCanBeSeenByDefender = false;
    this->MaxFuse = 0.00f;
    this->bDrawDebugDefuseArea = false;
}


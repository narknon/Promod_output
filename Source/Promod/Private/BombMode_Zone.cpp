#include "BombMode_Zone.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "MapIconComponent.h"

class APromodPlayerController;

void ABombMode_Zone::OnRep_TeamAllegiance() {
}

APromodPlayerController* ABombMode_Zone::GetLocalPlayerController() {
    return NULL;
}








void ABombMode_Zone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABombMode_Zone, TeamAllegiance);
    DOREPLIFETIME(ABombMode_Zone, AttachedBomb);
}

ABombMode_Zone::ABombMode_Zone() {
    this->CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->MapIconComponent = CreateDefaultSubobject<UMapIconComponent>(TEXT("MapIconComponent"));
    this->FloorPoint = CreateDefaultSubobject<USphereComponent>(TEXT("RootComp"));
    this->TeamAllegiance = 0;
    this->StageID = 0;
    this->ZoneName = EBombModeZoneName::None;
    this->AttachedBomb = NULL;
}


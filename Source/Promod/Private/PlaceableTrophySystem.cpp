#include "PlaceableTrophySystem.h"
#include "Net/UnrealNetwork.h"
#include "Components/TimelineComponent.h"

class APromodPlayerController;

void APlaceableTrophySystem::OnRep_PlaceableTrophySystemDematerializationData() {
}

bool APlaceableTrophySystem::IsDematerializing() const {
    return false;
}

void APlaceableTrophySystem::FireHitMarker(APromodPlayerController* InstigatorPC, const FHitResult& HitResult, const bool bKilled) {
}

void APlaceableTrophySystem::DematerializeUpdate(float BlendIn) {
}

void APlaceableTrophySystem::DematerializeEnd() {
}

void APlaceableTrophySystem::Dematerialize(const FName LastHitBoneName, const FVector& LastHitLocationOffset) {
}

void APlaceableTrophySystem::BP_DisableCollision_Implementation() {
}

void APlaceableTrophySystem::BP_CreateTrophySystemMIDs_Implementation() {
}

void APlaceableTrophySystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlaceableTrophySystem, PlaceableTrophySystemDematerializationData);
}

APlaceableTrophySystem::APlaceableTrophySystem() {
    this->bShouldDematerialize = false;
    this->DematerializeTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DematerializeTimeline"));
    this->DematerializationMesh = NULL;
    this->DematerializeTimelineLength = 4.00f;
    this->DematerializeTimelineCurve = NULL;
}


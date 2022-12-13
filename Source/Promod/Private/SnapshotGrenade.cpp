#include "SnapshotGrenade.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "AkComponent.h"

void ASnapshotGrenade::OnRep_DartDematerializationData() {
}

void ASnapshotGrenade::DematerializeUpdate(float BlendIn) {
}

void ASnapshotGrenade::DematerializeEnd() {
}

void ASnapshotGrenade::Dematerialize(const FName LastHitBoneName, const FVector& LastHitLocationOffset) {
}

void ASnapshotGrenade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASnapshotGrenade, DartDematerializationData);
}

ASnapshotGrenade::ASnapshotGrenade() {
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComponent"));
    this->DefaultAkComp = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultAkComponent"));
    this->DematerializeTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DematerializeTimeline"));
    this->DematerializeTimelineLength = 4.00f;
    this->DematerializeTimelineCurve = NULL;
}


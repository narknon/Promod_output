#include "CallOutVolume.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class AActor;

void ACallOutVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACallOutVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACallOutVolume::CheckOverlappedPlayers() {
}

ACallOutVolume::ACallOutVolume() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->bIsEnabled = true;
    this->UniqueID = 0;
}


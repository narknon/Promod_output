#include "AnimAudioVolume.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "AkComponent.h"

class UPrimitiveComponent;
class AActor;

void AAnimAudioVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAnimAudioVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AAnimAudioVolume::AAnimAudioVolume() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->bIsEnabled = true;
    this->UniqueID = 0;
    this->playCooldown = 0.00f;
    this->playNumLimit = 0;
    this->playNum = 0;
    this->Animation = NULL;
    this->LoopAnimation = false;
    this->AudioEventPtr = NULL;
}


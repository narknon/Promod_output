#include "AkIndoorReverbVolume.h"
#include "AkComponent.h"

class UPrimitiveComponent;
class AActor;

void AAkIndoorReverbVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAkIndoorReverbVolume::OnCharacterDestroyed(AActor* Actor) {
}

void AAkIndoorReverbVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AAkIndoorReverbVolume::AAkIndoorReverbVolume() {
    this->VolumeType = EVolumeType::VT_INDOORSMALL;
    this->MaxRTPCValue = 1.00f;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->OnEnteredEvent = NULL;
    this->OnExitEvent = NULL;
}


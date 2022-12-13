#include "BattalionSmokeGrenade.h"
#include "AkComponent.h"

class UPrimitiveComponent;
class AActor;



void ABattalionSmokeGrenade::EndOverlapSmoke_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}
bool ABattalionSmokeGrenade::EndOverlapSmoke_Validate(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
    return true;
}

void ABattalionSmokeGrenade::BeginOverlapSmoke_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}
bool ABattalionSmokeGrenade::BeginOverlapSmoke_Validate(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
    return true;
}

ABattalionSmokeGrenade::ABattalionSmokeGrenade() {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->SmokeLength = 11.00f;
    this->SmokeSoundLengthAddition = -4.00f;
    this->SmokePostProcessBounds = NULL;
    this->SmokeBoxBounds = NULL;
    this->SmokePostProcess = NULL;
}


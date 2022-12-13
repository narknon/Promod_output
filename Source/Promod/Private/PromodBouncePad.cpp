#include "PromodBouncePad.h"
#include "Components/BoxComponent.h"
#include "AkComponent.h"

class UPrimitiveComponent;
class AActor;

void APromodBouncePad::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

APromodBouncePad::APromodBouncePad() {
    this->CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BounceMultiplier = -2.00f;
    this->MaxBounceClamp = 0.00f;
    this->MinBounceClamp = -800.00f;
    this->MinZVelocityRequiredForBounce = 0.00f;
    this->AllowableOffsetPercentage = 0.25f;
    this->BounceSound = NULL;
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("BouncePadAkComponent"));
}


#include "CardPickup.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"

class UPrimitiveComponent;
class AActor;


void ACardPickup::OnRep_TextureName() {
}

void ACardPickup::OnComponentBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}
bool ACardPickup::OnComponentBeginOverlap_Validate(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
    return true;
}

float ACardPickup::GetScale() {
    return 0.0f;
}

void ACardPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACardPickup, ClassName);
    DOREPLIFETIME(ACardPickup, TextureName);
}

ACardPickup::ACardPickup() {
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->LoadoutSystemClass = NULL;
    this->CardPickupCue = NULL;
}


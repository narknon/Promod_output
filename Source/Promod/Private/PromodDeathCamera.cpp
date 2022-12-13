#include "PromodDeathCamera.h"
#include "Net/UnrealNetwork.h"

class UCurveFloat;
class ABattalionWeapon;
class APromodCharacter;

void UPromodDeathCamera::OnDurationExpired() {
}

float UPromodDeathCamera::GetZoomTime() const {
    return 0.0f;
}

UCurveFloat* UPromodDeathCamera::GetZoomCurve() const {
    return NULL;
}

FVector UPromodDeathCamera::GetViewPosition() const {
    return FVector{};
}

float UPromodDeathCamera::GetTranslationLerpAmount() const {
    return 0.0f;
}

float UPromodDeathCamera::GetStartTime() const {
    return 0.0f;
}

float UPromodDeathCamera::GetMaxZoomDistance() const {
    return 0.0f;
}

APromodCharacter* UPromodDeathCamera::GetKiller() const {
    return NULL;
}

bool UPromodDeathCamera::GetIsRunning() const {
    return false;
}

float UPromodDeathCamera::GetFOVAtMaxDistance() const {
    return 0.0f;
}

FVector UPromodDeathCamera::GetDeathPosition() const {
    return FVector{};
}

bool UPromodDeathCamera::DeathWasSuicide() const {
    return false;
}

void UPromodDeathCamera::Client_BeginDeathCam_Implementation(APromodCharacter* Killer, ABattalionWeapon* KillingWeapon) {
}

void UPromodDeathCamera::BeginDeathCam(APromodCharacter* Killer, ABattalionWeapon* KillingWeapon) {
}

void UPromodDeathCamera::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPromodDeathCamera, DeathPosition);
    DOREPLIFETIME(UPromodDeathCamera, StartTime);
    DOREPLIFETIME(UPromodDeathCamera, KillerCharacter);
    DOREPLIFETIME(UPromodDeathCamera, bIsRunning);
}

UPromodDeathCamera::UPromodDeathCamera() {
    this->Duration = 0.00f;
    this->LerpAmount = 0.00f;
    this->LerpTimeSeconds = 0.00f;
    this->MaxZoomDistance = 10000.00f;
    this->FOVAtMaxDistance = 5.00f;
    this->ZoomCurve = NULL;
    this->ZoomTime = 5.00f;
    this->TranslationLerpAmount = 0.50f;
    this->StartTime = 0.00f;
    this->KillerCharacter = NULL;
    this->OwningCharacter = NULL;
    this->bIsRunning = false;
}


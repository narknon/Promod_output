#include "AudioPassByComponent.h"
#include "Components/SphereComponent.h"

UAudioPassByComponent::UAudioPassByComponent() {
    this->SoundEffectColliderCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SoundEffectCollider"));
}


#include "VaultAllowVolume.h"
#include "Components/BoxComponent.h"

AVaultAllowVolume::AVaultAllowVolume() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
}


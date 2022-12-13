#include "VaultAntiVolume.h"
#include "Components/BoxComponent.h"

AVaultAntiVolume::AVaultAntiVolume() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
}


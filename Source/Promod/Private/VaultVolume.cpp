#include "VaultVolume.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"

AVaultVolume::AVaultVolume() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Click Helper"));
}


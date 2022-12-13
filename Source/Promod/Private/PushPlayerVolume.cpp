#include "PushPlayerVolume.h"
#include "Components/BoxComponent.h"

APushPlayerVolume::APushPlayerVolume() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->PushType = EPushType::PT_OneWay;
    this->PushStrength = 300.00f;
}


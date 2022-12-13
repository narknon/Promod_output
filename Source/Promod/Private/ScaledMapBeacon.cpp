#include "ScaledMapBeacon.h"
#include "Components/BoxComponent.h"

AScaledMapBeacon::AScaledMapBeacon() {
    this->MapScaleExtents = CreateDefaultSubobject<UBoxComponent>(TEXT("MapExtentsBox"));
}


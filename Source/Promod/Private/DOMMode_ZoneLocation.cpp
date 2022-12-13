#include "DOMMode_ZoneLocation.h"
#include "Components/SphereComponent.h"

ADOMMode_ZoneLocation::ADOMMode_ZoneLocation() {
    this->RadiusHelper = CreateDefaultSubobject<USphereComponent>(TEXT("Radius Helper"));
}


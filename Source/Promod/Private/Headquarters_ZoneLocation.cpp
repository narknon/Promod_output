#include "Headquarters_ZoneLocation.h"
#include "Components/SphereComponent.h"

AHeadquarters_ZoneLocation::AHeadquarters_ZoneLocation() {
    this->RadiusHelper = CreateDefaultSubobject<USphereComponent>(TEXT("Radius Helper"));
}


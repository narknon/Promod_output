#include "MapIconActor.h"
#include "MapIconComponent.h"

AMapIconActor::AMapIconActor() {
    this->MapIconComponent = CreateDefaultSubobject<UMapIconComponent>(TEXT("MapIconComponent"));
}


#include "BlitzMode_Zone.h"
#include "BlitzWidgetComponent.h"

void ABlitzMode_Zone::UpdateTeamVisibility_Implementation(UBlitzWidgetComponent* WidgetComponent, const ETeamVisibility& TeamVisibility) {
}

void ABlitzMode_Zone::UpdateAllegiance_Implementation(UBlitzWidgetComponent* WidgetComponent) {
}


ABlitzMode_Zone::ABlitzMode_Zone() {
    this->DefaultSpatialMarker = CreateDefaultSubobject<UBlitzWidgetComponent>(TEXT("Default Spatial Marker"));
    this->ArmedSpatialMarker = CreateDefaultSubobject<UBlitzWidgetComponent>(TEXT("Armed Spatial Marker"));
}


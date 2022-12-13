#include "BlitzMode_Bomb.h"
#include "Components/WidgetComponent.h"
#include "BlitzWidgetComponent.h"

void ABlitzMode_Bomb::SetUIRespawnTimer_Implementation(float Time) {
}

void ABlitzMode_Bomb::NetMulti_UpdateAllegiance_Implementation() {
}

ABlitzMode_Bomb::ABlitzMode_Bomb() {
    this->SpatialRespawnTimer = CreateDefaultSubobject<UWidgetComponent>(TEXT("Spatial Respawn Timer"));
    this->SpatialBombMarker = CreateDefaultSubobject<UBlitzWidgetComponent>(TEXT("Spatial Bomb Marker"));
}


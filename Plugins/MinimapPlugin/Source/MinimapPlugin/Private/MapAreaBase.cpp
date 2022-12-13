#include "MapAreaBase.h"
#include "MapViewComponent.h"
#include "Components/BoxComponent.h"
#include "MapAreaPrimitiveComponent.h"

bool AMapAreaBase::GetMapViewCornerUVs(UMapViewComponent* MapView, TArray<FVector2D>& CornerUVs) {
    return false;
}

UMapViewComponent* AMapAreaBase::GetMapView() const {
    return NULL;
}

float AMapAreaBase::GetMapAspectRatio() const {
    return 0.0f;
}

int32 AMapAreaBase::GetLevelAtHeight(const float WorldZ) const {
    return 0;
}

UBoxComponent* AMapAreaBase::GetAreaBounds() const {
    return NULL;
}

AMapAreaBase::AMapAreaBase() {
    this->AreaBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("AreaBounds"));
    this->AreaPrimitive = CreateDefaultSubobject<UMapAreaPrimitiveComponent>(TEXT("AreaPrimitive"));
    this->AreaMapView = CreateDefaultSubobject<UMapViewComponent>(TEXT("AreaMapView"));
}


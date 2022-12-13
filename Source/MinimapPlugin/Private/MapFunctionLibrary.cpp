#include "MapFunctionLibrary.h"

class UObject;
class UMapTrackerComponent;
class AMapBackground;
class UMapIconComponent;
class UMapViewComponent;

UMapTrackerComponent* UMapFunctionLibrary::GetMapTracker(const UObject* WorldContextObject) {
    return NULL;
}

AMapBackground* UMapFunctionLibrary::GetFirstMapBackground(const UObject* WorldContextObject) {
    return NULL;
}

UMapViewComponent* UMapFunctionLibrary::FindMapView(UObject* WorldContextObject, const EMapViewSearchOption MapViewSearchOption) {
    return NULL;
}

bool UMapFunctionLibrary::DetectIsInView(const FVector2D& UV, const FVector2D& OuterRadiusUV, const bool bIsCircular) {
    return false;
}

bool UMapFunctionLibrary::ComputeViewFrustum(const UObject* WorldContextObject, UMapViewComponent* MapView, const bool bIsCircular, TArray<FVector2D>& CornerUVs, const float FloorDistance) {
    return false;
}

FVector2D UMapFunctionLibrary::ClampIntoView(const FVector2D& UV, const float OuterRadiusUV, const bool bIsCircular) {
    return FVector2D{};
}

TArray<UMapIconComponent*> UMapFunctionLibrary::BoxSelectInView(const FVector2D& StartUV, const FVector2D& EndUV, UMapViewComponent* MapView, const bool bIsCircular) {
    return TArray<UMapIconComponent*>();
}

UMapFunctionLibrary::UMapFunctionLibrary() {
}


#include "MapViewComponent.h"

class AMapBackground;
class UMapIconComponent;

bool UMapViewComponent::ViewContains(const FVector& WorldPos, const float WorldRadius) const {
    return false;
}

void UMapViewComponent::UnregisterMultiLevelMapBackground(AMapBackground* MapBackground) {
}

void UMapViewComponent::SetZoomScale(const float NewZoomScale) {
}

void UMapViewComponent::SetViewExtent(const float NewViewExtentX, const float NewViewExtentY) {
}

void UMapViewComponent::SetIconCategoryVisible(FName IconCategory, const bool bNewVisible) {
}

void UMapViewComponent::RegisterMultiLevelMapBackground(AMapBackground* MapBackground) {
}

bool UMapViewComponent::IsSameBackgroundLevel(const UMapIconComponent* MapIcon) {
    return false;
}

bool UMapViewComponent::IsIconCategoryVisible(FName IconCategory) const {
    return false;
}

float UMapViewComponent::GetZoomScale() const {
    return 0.0f;
}

TArray<FVector> UMapViewComponent::GetWorldCorners() {
    return TArray<FVector>();
}

void UMapViewComponent::GetViewYaw(const float WorldYaw, float& Yaw) {
}

void UMapViewComponent::GetViewExtent(float& ViewExtentX, float& ViewExtentY) const {
}

bool UMapViewComponent::GetViewCoordinates(const FVector& WorldPos, bool bForceRectangular, float& U, float& V) {
    return false;
}

float UMapViewComponent::GetViewAspectRatio() const {
    return 0.0f;
}

int32 UMapViewComponent::GetActiveBackgroundPriority(bool& IsInsideAnyBackground) {
    return 0;
}

int32 UMapViewComponent::GetActiveBackgroundLevel(const AMapBackground* MapBackground) {
    return 0;
}

void UMapViewComponent::DeprojectViewToWorld(const float U, const float V, FVector& WorldPos) {
}

UMapViewComponent::UMapViewComponent() {
    this->RotationMode = EMapViewRotationMode::UseFixedRotation;
    this->InheritedYawOffset = 90.00f;
    this->bSupportZooming = true;
    this->HeightProxy = NULL;
    this->BackgoundLevelCacheLifetime = 0.05f;
}


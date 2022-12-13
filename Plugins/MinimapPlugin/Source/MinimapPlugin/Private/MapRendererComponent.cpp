#include "MapRendererComponent.h"

class UMapViewComponent;

void UMapRendererComponent::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UMapRendererComponent::SetSize(const int32 Width, const int32 Height) {
}

void UMapRendererComponent::SetMargin(const int32 Left, const int32 TOP, const int32 Right, const int32 BOTTOM) {
}

void UMapRendererComponent::SetMapView(UMapViewComponent* InMapView) {
}

void UMapRendererComponent::SetIsRendered(const bool bNewIsRendered) {
}

void UMapRendererComponent::SetIsCircular(const bool bNewIsCircular) {
}

void UMapRendererComponent::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UMapRendererComponent::SetFrustumFloorDistance(const float NewFrustumFloorDistance) {
}

void UMapRendererComponent::SetDrawFrustum(const bool bNewDrawFrustum) {
}

void UMapRendererComponent::SetBackgroundFillColor(const FLinearColor& NewBackgroundFillColor) {
}

void UMapRendererComponent::SetAutoLocateMapView(const EMapViewSearchOption InAutoLocateMapView) {
}

bool UMapRendererComponent::IsRendered() const {
    return false;
}

bool UMapRendererComponent::IsCircular() const {
    return false;
}

float UMapRendererComponent::GetFrustumFloorDistance() const {
    return 0.0f;
}

bool UMapRendererComponent::GetDrawFrustum() const {
    return false;
}

FLinearColor UMapRendererComponent::GetBackgroundFillColor() const {
    return FLinearColor{};
}

UMapRendererComponent::UMapRendererComponent() {
    this->AutoLocateMapView = EMapViewSearchOption::Any;
    this->bIsCircular = false;
    this->bIsRendered = true;
    this->bDrawFrustum = false;
    this->FrustumFloorDistance = 300.00f;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->FillMaterialInstance = NULL;
    this->MapTracker = NULL;
    this->MapView = NULL;
    this->LastCanvas = NULL;
}


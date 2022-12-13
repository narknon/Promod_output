#include "MapIconComponent.h"

class UMaterialInstanceDynamic;
class UTexture2D;
class UMaterialInterface;
class UUserWidget;
class UMapViewComponent;

void UMapIconComponent::StartIconFade(float Time) {
}

void UMapIconComponent::SetObjectiveArrowTexture(UTexture2D* NewTexture) {
}

void UMapIconComponent::SetObjectiveArrowSize(const float NewObjectiveArrowSize) {
}

void UMapIconComponent::SetObjectiveArrowRotates(const bool bNewRotates) {
}

void UMapIconComponent::SetObjectiveArrowEnabled(const bool bNewObjectiveArrowEnabled) {
}

void UMapIconComponent::SetIconZOrder(const int32 NewZOrder) {
}

void UMapIconComponent::SetIconVisible(const bool bNewVisible) {
}

void UMapIconComponent::SetIconTooltipText(FName NewIconName) {
}

void UMapIconComponent::SetIconTexture(UTexture2D* NewIcon) {
}

void UMapIconComponent::SetIconSize(const float NewIconSize, const EIconSizeUnit NewIconSizeUnit) {
}

void UMapIconComponent::SetIconRotates(const bool bNewRotates) {
}

void UMapIconComponent::SetIconMaterialForUMG(UMaterialInterface* NewMaterial) {
}

void UMapIconComponent::SetIconMaterialForCanvas(UMaterialInterface* NewMaterial) {
}

void UMapIconComponent::SetIconInteractable(const bool bNewInteractable) {
}

void UMapIconComponent::SetIconFogRevealThreshold(const float NewFogRevealThreshold) {
}

void UMapIconComponent::SetIconFogInteraction(const EIconFogInteraction NewFogInteraction) {
}

void UMapIconComponent::SetIconDrawColor(const FLinearColor& NewDrawColor) {
}

void UMapIconComponent::SetIconBackgroundInteraction(const EIconBackgroundInteraction NewBackgroundInteraction) {
}

void UMapIconComponent::ResetIconMaterialForUMG() {
}

void UMapIconComponent::ResetIconMaterialForCanvas() {
}

void UMapIconComponent::RegisterMaterialInstanceFromUMG(UUserWidget* IconWidget, UMaterialInstanceDynamic* MatInst) {
}

void UMapIconComponent::ReceiveHoverStart() {
}

void UMapIconComponent::ReceiveHoverEnd() {
}

void UMapIconComponent::ReceiveClicked(const bool bIsLeftMouseButton) {
}

bool UMapIconComponent::MarkRenderedInView(UMapViewComponent* View, const bool bNewIsRendered) {
    return false;
}

bool UMapIconComponent::IsRenderedInView(UMapViewComponent* View) const {
    return false;
}

bool UMapIconComponent::IsObjectiveArrowEnabled() const {
    return false;
}

bool UMapIconComponent::IsIconVisible() const {
    return false;
}

bool UMapIconComponent::IsIconInteractable() const {
    return false;
}

UTexture2D* UMapIconComponent::GetObjectiveArrowTexture() const {
    return NULL;
}

float UMapIconComponent::GetObjectiveArrowSize() const {
    return 0.0f;
}

UMaterialInterface* UMapIconComponent::GetObjectiveArrowMaterialForUMG() const {
    return NULL;
}

UMaterialInterface* UMapIconComponent::GetObjectiveArrowMaterialForCanvas() const {
    return NULL;
}

int32 UMapIconComponent::GetIconZOrder() const {
    return 0;
}

FName UMapIconComponent::GetIconTooltipText() const {
    return NAME_None;
}

UTexture2D* UMapIconComponent::GetIconTexture() const {
    return NULL;
}

EIconSizeUnit UMapIconComponent::GetIconSizeUnit() const {
    return EIconSizeUnit::ScreenSpace;
}

float UMapIconComponent::GetIconSize() const {
    return 0.0f;
}

void UMapIconComponent::GetIconMaterialInstancesForUMG(TArray<UMaterialInstanceDynamic*>& MaterialInstances) {
}

void UMapIconComponent::GetIconMaterialInstancesForCanvas(TArray<UMaterialInstanceDynamic*>& MaterialInstances) {
}

UMaterialInterface* UMapIconComponent::GetIconMaterialForUMG() const {
    return NULL;
}

UMaterialInterface* UMapIconComponent::GetIconMaterialForCanvas() const {
    return NULL;
}

float UMapIconComponent::GetIconFogRevealThreshold() const {
    return 0.0f;
}

EIconFogInteraction UMapIconComponent::GetIconFogInteraction() const {
    return EIconFogInteraction::OnlyRenderWhenRevealing;
}

FLinearColor UMapIconComponent::GetIconDrawColor() const {
    return FLinearColor{};
}

EIconBackgroundInteraction UMapIconComponent::GetIconBackgroundInteraction() const {
    return EIconBackgroundInteraction::AlwaysRender;
}

void UMapIconComponent::FadeIcon(float InitialDelay, float FadeTime) {
}

bool UMapIconComponent::DoesObjectiveArrowRotate() const {
    return false;
}

bool UMapIconComponent::DoesIconRotate() const {
    return false;
}

UMapIconComponent::UMapIconComponent() {
    this->bIconVisible = true;
    this->bIconRotates = false;
    this->IconSizeUnit = EIconSizeUnit::ScreenSpace;
    this->IconSize = 32.00f;
    this->IconZOrder = 0;
    this->bObjectiveArrowEnabled = false;
    this->bObjectiveArrowRotates = true;
    this->ObjectiveArrowSize = 50.00f;
    this->bIconInteractable = true;
    this->IconBackgroundInteraction = EIconBackgroundInteraction::AlwaysRender;
    this->IconFogInteraction = EIconFogInteraction::AlwaysRenderUnderFog;
    this->IconFogRevealThreshold = 0.50f;
    this->bHideOwnerInsideFog = false;
    this->InitialIconMaterial_UMG = NULL;
    this->InitialIconMaterial_Canvas = NULL;
}


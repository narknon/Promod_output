#include "MapBackground.h"
#include "Components/SceneCaptureComponent2D.h"
#include "NavMesh/NavMeshRenderingComponent.h"

class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;
class UTexture2D;
class UMaterialInterface;
class UTexture;
class UMapRendererComponent;

void AMapBackground::SetBackgroundZOrder(const int32 NewBackgroundZOrder) {
}

void AMapBackground::SetBackgroundVisible(const bool bNewVisible) {
}

void AMapBackground::SetBackgroundTexture(const int32 Level, UTexture2D* NewBackgroundTexture) {
}

void AMapBackground::SetBackgroundPriority(const int32 NewBackgroundPriority) {
}

void AMapBackground::SetBackgroundOverlay(const int32 Level, UTextureRenderTarget2D* NewBackgroundOverlay) {
}

void AMapBackground::SetBackgroundMaterialForUMG(UMaterialInterface* NewMaterial) {
}

void AMapBackground::SetBackgroundMaterialForCanvas(UMaterialInterface* NewMaterial) {
}

void AMapBackground::RerenderBackground() {
}

bool AMapBackground::IsMultiLevel() const {
    return false;
}

bool AMapBackground::IsBackgroundVisible() const {
    return false;
}

int32 AMapBackground::GetBackgroundZOrder() const {
    return 0;
}

UTexture* AMapBackground::GetBackgroundTextureAtHeight(const float WorldZ) const {
    return NULL;
}

UTexture* AMapBackground::GetBackgroundTexture(const int32 Level) const {
    return NULL;
}

int32 AMapBackground::GetBackgroundPriority() const {
    return 0;
}

UTextureRenderTarget2D* AMapBackground::GetBackgroundOverlay(const int32 Level) const {
    return NULL;
}

UMaterialInstanceDynamic* AMapBackground::GetBackgroundMaterialInstanceForCanvas(UMapRendererComponent* Renderer) {
    return NULL;
}

UMaterialInterface* AMapBackground::GetBackgroundMaterialForUMG() const {
    return NULL;
}

AMapBackground::AMapBackground() {
    this->BackgroundLevels.AddDefaulted(1);
    this->bBackgroundVisible = true;
    this->BackgroundPriority = 0;
    this->BackgroundZOrder = 0;
    this->DynamicRenderTargetSize = 1024;
    this->bRenderNavigationMesh = true;
    this->HiddenActorClasses.AddDefaulted(1);
    this->CaptureComponent2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponent2D"));
    this->NavMeshRenderingComponent = CreateDefaultSubobject<UNavMeshRenderingComponent>(TEXT("NavMeshRenderer"));
}


#include "MapFog.h"

class UMaterialInterface;
class UMapRevealerComponent;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;
class UMapRendererComponent;

void AMapFog::SetFogMaterialForUMG(UMaterialInterface* NewMaterial) {
}

void AMapFog::SetFogMaterialForCanvas(UMaterialInterface* NewMaterial) {
}

void AMapFog::OnMapRevealerUnregistered(UMapRevealerComponent* MapRevealer) {
}

void AMapFog::OnMapRevealerRegistered(UMapRevealerComponent* MapRevealer) {
}

float AMapFog::GetWorldToPixelRatio() const {
    return 0.0f;
}

UTextureRenderTarget2D* AMapFog::GetSourceFogRenderTarget() const {
    return NULL;
}

UMaterialInstanceDynamic* AMapFog::GetFogMaterialInstanceForCanvas(UMapRendererComponent* Renderer) {
    return NULL;
}

UMaterialInterface* AMapFog::GetFogMaterialForUMG() {
    return NULL;
}

bool AMapFog::GetFogAtLocation(const FVector& WorldLocation, const bool bRequireCurrentlyRevealing, float& RevealFactor) {
    return false;
}

UTextureRenderTarget2D* AMapFog::GetDestinationFogRenderTarget() const {
    return NULL;
}

AMapFog::AMapFog() {
    this->FogRenderTargetSize = 256;
    this->MinimapOpacityHidden = 0.50f;
    this->MinimapOpacityExplored = 0.80f;
    this->MinimapOpacityRevealing = 1.00f;
    this->FogCacheLifetime = 0.05f;
    this->bEnableWorldFog = true;
    this->WorldOpacityHidden = 0.50f;
    this->WorldOpacityExplored = 0.80f;
    this->WorldOpacityRevealing = 1.00f;
    this->PostProcessVolume = NULL;
    this->AutoLocatePostProcessVolume = EFogPostProcessVolumeOption::AutoLocateOrCreate;
    this->PermanentRevealRT_A = NULL;
    this->PermanentRevealRT_B = NULL;
    this->RevealRT_Staging = NULL;
    this->FogCombineMatInst = NULL;
    this->FogPostProcessMatInst = NULL;
}


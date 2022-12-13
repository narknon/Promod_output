#include "BattalionImpactEffect.h"

class UAkAudioEvent;
class UParticleSystem;

UAkAudioEvent* ABattalionImpactEffect::GetImpactSound(TEnumAsByte<EPhysicalSurface> SurfaceType) const {
    return NULL;
}

FVector ABattalionImpactEffect::GetImpactFXScalar(TEnumAsByte<EPhysicalSurface> SurfaceType) const {
    return FVector{};
}

FRotator ABattalionImpactEffect::GetImpactFXRotator(TEnumAsByte<EPhysicalSurface> SurfaceType) const {
    return FRotator{};
}

UParticleSystem* ABattalionImpactEffect::GetImpactFX(TEnumAsByte<EPhysicalSurface> SurfaceType) const {
    return NULL;
}


ABattalionImpactEffect::ABattalionImpactEffect() {
    this->DefaultFX = NULL;
    this->ConcreteFX = NULL;
    this->DirtFX = NULL;
    this->WaterFX = NULL;
    this->MetalFX = NULL;
    this->WoodFX = NULL;
    this->GlassFX = NULL;
    this->GrassFX = NULL;
    this->FleshFX = NULL;
    this->SandFX = NULL;
    this->DecalRenderDistance = 0.00f;
    this->DefaultSound = NULL;
    this->ConcreteSound = NULL;
    this->DirtSound = NULL;
    this->WaterSound = NULL;
    this->MetalSound = NULL;
    this->WoodSound = NULL;
    this->GlassSound = NULL;
    this->GrassSound = NULL;
    this->FleshSound = NULL;
    this->SandSound = NULL;
    this->BellSound = NULL;
    this->FadeScreenSize = 0.00f;
}


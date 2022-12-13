#include "BattalionExplosionEffect.h"
#include "Components/PointLightComponent.h"

ABattalionExplosionEffect::ABattalionExplosionEffect() {
    this->ExplosionFX = NULL;
    this->ExplosionLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("ExplosionLight"));
    this->ExplosionLightFadeOut = 0.20f;
    this->ExplosionSound = NULL;
}


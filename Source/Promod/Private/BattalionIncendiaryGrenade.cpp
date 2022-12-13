#include "BattalionIncendiaryGrenade.h"
#include "AkComponent.h"

ABattalionIncendiaryGrenade::ABattalionIncendiaryGrenade() {
    this->bFuseTimerEnded = false;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->IncendiaryEffectClass = NULL;
    this->EmitterComponent = NULL;
    this->IncendiaryEffect = NULL;
}


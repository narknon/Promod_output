#include "PromodBot.h"
#include "AkComponent.h"
#include "Components/WidgetComponent.h"
#include "MapIconComponent.h"

class APatrolPath;

void APromodBot::Shutdown() {
}


void APromodBot::MaterializationFinished(bool bMaterializeIn) {
}

void APromodBot::Initialize() {
}


APatrolPath* APromodBot::GetPatrolPath() {
    return NULL;
}

float APromodBot::GetDefaultStandingHeight() const {
    return 0.0f;
}

void APromodBot::EnableRagdoll() {
}



APromodBot::APromodBot() {
    this->MapIconComponent = CreateDefaultSubobject<UMapIconComponent>(TEXT("MapIcon"));
    this->SpatialMarkerComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("SpatialMarker"));
    this->StateMachineClass = NULL;
    this->PatrolPath = NULL;
    this->BaseHealth = 100.00f;
    this->HealthRegenDelay = 5.00f;
    this->HealthRegenSpeed = 0.50f;
    this->DisplayName = TEXT("Promod Bot");
    this->CurrentHealth = 100.00f;
    this->bInitialized = false;
    this->bHealthRegenerating = false;
    this->LastHitTime = 0.00f;
    this->HealthToRegenerate = 0.00f;
    this->HitmarkerFlash = NULL;
    this->HitmarkerKill = NULL;
    this->HeadshotKill = NULL;
    this->DeathSound = NULL;
    this->DeathAnim = NULL;
    this->bPlaySpawnSound = true;
    this->KnifeDamageType = NULL;
    this->QuickMeleeDamageType = NULL;
    this->FallDamageType = NULL;
    this->NadeDamageType = NULL;
    this->DefaultAkComp = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultAkComponent"));
    this->SpawnSound = NULL;
    this->UnSpawnSound = NULL;
}


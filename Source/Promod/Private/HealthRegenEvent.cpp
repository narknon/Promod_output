#include "HealthRegenEvent.h"

FHealthRegenEvent::FHealthRegenEvent() {
    this->PercentageToHeal = 0.00f;
    this->TimeToHeal = 0.00f;
    this->HealStartDelay = 0.00f;
    this->bCanBeInterrupted = false;
    this->TimeStarted = 0.00f;
    this->bActive = false;
    this->bCompleted = false;
    this->AmountAlreadyHealed = 0.00f;
}


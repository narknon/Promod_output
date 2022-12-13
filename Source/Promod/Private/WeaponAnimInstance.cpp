#include "WeaponAnimInstance.h"

UWeaponAnimInstance::UWeaponAnimInstance() {
    this->Empty = false;
    this->TransitionProgress = 0.00f;
    this->TPStandingOrCrouched = 0.00f;
    this->bIsMeleeing = false;
}


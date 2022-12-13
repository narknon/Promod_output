#include "NuclearInputSystem.h"

void UNuclearInputSystem::SetInputType(ENuclearInputType InputType, bool bForceOverride) {
}

bool UNuclearInputSystem::IsUsingGamepad() const {
    return false;
}

ENuclearInputType UNuclearInputSystem::GetInputType() const {
    return ENuclearInputType::None;
}

UNuclearInputSystem::UNuclearInputSystem() {
    this->ControllerAnalogThreshold = 0.15f;
}


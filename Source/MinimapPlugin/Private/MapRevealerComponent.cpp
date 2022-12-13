#include "MapRevealerComponent.h"

void UMapRevealerComponent::SetRevealMode(const EMapFogRevealMode NewRevealMode) {
}

void UMapRevealerComponent::SetRevealExtent(const float NewRevealExtentX, const float NewRevealExtentY) {
}

void UMapRevealerComponent::SetRevealDropOffDistance(const float NewRevealDropOffDistance) {
}

EMapFogRevealMode UMapRevealerComponent::GetRevealMode() const {
    return EMapFogRevealMode::Off;
}

void UMapRevealerComponent::GetRevealExtent(float& RevealExtentX, float& RevealExtentY) const {
}

float UMapRevealerComponent::GetRevealDropOffDistance() const {
    return 0.0f;
}

UMapRevealerComponent::UMapRevealerComponent() {
    this->RevealMode = EMapFogRevealMode::Temporary;
    this->RevealDropOffDistance = 100.00f;
    this->bTempEngineBugWorkaround = true;
    this->RevealMaterialInstance = NULL;
}


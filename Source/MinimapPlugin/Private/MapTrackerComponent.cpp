#include "MapTrackerComponent.h"

class UMapRevealerComponent;
class UMapIconComponent;
class AMapFog;
class AMapBackground;

bool UMapTrackerComponent::HasMapFog() const {
    return false;
}

TArray<UMapRevealerComponent*> UMapTrackerComponent::GetMapRevealers() const {
    return TArray<UMapRevealerComponent*>();
}

TArray<UMapIconComponent*> UMapTrackerComponent::GetMapIcons() const {
    return TArray<UMapIconComponent*>();
}

TArray<AMapFog*> UMapTrackerComponent::GetMapFogs() const {
    return TArray<AMapFog*>();
}

TArray<AMapBackground*> UMapTrackerComponent::GetMapBackgrounds() const {
    return TArray<AMapBackground*>();
}

float UMapTrackerComponent::GetFogRevealedFactor(const FVector& WorldLocation, const bool bRequireCurrentlyRevealing, bool& bIsInsideFogVolume) const {
    return 0.0f;
}

UMapTrackerComponent::UMapTrackerComponent() {
}


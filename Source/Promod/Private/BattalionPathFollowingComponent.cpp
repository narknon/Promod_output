#include "BattalionPathFollowingComponent.h"
#include "Components/SplineComponent.h"

UBattalionPathFollowingComponent::UBattalionPathFollowingComponent() {
    this->SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
}


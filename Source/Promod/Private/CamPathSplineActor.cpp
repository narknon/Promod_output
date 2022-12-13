#include "CamPathSplineActor.h"
#include "Components/SplineComponent.h"

ACamPathSplineActor::ACamPathSplineActor() {
    this->SplineCompLoc = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    this->SplineCompRot = CreateDefaultSubobject<USplineComponent>(TEXT("SplineCompRot"));
}


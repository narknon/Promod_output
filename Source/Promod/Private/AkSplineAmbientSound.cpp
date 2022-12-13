#include "AkSplineAmbientSound.h"
#include "Components/SplineComponent.h"

AAkSplineAmbientSound::AAkSplineAmbientSound() {
    this->AmbientSoundSpline = CreateDefaultSubobject<USplineComponent>(TEXT("AmbientSoundSpline0"));
    this->bStayStill = false;
    this->bDrawDebug = false;
}


#include "AimTrainingTarget.h"
#include "Components/StaticMeshComponent.h"

AAimTrainingTarget::AAimTrainingTarget() {
    this->TargetMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TargetMesh"));
}


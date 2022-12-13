#include "PatrolPoint.h"
#include "Components/SceneComponent.h"

FVector APatrolPoint::GetFocalPoint() const {
    return FVector{};
}

APatrolPoint::APatrolPoint() {
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->MinWaitTime = 1.00f;
    this->MaxWaitTime = 1.00f;
    this->bUsePointRotation = true;
    this->bStopAtPatrolPoint = true;
    this->PointIndex = 0;
    this->OwningPath = NULL;
}


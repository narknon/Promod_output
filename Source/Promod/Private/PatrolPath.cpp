#include "PatrolPath.h"
#include "Components/SplineComponent.h"
#include "Components/SceneComponent.h"

class APatrolPoint;

FRotator APatrolPath::GetPointRotation(const int32 Index) const {
    return FRotator{};
}

FVector APatrolPath::GetPointLocation(const int32 Index) const {
    return FVector{};
}

APatrolPoint* APatrolPath::GetPatrolPoint(const int32 Index) const {
    return NULL;
}

void APatrolPath::GetNextPointIndex(int32 currentIndex, int32 CurrentDirection, int32& NextIndex, int32& NewDirection) {
}

APatrolPath::APatrolPath() {
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    this->PathSplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("PathSplineComp"));
    this->LoopPath = false;
    this->ShowAIPath = false;
}


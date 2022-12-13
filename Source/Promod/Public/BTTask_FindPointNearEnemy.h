#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_FindPointNearEnemy.generated.h"

UCLASS(Blueprintable)
class UBTTask_FindPointNearEnemy : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_FindPointNearEnemy();
};


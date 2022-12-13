#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_FindPickup.generated.h"

UCLASS(Blueprintable)
class UBTTask_FindPickup : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_FindPickup();
};


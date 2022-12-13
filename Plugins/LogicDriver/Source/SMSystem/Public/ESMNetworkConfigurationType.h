#pragma once
#include "CoreMinimal.h"
#include "ESMNetworkConfigurationType.generated.h"

UENUM(BlueprintType)
enum ESMNetworkConfigurationType {
    SM_Client,
    SM_Server,
    SM_ClientAndServer,
    SM_MAX UMETA(Hidden),
};


#pragma once
#include "CoreMinimal.h"
#include "EAzureVmFamily.generated.h"

UENUM(BlueprintType)
enum class EAzureVmFamily : uint8 {
    pfenum_A,
    pfenum_Av2,
    pfenum_Dv2,
    pfenum_F,
    pfenum_Fsv2,
    pfenum_MAX UMETA(Hidden),
};


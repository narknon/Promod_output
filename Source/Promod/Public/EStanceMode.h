#pragma once
#include "CoreMinimal.h"
#include "EStanceMode.generated.h"

UENUM(BlueprintType)
enum EStanceMode {
    STANCE_Stand,
    STANCE_Crouch,
    STANCE_Prone,
    STANCE_MAX UMETA(Hidden),
};


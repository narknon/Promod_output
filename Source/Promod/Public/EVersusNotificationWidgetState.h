#pragma once
#include "CoreMinimal.h"
#include "EVersusNotificationWidgetState.generated.h"

UENUM(BlueprintType)
enum class EVersusNotificationWidgetState : uint8 {
    EVNWS_Idle,
    EVNWS_FadeIn,
    EVNWS_ShowNewNumber,
    ENVWS_FadeOut,
};


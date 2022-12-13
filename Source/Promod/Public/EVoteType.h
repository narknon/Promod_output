#pragma once
#include "CoreMinimal.h"
#include "EVoteType.generated.h"

UENUM(BlueprintType)
enum class EVoteType : uint8 {
    Vote_Kick,
    Vote_OfferSurrender,
    Vote_Surrender,
    Vote_KnifeWinners,
    Vote_TechnicalTimeout,
    Vote_TacticalTimeout,
    Vote_MAX UMETA(Hidden),
};


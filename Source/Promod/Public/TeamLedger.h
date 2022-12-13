#pragma once
#include "CoreMinimal.h"
#include "TokenEvent.h"
#include "TeamLedger.generated.h"

USTRUCT(BlueprintType)
struct FTeamLedger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTokenEvent> Events;
    
    PROMOD_API FTeamLedger();
};


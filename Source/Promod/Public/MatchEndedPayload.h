#pragma once
#include "CoreMinimal.h"
#include "MatchEndedPayload.generated.h"

USTRUCT(BlueprintType)
struct FMatchEndedPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    PROMOD_API FMatchEndedPayload();
};


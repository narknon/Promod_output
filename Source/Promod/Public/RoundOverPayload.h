#pragma once
#include "CoreMinimal.h"
#include "RoundOverPayload.generated.h"

USTRUCT(BlueprintType)
struct FRoundOverPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BombExploded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    PROMOD_API FRoundOverPayload();
};


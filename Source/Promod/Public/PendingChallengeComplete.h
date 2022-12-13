#pragma once
#include "CoreMinimal.h"
#include "PendingChallengeComplete.generated.h"

USTRUCT(BlueprintType)
struct FPendingChallengeComplete {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChallengeCompletedDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChallengeCompletedType;
    
    PROMOD_API FPendingChallengeComplete();
};


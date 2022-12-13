#pragma once
#include "CoreMinimal.h"
#include "EOnlinePlatform.h"
#include "RequestCompletedChallengeUser.generated.h"

USTRUCT(BlueprintType)
struct FRequestCompletedChallengeUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlinePlatform OnlinePlatform;
    
    PROMOD_API FRequestCompletedChallengeUser();
};


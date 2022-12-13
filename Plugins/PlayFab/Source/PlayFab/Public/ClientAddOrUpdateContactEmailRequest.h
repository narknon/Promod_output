#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientAddOrUpdateContactEmailRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAddOrUpdateContactEmailRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmailAddress;
    
    FClientAddOrUpdateContactEmailRequest();
};


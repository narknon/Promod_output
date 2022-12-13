#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUpdateUserTitleDisplayNameRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUpdateUserTitleDisplayNameRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    FClientUpdateUserTitleDisplayNameRequest();
};


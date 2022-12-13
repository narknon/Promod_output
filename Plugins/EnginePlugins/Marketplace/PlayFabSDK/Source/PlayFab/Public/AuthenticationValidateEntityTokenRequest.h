#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AuthenticationValidateEntityTokenRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationValidateEntityTokenRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntityToken;
    
    FAuthenticationValidateEntityTokenRequest();
};


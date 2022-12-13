#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetTitleDataRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetTitleDataRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Keys;
    
    FClientGetTitleDataRequest();
};


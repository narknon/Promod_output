#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkCustomIDRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkCustomIDRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomId;
    
    FClientUnlinkCustomIDRequest();
};


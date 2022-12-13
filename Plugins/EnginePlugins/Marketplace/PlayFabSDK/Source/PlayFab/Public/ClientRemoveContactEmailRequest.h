#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientRemoveContactEmailRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientRemoveContactEmailRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FClientRemoveContactEmailRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "LocalizationGetLanguageListRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FLocalizationGetLanguageListRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FLocalizationGetLanguageListRequest();
};


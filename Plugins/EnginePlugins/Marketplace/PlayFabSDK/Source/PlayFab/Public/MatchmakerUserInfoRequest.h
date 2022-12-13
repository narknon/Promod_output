#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MatchmakerUserInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerUserInfoRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCatalogVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FMatchmakerUserInfoRequest();
};


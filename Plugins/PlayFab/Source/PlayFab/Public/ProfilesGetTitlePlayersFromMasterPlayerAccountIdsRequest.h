#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MasterPlayerAccountIds;
    
    FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest();
};


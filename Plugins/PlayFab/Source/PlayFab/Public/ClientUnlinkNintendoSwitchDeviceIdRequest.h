#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkNintendoSwitchDeviceIdRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NintendoSwitchDeviceId;
    
    FClientUnlinkNintendoSwitchDeviceIdRequest();
};


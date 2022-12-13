#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EOperationTypes.h"
#include "ProfilesSetDisplayNameResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesSetDisplayNameResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOperationTypes OperationResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VersionNumber;
    
    FProfilesSetDisplayNameResponse();
};


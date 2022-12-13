#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalFlagDomination.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedalFlagDomination : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedalFlagDomination();
};


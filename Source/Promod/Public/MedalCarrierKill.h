#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalCarrierKill.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedalCarrierKill : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedalCarrierKill();
};


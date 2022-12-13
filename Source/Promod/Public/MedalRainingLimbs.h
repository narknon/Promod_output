#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalRainingLimbs.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalRainingLimbs : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalRainingLimbs();
};


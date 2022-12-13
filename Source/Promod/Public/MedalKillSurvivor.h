#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalKillSurvivor.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalKillSurvivor : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalKillSurvivor();
};


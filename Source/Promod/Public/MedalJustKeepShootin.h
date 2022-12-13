#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalJustKeepShootin.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalJustKeepShootin : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalJustKeepShootin();
};


#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalZombieland.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalZombieland : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalZombieland();
};


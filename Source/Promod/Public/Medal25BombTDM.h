#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal25BombTDM.generated.h"

class ATDMGameMode;

UCLASS(Blueprintable)
class UMedal25BombTDM : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATDMGameMode* TDMGameMode;
    
    UMedal25BombTDM();
};


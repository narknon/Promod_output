#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal30BombTDM.generated.h"

class ATDMGameMode;

UCLASS(Blueprintable)
class UMedal30BombTDM : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATDMGameMode* TDMGameMode;
    
    UMedal30BombTDM();
};


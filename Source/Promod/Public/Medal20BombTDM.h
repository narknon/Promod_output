#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal20BombTDM.generated.h"

class ATDMGameMode;

UCLASS(Blueprintable)
class UMedal20BombTDM : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATDMGameMode* TDMGameMode;
    
    UMedal20BombTDM();
};


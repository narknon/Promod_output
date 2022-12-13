#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal50BombHQ.generated.h"

class AHQGameMode;

UCLASS(Blueprintable)
class UMedal50BombHQ : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHQGameMode* HQGameMode;
    
    UMedal50BombHQ();
};


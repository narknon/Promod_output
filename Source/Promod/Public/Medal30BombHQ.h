#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal30BombHQ.generated.h"

class AHQGameMode;

UCLASS(Blueprintable)
class UMedal30BombHQ : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHQGameMode* HQGameMode;
    
    UMedal30BombHQ();
};


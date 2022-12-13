#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal40BombHQ.generated.h"

class AHQGameMode;

UCLASS(Blueprintable)
class UMedal40BombHQ : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHQGameMode* HQGameMode;
    
    UMedal40BombHQ();
};


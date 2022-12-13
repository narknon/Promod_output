#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal10BombWartide.generated.h"

class AWartideGameMode;

UCLASS(Blueprintable)
class UMedal10BombWartide : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UMedal10BombWartide();
};


#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal15BombWartide.generated.h"

class AWartideGameMode;

UCLASS(Blueprintable)
class UMedal15BombWartide : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UMedal15BombWartide();
};


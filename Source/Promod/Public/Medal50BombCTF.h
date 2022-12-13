#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal50BombCTF.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedal50BombCTF : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedal50BombCTF();
};


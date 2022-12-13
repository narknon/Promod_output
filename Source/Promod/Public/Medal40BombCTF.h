#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal40BombCTF.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedal40BombCTF : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedal40BombCTF();
};


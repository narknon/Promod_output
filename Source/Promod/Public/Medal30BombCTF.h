#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal30BombCTF.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedal30BombCTF : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedal30BombCTF();
};


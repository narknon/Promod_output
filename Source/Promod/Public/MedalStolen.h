#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalStolen.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedalStolen : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedalStolen();
};


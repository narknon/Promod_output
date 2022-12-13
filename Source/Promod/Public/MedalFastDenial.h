#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalFastDenial.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedalFastDenial : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedalFastDenial();
};


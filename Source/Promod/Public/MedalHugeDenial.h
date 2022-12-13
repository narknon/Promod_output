#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalHugeDenial.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedalHugeDenial : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedalHugeDenial();
};


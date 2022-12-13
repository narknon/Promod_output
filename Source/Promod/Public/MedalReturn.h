#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalReturn.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedalReturn : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedalReturn();
};


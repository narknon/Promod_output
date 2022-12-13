#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalStealthCapture.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedalStealthCapture : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedalStealthCapture();
};


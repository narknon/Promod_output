#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalCapture.generated.h"

class ACTFGameMode;

UCLASS(Blueprintable)
class UMedalCapture : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFGameMode* CTFGameMode;
    
    UMedalCapture();
};


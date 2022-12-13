#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "OneTapKillerExpiry.h"
#include "MedalTacNade.generated.h"

UCLASS(Blueprintable)
class UMedalTacNade : public UMedalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOneTapKillerExpiry> KillerExpiryArray;
    
public:
    UMedalTacNade();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FFAHUD.h"
#include "OneInTheChamberHUD.generated.h"

class UNUIOneInTheChamberLivesLeft;

UCLASS(Blueprintable, NonTransient)
class AOneInTheChamberHUD : public AFFAHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIOneInTheChamberLivesLeft* OINTLivesLeft;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIOneInTheChamberLivesLeft> OINTLivesLeftClass;
    
public:
    AOneInTheChamberHUD();
};


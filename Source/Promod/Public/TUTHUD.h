#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionHUD.h"
#include "TUTHUD.generated.h"

class UNUIBuyScreen;

UCLASS(Blueprintable, NonTransient)
class ATUTHUD : public ABattalionHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIBuyScreen* BuyScreen;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIBuyScreen> BuyScreenClass;
    
public:
    ATUTHUD();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BombHUD.h"
#include "WartideHUD.generated.h"

class UNUIBuyScreen;
class UNUIWartideRoundResult;

UCLASS(Blueprintable, NonTransient)
class AWartideHUD : public ABombHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIWartideRoundResult* RoundResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIBuyScreen* BuyScreen;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIWartideRoundResult> RoundResultClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIBuyScreen> BuyScreenClass;
    
public:
    AWartideHUD();
};


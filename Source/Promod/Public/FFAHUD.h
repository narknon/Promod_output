#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionHUD.h"
#include "FFAHUD.generated.h"

class UNUIWeaponPrompt;
class UNUIBuyScreen;
class UNUIFFAObjectiveScores;

UCLASS(Blueprintable, NonTransient)
class AFFAHUD : public ABattalionHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIBuyScreen* BuyScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIWeaponPrompt* WeaponPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIFFAObjectiveScores* FFAObjectiveScore;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIBuyScreen> BuyScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIWeaponPrompt> WeaponPromptClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIFFAObjectiveScores> FFAObjectiveScoreClass;
    
public:
    AFFAHUD();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionHUD.h"
#include "BombHUD.generated.h"

class UNUIBombIcon;

UCLASS(Blueprintable, NonTransient)
class ABombHUD : public ABattalionHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIBombIcon* bombicon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIBombIcon> BombIconClass;
    
public:
    ABombHUD();
};


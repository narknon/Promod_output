#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIWeaponSwapPrompt.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIWeaponSwapPrompt : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText BindName;
    
public:
    UNUIWeaponSwapPrompt();
};


#pragma once
#include "CoreMinimal.h"
#include "LoadoutCard.h"
#include "NUIBaseUIElement.h"
#include "NUILoadoutCard.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUILoadoutCard : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutCard CardData;
    
    UNUILoadoutCard();
};


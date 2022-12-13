#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "UObject/NoExportTypes.h"
#include "NUIGameTimer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIGameTimer : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
public:
    UNUIGameTimer();
};


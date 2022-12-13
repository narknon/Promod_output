#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "UObject/NoExportTypes.h"
#include "NUIRoundResult.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIRoundResult : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ResultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ReasonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ResultColor;
    
public:
    UNUIRoundResult();
};


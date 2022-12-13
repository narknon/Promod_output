#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "UObject/NoExportTypes.h"
#include "NUIWartideRoundResult.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIWartideRoundResult : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ResultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ReasonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ResultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ResultTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RoundEndTokensWidgetWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RoundEndTokensWidgetTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Spectating;
    
public:
    UNUIWartideRoundResult();
};


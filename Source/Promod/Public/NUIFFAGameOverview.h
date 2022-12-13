#pragma once
#include "CoreMinimal.h"
#include "NUIGameOverview.h"
#include "Components/SlateWrapperTypes.h"
#include "NUIFFAGameOverview.generated.h"

class AFFAPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIFFAGameOverview : public UNUIGameOverview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFFAPlayerState* OpponentPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeftLeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RightLeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility LeftLeaderVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RightLeaderVisibility;
    
public:
    UNUIFFAGameOverview();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NationInfoChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaderChanged();
    
};


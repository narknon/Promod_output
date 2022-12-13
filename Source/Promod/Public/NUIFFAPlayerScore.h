#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIFFAPlayerScore.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIFFAPlayerScore : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OldPlayerScore;
    
    UNUIFFAPlayerScore();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerScoreChanged();
    
};


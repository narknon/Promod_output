#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "UObject/NoExportTypes.h"
#include "ENationType.h"
#include "NUITwoTeamScores.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUITwoTeamScores : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamOneScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamTwoScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TeamOneColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TeamTwoColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENationType TeamOneNation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENationType TeamTwoNation;
    
    UNUITwoTeamScores();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeamScoresChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeamNationsChanged();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NUIObjectiveScores.h"
#include "ENationType.h"
#include "NUITDMObjectiveScores.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUITDMObjectiveScores : public UNUIObjectiveScores {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllyTeamNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyTeamNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENationType AllyNationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENationType EnemyNationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AllyTeamColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EnemyTeamColor;
    
    UNUITDMObjectiveScores();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeamDataChanged();
    
};


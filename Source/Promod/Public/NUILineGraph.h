#pragma once
#include "CoreMinimal.h"
#include "NUIGraphBase.h"
#include "LineGraphPointArray.h"
#include "NUILineGraph.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUILineGraph : public UNUIGraphBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLineGraphPointArray> Lines;
    
    UNUILineGraph();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBetterMinMaxValues(float& NewMin, float& NewMax, float CurrMin, float CurrMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void AverageValue(TArray<float> Values, float& Average);
    
};


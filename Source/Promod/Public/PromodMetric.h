#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PromodMetric.generated.h"

UCLASS(Blueprintable, Within=PromodMetricsSystem)
class UPromodMetric : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmoothSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothingFactor;
    
    UPromodMetric();
    UFUNCTION(BlueprintCallable)
    void SetNumSamples(int32 NumSamples);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue(bool bAverage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinMaxValues(float& Min, float& Max) const;
    
    UFUNCTION(BlueprintCallable)
    void AddSample(float Value, bool bForceRaw);
    
};


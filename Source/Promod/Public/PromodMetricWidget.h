#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PromodMetricWidget.generated.h"

class UPromodMetric;

UCLASS(Blueprintable, EditInlineNew)
class UPromodMetricWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MetricName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodMetric* Metric;
    
    UPromodMetricWidget();
};


#pragma once
#include "CoreMinimal.h"
#include "PromodCourseTimeData.generated.h"

USTRUCT(BlueprintType)
struct FPromodCourseTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonalBestCourseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PersonalBestSplitTimes;
    
    PROMOD_API FPromodCourseTimeData();
};


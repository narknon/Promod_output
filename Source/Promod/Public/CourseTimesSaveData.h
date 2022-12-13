#pragma once
#include "CoreMinimal.h"
#include "PromodSaveData.h"
#include "PromodCourseTimeData.h"
#include "CourseTimesSaveData.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UCourseTimesSaveData : public UPromodSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPromodCourseTimeData> CourseTimeData;
    
    UCourseTimesSaveData();
    UFUNCTION(BlueprintCallable)
    void SaveDataForCourse(const FString& MapName, FPromodCourseTimeData NewData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPromodCourseTimeData GetDataForCourse(const FString& MapName);
    
};


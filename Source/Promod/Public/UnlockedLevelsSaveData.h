#pragma once
#include "CoreMinimal.h"
#include "PromodSaveData.h"
#include "UnlockedLevelsSaveData.generated.h"

UCLASS(Blueprintable)
class UUnlockedLevelsSaveData : public UPromodSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UnlockedLevelNames;
    
    UUnlockedLevelsSaveData();
};


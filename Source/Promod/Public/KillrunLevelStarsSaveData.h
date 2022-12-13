#pragma once
#include "CoreMinimal.h"
#include "PromodSaveData.h"
#include "KillrunLevelStarsSaveData.generated.h"

UCLASS(Blueprintable)
class UKillrunLevelStarsSaveData : public UPromodSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> LevelToStarsMap;
    
    UKillrunLevelStarsSaveData();
    UFUNCTION(BlueprintCallable)
    int32 GetTotalStarsSaved();
    
};


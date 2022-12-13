#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EScoreAwardType.h"
#include "PromodGameModeScoreAwardsDataAsset.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UPromodGameModeScoreAwardsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EScoreAwardType, int32> ScoreAwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EScoreAwardType, float> FireUpAwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimedObjectiveAwardTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTimedObjectiveAward;
    
    UPromodGameModeScoreAwardsDataAsset();
    UFUNCTION(BlueprintCallable)
    void ResetMapToDefaults();
    
    UFUNCTION(BlueprintCallable)
    int32 GetScoreFromAwardType(EScoreAwardType Type);
    
    UFUNCTION(BlueprintCallable)
    float GetFireUpScoreFromAwardType(EScoreAwardType Type);
    
};


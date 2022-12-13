#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TUTGameMode.h"
#include "ELiveFireTrainingDifficulty.h"
#include "LiveFireTrainingDetails.h"
#include "LiveFireGameMode.generated.h"

class APromodBot;

UCLASS(Blueprintable, NonTransient)
class PROMOD_API ALiveFireGameMode : public ATUTGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRandomLocationForBotSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveFireTrainingDifficulty CurrentDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELiveFireTrainingDifficulty, FLiveFireTrainingDetails> DifficultyModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APromodBot> BotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBotsSpawned;
    
public:
    ALiveFireGameMode();
    UFUNCTION(BlueprintCallable)
    void StartTraining();
    
    UFUNCTION(BlueprintCallable)
    void SpawnBot();
    
    UFUNCTION(BlueprintCallable)
    bool SetSpawnCount(int32 NewSpawnCount);
    
    UFUNCTION(BlueprintCallable)
    bool SetDifficulty(ELiveFireTrainingDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrainingActive() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTraining();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PFPlayerId.h"
#include "PFPlayerData.h"
#include "BattalionMedalManager.generated.h"

class UBattalionGameInstance;
class UPFPlayerDataManager;
class UPFPlayerIdCache;
class UMedalBase;
class ABattalionGameMode;
class ABattalionGameState;

UCLASS(Blueprintable, Config=Game, Within=BattalionGameInstance)
class UBattalionMedalManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFPlayerDataManager* PFPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFPlayerIdCache* PFPlayerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMedalBase*> Medals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateFrequency;
    
public:
    UBattalionMedalManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedPlayerData(const FPFPlayerId& PlayerId, const TArray<FPFPlayerData>& Data);
    
};


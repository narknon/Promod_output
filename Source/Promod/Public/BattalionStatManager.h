#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BattalionStatManager.generated.h"

class UBattalionGameInstance;
class UPFPlayerDataManager;
class UPFPlayerIdCache;

UCLASS(Blueprintable, Config=Game, Within=BattalionGameInstance)
class UBattalionStatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFPlayerDataManager* PFPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFPlayerIdCache* PFPlayerCache;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateClientFrequency;
    
public:
    UBattalionStatManager();
};


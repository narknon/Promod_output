#pragma once
#include "CoreMinimal.h"
#include "MapPlayerStats.h"
#include "MapStatList.generated.h"

USTRUCT(BlueprintType)
struct FMapStatList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFriendList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapPlayerStats> PlayerStats;
    
    PROMOD_API FMapStatList();
};


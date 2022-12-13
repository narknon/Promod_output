#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPingType.h"
#include "PingableData.h"
#include "PromodPingablesDataAsset.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UPromodPingablesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPingType, FPingableData> PingableData;
    
    UPromodPingablesDataAsset();
    UFUNCTION(BlueprintCallable)
    FPingableData GetPingableData(EPingType PingType);
    
};


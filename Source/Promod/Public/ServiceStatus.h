#pragma once
#include "CoreMinimal.h"
#include "FlightingPeriod.h"
#include "EMatchmakingQueue.h"
#include "ServiceStatus.generated.h"

USTRUCT(BlueprintType)
struct FServiceStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlightingPeriod> FlightingPeriods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlightingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlightingShowAgreement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FlightingAgreement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMatchmakingQueue, bool> Queues;
    
    PROMOD_API FServiceStatus();
};


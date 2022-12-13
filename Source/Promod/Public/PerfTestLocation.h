#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "PerfTestLocation.generated.h"

UCLASS(Blueprintable)
class APerfTestLocation : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString LocationName;
    
    APerfTestLocation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};


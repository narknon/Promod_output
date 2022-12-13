#pragma once
#include "CoreMinimal.h"
#include "TDMGameState.h"
#include "DOMGameState.generated.h"

class ADOMMode_Zone;

UCLASS(Blueprintable)
class ADOMGameState : public ATDMGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADOMMode_Zone*> Zones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CaptureTime;
    
    ADOMGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};


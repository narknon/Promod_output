#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PingableData.h"
#include "PingActor.generated.h"

class UWorldMarkerComponent;

UCLASS(Blueprintable)
class PROMOD_API APingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PingableData, meta=(AllowPrivateAccess=true))
    FPingableData PingableData;
    
    APingActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PingableData();
    
};


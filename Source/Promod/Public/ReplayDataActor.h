#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PawnControlRotation.h"
#include "ReplayDataActor.generated.h"

UCLASS(Blueprintable)
class AReplayDataActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPawnControlRotation> CurrentControlRotations;
    
    AReplayDataActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};


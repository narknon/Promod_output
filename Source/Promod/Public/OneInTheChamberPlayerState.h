#pragma once
#include "CoreMinimal.h"
#include "FFAPlayerState.h"
#include "OneInTheChamberPlayerState.generated.h"

UCLASS(Blueprintable)
class AOneInTheChamberPlayerState : public AFFAPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumLivesLeft;
    
    AOneInTheChamberPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};


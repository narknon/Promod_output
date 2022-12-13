#pragma once
#include "CoreMinimal.h"
#include "PromodTeam.h"
#include "CargoTeam.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UCargoTeam : public UPromodTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GracePeriodRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastReachedCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastReachedCheckpointPip;
    
    UCargoTeam();
    UFUNCTION(BlueprintCallable)
    void SetScore(float InScore);
    
};


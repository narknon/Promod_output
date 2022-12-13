#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "BattalionPlayerSpawn.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ABattalionPlayerSpawn : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitialSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ModeWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpawnWeightDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShootoutSpawn;
    
    ABattalionPlayerSpawn();
    UFUNCTION(BlueprintCallable)
    void CalculateModeWeightsForMap();
    
};


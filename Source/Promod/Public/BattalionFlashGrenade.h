#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BattalionGrenade.h"
#include "UObject/NoExportTypes.h"
#include "FlashResult.h"
#include "BattalionFlashGrenade.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class ABattalionFlashGrenade : public ABattalionGrenade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EffectivenessRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AngleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionFactorInfluencePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DecalMaterialPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectLifeSpan;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugFlashRange;
    
    ABattalionFlashGrenade();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_Flash(const TArray<FFlashResult>& FlashedCharacters);
    
};


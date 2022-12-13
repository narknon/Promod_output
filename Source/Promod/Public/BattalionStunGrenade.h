#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BattalionGrenade.h"
#include "StunResult.h"
#include "UObject/NoExportTypes.h"
#include "BattalionStunGrenade.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class ABattalionStunGrenade : public ABattalionGrenade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EffectivenessRange;
    
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
    bool bShowDebugStunRange;
    
    ABattalionStunGrenade();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_Stun(const TArray<FStunResult>& StunedCharacters);
    
};


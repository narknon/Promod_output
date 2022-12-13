#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "TakeHitInfo.generated.h"

class ABattalionCharacter;
class AActor;

USTRUCT(BlueprintType)
struct FTakeHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActualDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DamageTypeClass;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ABattalionCharacter> PawnInstigator;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageEventClassID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKilled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfHit;
    
private:
    UPROPERTY(EditAnywhere)
    uint8 EnsureReplicationByte;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEvent GeneralDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointDamageEvent PointDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadialDamageEvent RadialDamageEvent;
    
public:
    PROMOD_API FTakeHitInfo();
};


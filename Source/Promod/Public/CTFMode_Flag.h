#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ENationType.h"
#include "CTFMode_Flag.generated.h"

class ABattalionCharacter;
class UWorldMarkerComponent;
class ACTFMode_FlagZone;

UCLASS(Blueprintable, NotPlaceable)
class ACTFMode_Flag : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACTFMode_FlagZone* HomeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool AtHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool AttachedToPlayer;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    uint8 TeamAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ENationType NationAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AttachedCharacter, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* AttachedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlagResetTimer;
    
    ACTFMode_Flag();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedCharacter(ABattalionCharacter* PreviousAttachedCharacter);
    
};


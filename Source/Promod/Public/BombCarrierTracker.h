#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETeamVisibility.h"
#include "BombCarrierTracker.generated.h"

UCLASS(Blueprintable)
class PROMOD_API ABombCarrierTracker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TrackedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPingRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestedPingFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamVisibility TeamVisibility;
    
public:
    ABombCarrierTracker();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Track(AActor* ActorToTrack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetTeamVisibility(ETeamVisibility Visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetTeamAllegiance(int32 Team);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetDesiredPing(bool bShouldPing, float PingFrequency);
    
};


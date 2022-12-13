#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ENationType.h"
#include "HQMode_ZoneProperties.h"
#include "Headquarters_Zone.generated.h"

class AHeadquartersPlayerController;
class UWorldMarkerComponent;
class UStaticMeshComponent;
class UAkAudioEvent;
class AHeadquartersPlayerState;
class UBoxComponent;
class UParticleSystem;
class UTexture2D;

UCLASS(Blueprintable, NotPlaceable)
class AHeadquarters_Zone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ZoneRadiusChanged, meta=(AllowPrivateAccess=true))
    float ZoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ZoneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamAllegianceChanged, meta=(AllowPrivateAccess=true))
    int32 CurrentTeamAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ENationType CurrentNationAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DetonateEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ImageIDChanged, meta=(AllowPrivateAccess=true))
    FString ImageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CaptureProgressChanged, meta=(AllowPrivateAccess=true))
    float CaptureProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsBeingCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CapturingTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ENationType CapturingNation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnCaptureCoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayersCapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsContestedChanged, meta=(AllowPrivateAccess=true))
    bool IsContested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHeadquartersPlayerController*> PlayersInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHeadquartersPlayerState*> PlayerStatesInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* DefaultWorldMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHQMode_ZoneProperties ZoneProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeutraliseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Neutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanBeCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StraightCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsBeingNeutralised;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HQUnlockEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartHQRadioStaticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopHQRadioStaticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HQDestroyedEvent;
    
public:
    AHeadquarters_Zone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ZoneUnlocked();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ZoneLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFlagMat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAppearance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ZoneRadiusChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamAllegianceChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsContestedChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ImageIDChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CaptureProgressChanged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMultiCastExplode();
    
};


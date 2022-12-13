#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ENationType.h"
#include "DOMMode_ZoneProperties.h"
#include "DOMMode_Zone.generated.h"

class UWorldMarkerComponent;
class UStaticMeshComponent;
class UBoxComponent;
class ADOMPlayerController;
class ADOMPlayerState;
class UTexture2D;

UCLASS(Blueprintable, NotPlaceable)
class ADOMMode_Zone : public AActor {
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
    TArray<ADOMPlayerController*> PlayersInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADOMPlayerState*> PlayerStatesInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* DefaultWorldMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDOMMode_ZoneProperties ZoneProperties;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StraightCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsBeingNeutralised;
    
    ADOMMode_Zone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};


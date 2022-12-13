#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBombModeZoneName.h"
#include "BombMode_Zone.generated.h"

class USphereComponent;
class UBoxComponent;
class UMapIconComponent;
class APromodPlayerState;
class ABombMode_Bomb;
class APromodPlayerController;

UCLASS(Blueprintable)
class ABombMode_Zone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapIconComponent* MapIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* FloorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamAllegiance, meta=(AllowPrivateAccess=true))
    int32 TeamAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBombModeZoneName ZoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABombMode_Bomb* AttachedBomb;
    
    ABombMode_Zone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamAllegiance();
    
    UFUNCTION(BlueprintCallable)
    APromodPlayerController* GetLocalPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateWorldMarkers(int32 AlliedTeamNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SpecUpdateWorldMarkers(int32 AlliedTeamNum, APromodPlayerState* SpecPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowWorldMarkers(int32 AlliedTeamNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowMiniMapMarker(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowDefaultWorldMarker(int32 AlliedTeamNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowArmedWorldMarker(int32 AlliedTeamNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HideWorldMarkers();
    
};


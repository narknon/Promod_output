#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "UObject/NoExportTypes.h"
#include "ESpectatorCameraMode.h"
#include "UObject/NoExportTypes.h"
#include "BattalionSpectatorPawn.generated.h"

class APlayerState;
class ABattalionPlayerControllerGMBase;
class ABattalionCharacter;
class UPostProcessComponent;
class ABattalionGrenade;
class UParticleSystem;
class AActor;
class UBattalionGameInstance;
class ADOMMode_Zone;
class USphereComponent;
class UBattalionSettings;
class ACamPathSplineActor;
class ADebugCameraController;

UCLASS(Blueprintable)
class ABattalionSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* OwnerPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* CurrentlyspectatingPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* CurrentlySpectating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* CurrentlySpectatingPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionGrenade* ViewedGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpectatorCameraMode CameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutlinesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrenadeLinesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActionCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* OutlinePostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* SnapshotPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* FlashPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GrenadeLineRed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GrenadeLineGreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GrenadeLineYellow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> StaticCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADOMMode_Zone* CurrentDOMZone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Sphere;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CamPathCachedCamLocs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> CamPathCachedCamRots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CamPathCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CamPathFocusActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACamPathSplineActor* CamPathSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamPathCurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamPathTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCamPathPlaying;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADebugCameraController* DebugCameraController;
    
public:
    ABattalionSpectatorPawn();
    UFUNCTION(BlueprintCallable)
    void ViewPrevPlayer(bool bManual);
    
    UFUNCTION(BlueprintCallable)
    void ViewNextPlayer(bool bManual);
    
    UFUNCTION(BlueprintCallable)
    void ToggleVisionLines();
    
    UFUNCTION(BlueprintCallable)
    void ToggleOutlines();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMap();
    
    UFUNCTION(BlueprintCallable)
    void ToggleGrenadeLines();
    
    UFUNCTION(BlueprintCallable)
    void ToggleActionCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentlySpectating(ABattalionCharacter* NewSpectating);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMode(ESpectatorCameraMode Mode);
    
    UFUNCTION(BlueprintCallable)
    bool IsFirstPerson();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookAtLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattalionCharacter* GetCurrentlySpectating();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ClearFlashEffect();
    
    UFUNCTION(BlueprintCallable)
    void CamPathStop();
    
    UFUNCTION(BlueprintCallable)
    void CamPathSetFocusActor(AActor* FocusActor);
    
    UFUNCTION(BlueprintCallable)
    void CamPathRemoveLastCamera();
    
    UFUNCTION(BlueprintCallable)
    void CamPathRamoveAllCameras();
    
    UFUNCTION(BlueprintCallable)
    void CamPathPlay(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CamPathCamerasAmount();
    
    UFUNCTION(BlueprintCallable)
    void CamPathAddCamera(AActor* CameraActor, bool bFromCached);
    
};


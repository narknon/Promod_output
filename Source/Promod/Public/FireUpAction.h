#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "CharacterAnim.h"
#include "FireUpSocketMesh.h"
#include "FireUpData.h"
#include "EFireUpState.h"
#include "FireUpAction.generated.h"

class UAkComponent;
class UCurveVector;
class APromodCharacter;
class APromodPlayerState;
class UCameraModifier;
class APromodPlayerController;

UCLASS(Blueprintable)
class PROMOD_API AFireUpAction : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* DefaultAkComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim DeployAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* DeployScreenSway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim ActivationAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ActivationScreenSway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireUpSocketMesh AdditionalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishManually;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFireUpData FireUpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APromodCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APromodPlayerState* OwningPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireUpState CurrentState;
    
public:
    AFireUpAction();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetOwningPlayerState(APromodPlayerState* NewOwningPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCameraModifer(UCameraModifier* Modifier);
    
    UFUNCTION(BlueprintCallable)
    void ReEquipWeapon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterSpawned(APromodCharacter* CharRef);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayDeployEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayActivationEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_ClearCosmeticEffects();
    
    UFUNCTION(BlueprintCallable)
    bool IsFirstPerson();
    
    UFUNCTION(BlueprintCallable)
    APromodPlayerController* GetLocalSpectatingController();
    
    UFUNCTION(BlueprintCallable)
    APromodPlayerController* GetLocalPlayerController();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DeployAction(const FFireUpData& InFireUpData, APromodCharacter* Character);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CancelAction();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_SpectatorSetActivationEffects(float TimeRemaining, bool bIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_PlayDeployEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_PlayActivationEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDurationRefilled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActivationFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DeployAction(const FFireUpData& InFireUpData, APromodCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_ClearCosmeticEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_CanUseBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CancelAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_CanActivate(FName& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ActivateAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ActionFinished();
    
    UFUNCTION(BlueprintCallable)
    UCameraModifier* AddCameraModifer(TSubclassOf<UCameraModifier> ModifierClass);
    
    UFUNCTION(BlueprintCallable)
    void ActionFinished();
    
};


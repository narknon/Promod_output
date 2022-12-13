#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "PromodDeathCamera.generated.h"

class UCurveFloat;
class ABattalionWeapon;
class APromodCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROMOD_API UPromodDeathCamera : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpTimeSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoomDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVAtMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ZoomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DesiredViewPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationLerpAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector DeathPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APromodCharacter* KillerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
public:
    UPromodDeathCamera();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDurationExpired();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoomTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveFloat* GetZoomCurve() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetViewPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTranslationLerpAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxZoomDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APromodCharacter* GetKiller() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOVAtMaxDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDeathPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DeathWasSuicide() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_BeginDeathCam(APromodCharacter* Killer, ABattalionWeapon* KillingWeapon);
    
    UFUNCTION(BlueprintCallable)
    void BeginDeathCam(APromodCharacter* Killer, ABattalionWeapon* KillingWeapon);
    
};


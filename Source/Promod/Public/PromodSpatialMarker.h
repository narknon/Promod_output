#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ESpatialMarkerOptions.h"
#include "PromodSpatialMarker.generated.h"

class UCurveFloat;
class UCameraModifier;
class APromodCharacter;
class ACharacter;
class APlayerController;
class UDamageType;
class UPrimitiveComponent;
class AController;
class AActor;
class ABattalionPlayerState;
class ABattalionWeapon;

UCLASS(Blueprintable, EditInlineNew)
class UPromodSpatialMarker : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForceHidden;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingHealthbars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHealthOnlyFromADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeeEnemyHealthbars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHealthThroughWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAlliedMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowEnemyMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRangeForOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeForOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRangeForSilhouette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeForSilhouette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRangeForIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeForIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRangeForHealthbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeForHealthbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRangeForHealthbarADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeForHealthbarADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRangeForEnemyHealthbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeForEnemyHealthbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRangeForEnemyHealthbarADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeForEnemyHealthbarADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumLookAtAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlwaysShowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdsMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HipAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AdsAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceApart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceApart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* LinkedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpatialMarkerFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevSpatialMarkerFlags;
    
    UPromodSpatialMarker();
    UFUNCTION(BlueprintCallable)
    void UpdateVisibility(APlayerController* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateColourAndSettings(bool bIsAlly);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCameraModifer(UCameraModifier* Modifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePointDamage(float Damage, const UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, const FHitResult& HitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFlag(ESpatialMarkerOptions flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCameraModifier(TSubclassOf<UCameraModifier> ModifierClass) const;
    
    UFUNCTION(BlueprintCallable)
    ABattalionPlayerState* GetLocalSpectatingPlayerState();
    
    UFUNCTION(BlueprintCallable)
    void ForceShowWidget();
    
    UFUNCTION(BlueprintCallable)
    void ForceHideWidget();
    
    UFUNCTION(BlueprintCallable)
    void ForceFade(const bool bFadeIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdatePlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateHealth(float NewHealth, float MaxHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TogglePlayerOutline(bool bShowOutline);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TogglePlayerIcon(bool bShowIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleHealthBar(bool bShowHealthBar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartHealthRegen(float RegenAmount, float MaxHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWeaponEnteredOwnerInventory(ABattalionWeapon* NewWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLocalPlayerChangedTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLinkedCharacterInitialized();
    
    UFUNCTION(BlueprintCallable)
    bool BP_GetLOS();
    
    UFUNCTION(BlueprintCallable)
    UCameraModifier* AddCameraModifer(TSubclassOf<UCameraModifier> ModifierClass, bool bAllowDuplicates);
    
};


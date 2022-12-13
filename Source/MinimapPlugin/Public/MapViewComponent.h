#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "MapViewCategoriesChangedSignatureDelegate.h"
#include "MapViewSizeChangedSignatureDelegate.h"
#include "EMapViewRotationMode.h"
#include "MapViewDestroyedSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "MapViewComponent.generated.h"

class AMapBackground;
class USceneComponent;
class UMapIconComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MINIMAPPLUGIN_API UMapViewComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapViewCategoriesChangedSignature OnVisibleCategoriesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapViewSizeChangedSignature OnViewSizeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapViewDestroyedSignature OnViewDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapViewRotationMode RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FixedRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InheritedYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportZooming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HeightProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgoundLevelCacheLifetime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AMapBackground*> MapBackgrounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AMapBackground*, int32> PositionOnMultiLevelBackgrounds;
    
public:
    UMapViewComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ViewContains(const FVector& WorldPos, const float WorldRadius) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void UnregisterMultiLevelMapBackground(AMapBackground* MapBackground);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetZoomScale(const float NewZoomScale);
    
    UFUNCTION(BlueprintCallable)
    void SetViewExtent(const float NewViewExtentX, const float NewViewExtentY);
    
    UFUNCTION(BlueprintCallable)
    void SetIconCategoryVisible(FName IconCategory, const bool bNewVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterMultiLevelMapBackground(AMapBackground* MapBackground);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameBackgroundLevel(const UMapIconComponent* MapIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconCategoryVisible(FName IconCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoomScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetWorldCorners();
    
    UFUNCTION(BlueprintCallable)
    void GetViewYaw(const float WorldYaw, float& Yaw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetViewExtent(float& ViewExtentX, float& ViewExtentY) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetViewCoordinates(const FVector& WorldPos, bool bForceRectangular, float& U, float& V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetViewAspectRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveBackgroundPriority(bool& IsInsideAnyBackground);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveBackgroundLevel(const AMapBackground* MapBackground);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DeprojectViewToWorld(const float U, const float V, FVector& WorldPos);
    
};


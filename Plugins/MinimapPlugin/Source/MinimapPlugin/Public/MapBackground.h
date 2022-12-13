#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MapBackgroundRenderedSignatureDelegate.h"
#include "MapBackgroundAppearanceChangedSignatureDelegate.h"
#include "MapAreaBase.h"
#include "MapBackgroundTextureChangedSignatureDelegate.h"
#include "MapBackgroundMaterialChangedSignatureDelegate.h"
#include "MapBackgroundLevel.h"
#include "MapBackgroundOverlayChangedSignatureDelegate.h"
#include "MapBackground.generated.h"

class UNavMeshRenderingComponent;
class UBoxComponent;
class UMaterialInterface;
class AActor;
class UMapRendererComponent;
class UMaterialInstanceDynamic;
class USceneCaptureComponent2D;
class UTexture2D;
class UTextureRenderTarget2D;
class UTexture;

UCLASS(Blueprintable)
class MINIMAPPLUGIN_API AMapBackground : public AMapAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapBackgroundTextureChangedSignature OnMapBackgroundTextureChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapBackgroundMaterialChangedSignature OnMapBackgroundMaterialChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapBackgroundAppearanceChangedSignature OnMapBackgroundAppearanceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapBackgroundRenderedSignature OnMapBackgroundRendered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapBackgroundOverlayChangedSignature OnMapBackgroundOverlayChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapBackgroundLevel> BackgroundLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BackgroundMaterial_UMG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BackgroundMaterial_Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackgroundVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BackgroundPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BackgroundZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DynamicRenderTargetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderNavigationMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> HiddenActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HiddenActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMapRendererComponent*, UMaterialInstanceDynamic*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> LevelVisualizers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureComponent2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavMeshRenderingComponent* NavMeshRenderingComponent;
    
public:
    AMapBackground();
    UFUNCTION(BlueprintCallable)
    void SetBackgroundZOrder(const int32 NewBackgroundZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundVisible(const bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundTexture(const int32 Level, UTexture2D* NewBackgroundTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundPriority(const int32 NewBackgroundPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundOverlay(const int32 Level, UTextureRenderTarget2D* NewBackgroundOverlay);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundMaterialForUMG(UMaterialInterface* NewMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundMaterialForCanvas(UMaterialInterface* NewMaterial);
    
    UFUNCTION(BlueprintCallable)
    void RerenderBackground();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMultiLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBackgroundVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBackgroundZOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetBackgroundTextureAtHeight(const float WorldZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetBackgroundTexture(const int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBackgroundPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetBackgroundOverlay(const int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetBackgroundMaterialInstanceForCanvas(UMapRendererComponent* Renderer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetBackgroundMaterialForUMG() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "MapAreaBase.h"
#include "MapFogMaterialChangedSignatureDelegate.h"
#include "EFogPostProcessVolumeOption.h"
#include "UObject/NoExportTypes.h"
#include "MapFog.generated.h"

class UMaterialInterface;
class APostProcessVolume;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;
class UMapRendererComponent;
class UMapRevealerComponent;

UCLASS(Blueprintable)
class MINIMAPPLUGIN_API AMapFog : public AMapAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapFogMaterialChangedSignature OnMapFogMaterialChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FogRenderTargetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FogMaterial_UMG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FogMaterial_Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapOpacityHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapOpacityExplored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapOpacityRevealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FogCombineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogCacheLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWorldFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FogPostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldOpacityHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldOpacityExplored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldOpacityRevealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* PostProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFogPostProcessVolumeOption AutoLocatePostProcessVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* PermanentRevealRT_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* PermanentRevealRT_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RevealRT_Staging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMapRendererComponent*, UMaterialInstanceDynamic*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FogCombineMatInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FogPostProcessMatInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapRevealerComponent*> MapRevealers;
    
public:
    AMapFog();
    UFUNCTION(BlueprintCallable)
    void SetFogMaterialForUMG(UMaterialInterface* NewMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetFogMaterialForCanvas(UMaterialInterface* NewMaterial);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMapRevealerUnregistered(UMapRevealerComponent* MapRevealer);
    
    UFUNCTION(BlueprintCallable)
    void OnMapRevealerRegistered(UMapRevealerComponent* MapRevealer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWorldToPixelRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetSourceFogRenderTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetFogMaterialInstanceForCanvas(UMapRendererComponent* Renderer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetFogMaterialForUMG();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFogAtLocation(const FVector& WorldLocation, const bool bRequireCurrentlyRevealing, float& RevealFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetDestinationFogRenderTarget() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "Slate/WidgetTransform.h"
#include "UObject/NoExportTypes.h"
#include "HUDWorldMarker.generated.h"

class UWorldMarkerComponent;
class UCurveFloat;
class UMaterialInstanceDynamic;
class UWidget;
class UBattalionGameInstance;
class UBattalionSettings;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UHUDWorldMarker : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MarkerAdsVisibilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MarkerVisibilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideOnFinishLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStuckToScreen;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> ProgressMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MarkerSizeReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AffixTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleEdgeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScaleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScaleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverviewHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniMapRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MiniMapOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectionHorizontalBlendCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectionVerticalBlendCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AzimuthBlendAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AzimuthBlendCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimMaxAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimMinAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimFovealRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimParafovealBelt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipMaxAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipMinAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipFovealRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipParafovealBelt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrowFadeTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattSettings;
    
public:
    UHUDWorldMarker();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateMarkerOpacity(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateMarkerArrowOpacity(float NewOpacity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateMarkerArrowDirection(float NewDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StopHighlightMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetWidgetTransform(FWidgetTransform WidgetTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetUseTimerText(bool bUseTimerText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetUseProgressMarker(bool bUseProgressMarker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetObjectiveLabel(const FString& NewLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetMarkerTimerInfo(const float TimeToShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetMarkerProgressInfo(const FLinearColor ProgressColor, const float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetMarkerInfo(UTexture2D* NewImage, FLinearColor NewColor, FLinearColor NewOffColor, FLinearColor NewIconColor, const FString& NewLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetMarkerDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetImage(UTexture2D* NewImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIconUseOffColour(bool bUseProgressMarker);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetHiddenByOpacity(bool Hidden);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MarkerFinishedMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_IsMarkerVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HighlightMarker(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HideDistanceText(bool Hidden);
    
};


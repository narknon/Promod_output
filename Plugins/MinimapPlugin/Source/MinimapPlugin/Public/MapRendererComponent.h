#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/ActorComponent.h"
#include "MapClickedSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EMapViewSearchOption.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "MapRendererComponent.generated.h"

class UMapIconComponent;
class UCanvas;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UMapTrackerComponent;
class UMapViewComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MINIMAPPLUGIN_API UMapRendererComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapClickedSignature OnMapClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapViewSearchOption AutoLocateMapView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCircular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawFrustum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrustumFloorDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundFillColor;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FillMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FillMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMapTrackerComponent* MapTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMapViewComponent* MapView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UMapIconComponent*> HoveringIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapIconComponent*> BufferedHoverStartEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapIconComponent*> BufferedHoverEndEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCanvas* LastCanvas;
    
public:
    UMapRendererComponent();
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(const int32 Width, const int32 Height);
    
    UFUNCTION(BlueprintCallable)
    void SetMargin(const int32 Left, const int32 TOP, const int32 Right, const int32 BOTTOM);
    
    UFUNCTION(BlueprintCallable)
    void SetMapView(UMapViewComponent* InMapView);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRendered(const bool bNewIsRendered);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCircular(const bool bNewIsCircular);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetFrustumFloorDistance(const float NewFrustumFloorDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawFrustum(const bool bNewDrawFrustum);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundFillColor(const FLinearColor& NewBackgroundFillColor);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoLocateMapView(const EMapViewSearchOption InAutoLocateMapView);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRendered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCircular() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFrustumFloorDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDrawFrustum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetBackgroundFillColor() const;
    
};


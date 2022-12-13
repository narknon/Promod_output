#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "EMapViewSearchOption.h"
#include "MapFunctionLibrary.generated.h"

class AMapBackground;
class UMapTrackerComponent;
class UObject;
class UMapIconComponent;
class UMapViewComponent;

UCLASS(Blueprintable)
class MINIMAPPLUGIN_API UMapFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMapFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMapTrackerComponent* GetMapTracker(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AMapBackground* GetFirstMapBackground(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMapViewComponent* FindMapView(UObject* WorldContextObject, const EMapViewSearchOption MapViewSearchOption);
    
    UFUNCTION(BlueprintCallable)
    static bool DetectIsInView(const FVector2D& UV, const FVector2D& OuterRadiusUV, const bool bIsCircular);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ComputeViewFrustum(const UObject* WorldContextObject, UMapViewComponent* MapView, const bool bIsCircular, TArray<FVector2D>& CornerUVs, const float FloorDistance);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D ClampIntoView(const FVector2D& UV, const float OuterRadiusUV, const bool bIsCircular);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMapIconComponent*> BoxSelectInView(const FVector2D& StartUV, const FVector2D& EndUV, UMapViewComponent* MapView, const bool bIsCircular);
    
};


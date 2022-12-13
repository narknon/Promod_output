#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MapAreaBase.generated.h"

class UBoxComponent;
class UMapAreaPrimitiveComponent;
class UMapViewComponent;

UCLASS(Blueprintable)
class MINIMAPPLUGIN_API AMapAreaBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AreaBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapAreaPrimitiveComponent* AreaPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapViewComponent* AreaMapView;
    
public:
    AMapAreaBase();
    UFUNCTION(BlueprintCallable)
    bool GetMapViewCornerUVs(UMapViewComponent* MapView, TArray<FVector2D>& CornerUVs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapViewComponent* GetMapView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMapAspectRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelAtHeight(const float WorldZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoxComponent* GetAreaBounds() const;
    
};


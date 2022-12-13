#pragma once
#include "CoreMinimal.h"
#include "BombMode_Zone.h"
#include "ETeamVisibility.h"
#include "BlitzMode_Zone.generated.h"

class UBlitzWidgetComponent;

UCLASS(Blueprintable)
class PROMOD_API ABlitzMode_Zone : public ABombMode_Zone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlitzWidgetComponent* DefaultSpatialMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlitzWidgetComponent* ArmedSpatialMarker;
    
    ABlitzMode_Zone();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateTeamVisibility(UBlitzWidgetComponent* WidgetComponent, const ETeamVisibility& TeamVisibility);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateAllegiance(UBlitzWidgetComponent* WidgetComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateAllegiance(UBlitzWidgetComponent* WidgetComponent);
    
};


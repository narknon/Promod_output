#pragma once
#include "CoreMinimal.h"
#include "BombMode_Bomb.h"
#include "UObject/NoExportTypes.h"
#include "BlitzMode_Bomb.generated.h"

class UWidgetComponent;
class UBlitzWidgetComponent;
class UTexture2D;

UCLASS(Blueprintable)
class PROMOD_API ABlitzMode_Bomb : public ABombMode_Bomb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* SpatialRespawnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlitzWidgetComponent* SpatialBombMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BombSpatialTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefendSpatialTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefuseSpatialTexture;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor NeutralColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor FriendlyColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor EnemyColor;
    
    ABlitzMode_Bomb();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetUIRespawnTimer(float Time);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_UpdateAllegiance();
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CTFMode_FlagZone.generated.h"

class ACTFMode_Flag;
class UBoxComponent;
class UWorldMarkerComponent;
class ACTFPlayerState;

UCLASS(Blueprintable, NotPlaceable)
class ACTFMode_FlagZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFMode_Flag* flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionComp;
    
    UPROPERTY(EditAnywhere)
    uint8 TeamAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* DefaultWorldMarker;
    
    ACTFMode_FlagZone();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_SetNeutralLabel(const FString& NewLabel);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_SetFriendlyLabel(const FString& NewLabel, ACTFPlayerState* PlayerOnly);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_SetEnemyLabel(const FString& NewLabel, ACTFPlayerState* PlayerOnly);
    
};


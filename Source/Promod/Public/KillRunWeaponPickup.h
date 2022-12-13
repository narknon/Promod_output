#pragma once
#include "CoreMinimal.h"
#include "BattalionTutorialPickup.h"
#include "KillRunWeaponPickup.generated.h"

class USaveGame;
class UAkComponent;
class USelectedKitSaveData;

UCLASS(Blueprintable)
class PROMOD_API AKillRunWeaponPickup : public ABattalionTutorialPickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* DefaultAkComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGame* SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USelectedKitSaveData* KitSaveData;
    
public:
    AKillRunWeaponPickup();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized();
    
};


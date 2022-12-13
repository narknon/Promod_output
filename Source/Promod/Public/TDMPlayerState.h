#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerState.h"
#include "TDMPlayerState.generated.h"

UCLASS(Blueprintable)
class ATDMPlayerState : public ABattalionPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PendingInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstWeapon;
    
    ATDMPlayerState();
};


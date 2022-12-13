#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerState.h"
#include "FFAPlayerState.generated.h"

UCLASS(Blueprintable)
class AFFAPlayerState : public ABattalionPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PendingInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstWeapon;
    
    AFFAPlayerState();
};


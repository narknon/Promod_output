#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerState.h"
#include "ESlotType.h"
#include "TUTPlayerState.generated.h"

UCLASS(Blueprintable)
class ATUTPlayerState : public ABattalionPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PendingInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlotType PendingWeaponSlot;
    
    ATUTPlayerState();
};


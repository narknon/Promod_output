#pragma once
#include "CoreMinimal.h"
#include "LoadoutCard.h"
#include "NUIBaseUIElement.h"
#include "NUIPlayerLoadout.generated.h"

class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIPlayerLoadout : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutCard ClassCardData;
    
    UNUIPlayerLoadout();
    UFUNCTION(BlueprintCallable)
    void SetPlayer(ABattalionPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutCorrected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCardUnequipped(FLoadoutCard Card, int32 AccessorySlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCardEquipped(FLoadoutCard Card, int32 AccessorySlot);
    
};


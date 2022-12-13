#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "NUIParty.generated.h"

class UTexture2DDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UNUIParty : public UNUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedPartyMember;
    
    UNUIParty();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerAvatar(int32 PartyIdx, UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLocalPlayerAvatar(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshLocalPlayerData();
    
};


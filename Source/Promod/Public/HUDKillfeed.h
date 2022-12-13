#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDKillfeed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UHUDKillfeed : public UUserWidget {
    GENERATED_BODY()
public:
    UHUDKillfeed();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddKillfeedEntry(const FString& KillerPlayerName, const FString& WeaponName, const FString& KilledPlayerName);
    
};


#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIMedalAward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIMedalAward : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUIMedalAward();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MedalAwarded(const FString& MedalUUID);
    
public:
    UFUNCTION(BlueprintCallable)
    void AwardMedal(const FString& MedalUUID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AllMedalsExpired();
    
};


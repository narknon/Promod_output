#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "DOMZoneData.h"
#include "NUIDOMZoneStates.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIDOMZoneStates : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDOMZoneData> ZoneStates;
    
public:
    UNUIDOMZoneStates();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZoneStatesRepopulated(int32 ZoneCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZoneChangedState(int32 ZoneIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StoppedCapturingZone(int32 ZoneIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartedCapturingZone(int32 ZoneIndex);
    
};


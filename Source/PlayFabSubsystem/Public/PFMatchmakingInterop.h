#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PFMatchmakingInterop.generated.h"

class UPFServerSlotManager;
class UPlayFabSubsystem;

UCLASS(Blueprintable, Within=PlayFabSubsystem)
class PLAYFABSUBSYSTEM_API UPFMatchmakingInterop : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabSubsystem* PlayFabSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFServerSlotManager* ServerSlotManager;
    
public:
    UPFMatchmakingInterop();
    UFUNCTION(BlueprintCallable)
    void SetReadyForMatch();
    
    UFUNCTION(BlueprintCallable)
    void SetBackfillingState(bool bPaused);
    
};


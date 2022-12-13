#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EForcedPlatform.h"
#include "PlatformKeyGeneral.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPlatformKeyGeneral : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentForcingPlatform;
    
    UPlatformKeyGeneral();
    UFUNCTION(BlueprintCallable)
    void UpdateData(EForcedPlatform ForcedPlatform, bool IsForcingPlatform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceUpdated(EForcedPlatform ForcedPlatform, bool IsForcingPlatform);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlatformXBOX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyForcingPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EForcedPlatform GetCurrentForcingPlatform();
    
};


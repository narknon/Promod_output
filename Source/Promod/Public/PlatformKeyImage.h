#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EForcedPlatform.h"
#include "PlatformKeyImage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPlatformKeyImage : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentForcingPlatform;
    
    UPlatformKeyImage();
    UFUNCTION(BlueprintCallable)
    void UpdateData(EForcedPlatform ForcedPlatform, bool IsForcingPlatform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceImageUpdated(EForcedPlatform ForcedPlatform, bool IsForcingPlatform);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlatformXBOX();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlatformPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyForcingPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EForcedPlatform GetCurrentForcingPlatform();
    
};


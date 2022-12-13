#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NUIGenericPopup.generated.h"

class APromodPlayerController;
class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class UNUIGenericPopup : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAccepted;
    
    UNUIGenericPopup();
    UFUNCTION(BlueprintCallable)
    void SaveAccepted(bool accepted);
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundOnPC(APromodPlayerController* PC, UAkAudioEvent* Sound);
    
};


#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "UObject/NoExportTypes.h"
#include "NUIAnnouncement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIAnnouncement : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UNUIAnnouncement();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAnnouncement();
    
    UFUNCTION(BlueprintCallable)
    void AnnouncementExpired();
    
};


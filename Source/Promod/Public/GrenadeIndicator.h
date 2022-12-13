#pragma once
#include "CoreMinimal.h"
#include "GrenadeInfo.h"
#include "Blueprint/UserWidget.h"
#include "GrenadeIndicator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UGrenadeIndicator : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrenadeInfo> CurrentGrenadeInfo;
    
public:
    UGrenadeIndicator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIcons();
    
};


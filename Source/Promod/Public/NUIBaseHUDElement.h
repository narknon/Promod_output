#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NUIBaseHUDElement.generated.h"

class UBattalionSettings;
class UBattalionGameInstance;

UCLASS(Blueprintable, EditInlineNew)
class UNUIBaseHUDElement : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattSettings;
    
public:
    UNUIBaseHUDElement();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ElementShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ElementHidden();
    
};


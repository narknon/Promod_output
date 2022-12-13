#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "JumperLevelSelect.generated.h"

class UMapPackManager;

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UJumperLevelSelect : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapPackManager* MapPackManager;
    
    UJumperLevelSelect();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCard();
    
    UFUNCTION(BlueprintCallable)
    void BindStatRetrieval();
    
};


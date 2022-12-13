#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StyleScoreEntryWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UStyleScoreEntryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UStyleScoreEntryWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScore(int32 Score);
    
};


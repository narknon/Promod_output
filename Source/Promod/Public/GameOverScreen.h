#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameOverScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameOverScreen : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ResultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScoreText;
    
public:
    UGameOverScreen();
    UFUNCTION(BlueprintCallable)
    void SetMatchResults(int32 VictoryState, const FString& Score);
    
};


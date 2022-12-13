#pragma once
#include "CoreMinimal.h"
#include "NUIMatchResultScreen.h"
#include "UObject/NoExportTypes.h"
#include "ENationType.h"
#include "NUITeamMatchResultScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUITeamMatchResultScreen : public UNUIMatchResultScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ResultTextColor;
    
public:
    UNUITeamMatchResultScreen();
    UFUNCTION(BlueprintCallable)
    ENationType GetNationForTeam(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Exit(bool ShowPrompt);
    
};


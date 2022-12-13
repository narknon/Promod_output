#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "NUIReportPlayer.generated.h"

class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIReportPlayer : public UNUIScreen {
    GENERATED_BODY()
public:
    UNUIReportPlayer();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPlayerReportReasonPanel(ABattalionPlayerState* Requestor, ABattalionPlayerState* Requestee);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPlayerProfilePanel();
    
    UFUNCTION(BlueprintCallable)
    void ShowConsoleProfile(ABattalionPlayerState* Requestor, ABattalionPlayerState* Requestee);
    
    UFUNCTION(BlueprintCallable)
    void RequestReportPlayer(ABattalionPlayerState* Requestor, ABattalionPlayerState* Requestee);
    
    UFUNCTION(BlueprintCallable)
    void PauseMenuGoBack();
    
};


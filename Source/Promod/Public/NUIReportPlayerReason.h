#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "NUIReportPlayerReason.generated.h"

class ULocalPlayer;
class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIReportPlayerReason : public UNUIScreen {
    GENERATED_BODY()
public:
    UNUIReportPlayerReason();
    UFUNCTION(BlueprintCallable)
    void UnMutePlayer(ABattalionPlayerState* Requestor, ABattalionPlayerState* Requestee, ULocalPlayer* OwningLocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void RequestReportPlayer(ABattalionPlayerState* Requestor, ABattalionPlayerState* Requestee, const FString& ReportReason);
    
    UFUNCTION(BlueprintCallable)
    void MutePlayer(ABattalionPlayerState* Requestor, ABattalionPlayerState* Requestee, ULocalPlayer* OwningLocalPlayer);
    
};


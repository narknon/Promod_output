#pragma once
#include "CoreMinimal.h"
#include "TDMPlayerController.h"
#include "CTFPlayerController.generated.h"

class APawn;
class ABattalionPlayerState;

UCLASS(Blueprintable)
class ACTFPlayerController : public ATDMPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowActionTakeFlag;
    
    ACTFPlayerController();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TakeFlagFromBot(APawn* PotentionBot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnFallenOutOfMap();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnDropFlag();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateFlagVisibility();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetEndgameState(bool EndGameState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_FlagEvent(int32 FlagTeamNum, const FString& EventMessage, ABattalionPlayerState* InstigatorState);
    
};


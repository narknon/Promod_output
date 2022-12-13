#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "GameFramework/OnlineReplStructs.h"
#include "NuclearLobbyClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class NUCLEARCORE_API ANuclearLobbyClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    ANuclearLobbyClient();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Travel(const FString& TravelURL);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerLeft(const FUniqueNetIdRepl& PlayerNetId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerJoined(const FUniqueNetIdRepl& PlayerNetId);
    
};


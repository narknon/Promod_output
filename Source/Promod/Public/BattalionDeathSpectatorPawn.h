#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "BattalionDeathSpectatorPawn.generated.h"

class ABattalionPlayerControllerGMBase;
class UPostProcessComponent;
class UBattalionGameInstance;
class UBattalionSettings;

UCLASS(Blueprintable)
class ABattalionDeathSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* OwnerPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* DeathPostProcess;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattSettings;
    
public:
    ABattalionDeathSpectatorPawn();
};


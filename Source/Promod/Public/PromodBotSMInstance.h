#pragma once
#include "CoreMinimal.h"
#include "SMInstance.h"
#include "PromodBotSMInstance.generated.h"

class APromodBot;
class APromodBotController;
class APatrolPath;

UCLASS(Blueprintable)
class PROMOD_API UPromodBotSMInstance : public USMInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodBot* PromodBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodBotController* PromodBotController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APatrolPath* PatrolPath;
    
public:
    UPromodBotSMInstance();
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "BattalionGameSession.generated.h"

UCLASS(Blueprintable)
class ABattalionGameSession : public AGameSession {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrivate;
    
public:
    ABattalionGameSession();
};


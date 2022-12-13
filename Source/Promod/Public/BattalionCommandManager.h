#pragma once
#include "CoreMinimal.h"
#include "EClassName.h"
#include "UObject/Object.h"
#include "BattalionCommandManager.generated.h"

class ABattalionGameMode;
class APromodPlayerController;

UCLASS(Blueprintable, Config=Game)
class UBattalionCommandManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionGameMode* GameMode;
    
    UBattalionCommandManager();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ChangeClassTo(APromodPlayerController* PC, const EClassName& ClassName);
    
};


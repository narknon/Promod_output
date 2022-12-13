#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BotNamesDataAsset.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UBotNamesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BotNames;
    
public:
    UBotNamesDataAsset();
private:
    UFUNCTION(BlueprintCallable)
    FString GetRandomBotName(const TArray<FString>& UsedNames);
    
};


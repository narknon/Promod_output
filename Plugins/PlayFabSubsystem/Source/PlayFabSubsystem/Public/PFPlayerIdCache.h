#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PFPlayerId.h"
#include "PFPlayerIdCache.generated.h"

class UPlayFabSubsystem;

UCLASS(Blueprintable, Within=PlayFabSubsystem)
class PLAYFABSUBSYSTEM_API UPFPlayerIdCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabSubsystem* PlayFabSubsystem;
    
public:
    UPFPlayerIdCache();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdCachedFromTitleString(const FString& TitleIdString) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdCachedFromMasterString(const FString& MasterIdString) const;
    
    UFUNCTION(BlueprintCallable)
    FPFPlayerId CacheAndReturnPlayerId(const FString& TitleIdString, const FString& MasterIdString);
    
};


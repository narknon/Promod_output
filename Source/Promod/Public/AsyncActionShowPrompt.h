#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncActionShowPrompt.generated.h"

class UAsyncActionShowPrompt;
class UObject;

UCLASS(Blueprintable)
class UAsyncActionShowPrompt : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncPromptClosedDelegate, bool, bAccepted, int32, ControllerId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncPromptClosedDelegate OnClosed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UAsyncActionShowPrompt();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionShowPrompt* ShowPrompt(UObject* NewWorldContextObject, const FText TitleText, const FText MessageText, const FText AcceptText, const FText CancelText);
    
};


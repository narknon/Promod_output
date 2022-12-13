#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NUIBreadCrumb.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIBreadCrumb : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UNUIBreadCrumb();
    UFUNCTION(BlueprintCallable)
    void SetName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MarkAsVisited();
    
    UFUNCTION(BlueprintCallable)
    bool IsAlreadyVisited();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentBreadCrumbs(TArray<FString>& OutString);
    
};


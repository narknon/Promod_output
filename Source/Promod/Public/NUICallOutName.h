#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "StackMember.h"
#include "UObject/NoExportTypes.h"
#include "NUICallOutName.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUICallOutName : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStackMember CurrentCallOutName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStackMember LastCallOutName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStackMember> CallOutNameStack;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinimapMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHudScale;
    
public:
    UNUICallOutName();
    UFUNCTION(BlueprintCallable)
    void UpdateCalloutName(FText NewName, int32 UniqueID);
    
    UFUNCTION(BlueprintCallable)
    void SpectatedCharacterChanged(FText Name, int32 UniqueID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveMarkedNames();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveCallOutName(FText Name, int32 UniqueID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MinimapLayoutChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallOutNameUpdate(FName CurrentName, FName LastName);
    
};


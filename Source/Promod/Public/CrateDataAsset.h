#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CrateEntity.h"
#include "CrateDataAsset.generated.h"

UCLASS(Blueprintable)
class UCrateDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrateEntity> Crates;
    
    UCrateDataAsset();
    UFUNCTION(BlueprintCallable)
    FCrateEntity GetPrevCrate(const FCrateEntity currentCrate);
    
    UFUNCTION(BlueprintCallable)
    FCrateEntity GetNextCrate(const FCrateEntity currentCrate);
    
    UFUNCTION(BlueprintCallable)
    FCrateEntity GetFirstCrate();
    
    UFUNCTION(BlueprintCallable)
    FCrateEntity GetCrateFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FCrateEntity GetCrate(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void ClearContents(const FString& crateId);
    
    UFUNCTION(BlueprintCallable)
    void AddToCrateContents(const FString& crateId, TArray<FString> Contents);
    
};


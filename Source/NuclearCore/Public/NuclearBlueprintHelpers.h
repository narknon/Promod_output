#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ENuclearSortDirection.h"
#include "NuclearBlueprintHelpers.generated.h"

class UObject;

UCLASS(Blueprintable)
class NUCLEARCORE_API UNuclearBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNuclearBlueprintHelpers();
    UFUNCTION(BlueprintCallable)
    static void SortArray(const TArray<int32>& Array, const UObject* ContextObject, const FName PredicateName, ENuclearSortDirection SortDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_StrStr(const FString& A, const FString& B);
    
};


#pragma once
#include "CoreMinimal.h"
#include "LocalizationGetLanguageListResponse.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabLocalizationModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabLocalizationModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabLocalizationModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FLocalizationGetLanguageListResponse decodeGetLanguageListResponseResponse(UPlayFabJsonObject* response);
    
};


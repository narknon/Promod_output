#pragma once
#include "CoreMinimal.h"
#include "NUILoadoutCard.h"
#include "UObject/NoExportTypes.h"
#include "NUIFloatingCard.generated.h"

class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIFloatingCard : public UNUILoadoutCard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCardHeld;
    
    UNUIFloatingCard();
    UFUNCTION(BlueprintCallable)
    bool SetDefaultDropZone(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void DropCard();
    
    UFUNCTION(BlueprintCallable)
    void AddDropZone(const FString& Name, FVector2D Position, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void AddDefaultDropZone(const FString& Name, FVector2D Position, float Radius);
    
};


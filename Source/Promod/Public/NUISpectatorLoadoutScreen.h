#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NUIBaseUIElement.h"
#include "NUISpectatorLoadoutScreen.generated.h"

class UNUISpectatorTeamLoadout;

UCLASS(Blueprintable, EditInlineNew)
class UNUISpectatorLoadoutScreen : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUISpectatorTeamLoadout> TeamLoadoutWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNUISpectatorTeamLoadout*> TeamLoadoutWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeadingText;
    
public:
    UNUISpectatorLoadoutScreen();
};


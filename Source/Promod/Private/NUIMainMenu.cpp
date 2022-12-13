#include "NUIMainMenu.h"

class UObject;







void UNUIMainMenu::OnMenuItemSelected(int32 Index) {
}

bool UNUIMainMenu::GetMenuOptionVisible(UObject* WorldContextObject, int32 Index) {
    return false;
}

UNUIMainMenu::UNUIMainMenu() {
    this->IsInitialEntry = false;
}


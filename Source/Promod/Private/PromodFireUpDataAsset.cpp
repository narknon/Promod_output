#include "PromodFireUpDataAsset.h"

FFireUpActionData UPromodFireUpDataAsset::GetActionData(EFireUpActionType ActionType) {
    return FFireUpActionData{};
}

UPromodFireUpDataAsset::UPromodFireUpDataAsset() {
    this->FireUpActionClass = NULL;
}


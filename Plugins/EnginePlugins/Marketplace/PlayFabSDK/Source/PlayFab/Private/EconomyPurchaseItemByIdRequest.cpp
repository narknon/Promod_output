#include "EconomyPurchaseItemByIdRequest.h"

FEconomyPurchaseItemByIdRequest::FEconomyPurchaseItemByIdRequest() {
    this->AutoConsume = false;
    this->Entity = NULL;
    this->Properties = NULL;
    this->Quantity = 0;
    this->ReturnInventory = false;
    this->Store = NULL;
}


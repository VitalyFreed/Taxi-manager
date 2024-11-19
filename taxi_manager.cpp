#include "taxi_manager.h"

TaxiManager* TaxiManager::taxiManager = nullptr;

TaxiManager::TaxiManager() {}

TaxiManager* TaxiManager::getInstance() {
    if (taxiManager == nullptr) {
        taxiManager = new TaxiManager();
    }
    return taxiManager;
}

void TaxiManager::destroyInstance() {
    delete taxiManager;
    taxiManager = nullptr;
}

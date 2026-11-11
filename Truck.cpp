#include "Truck.h"
#include <iostream>

Truck::Truck() : Vehicle("Вантажівка", 100), loadKg(8000) {}

void Truck::showDetails() const {
    std::cout << "Вантажопідйомність: " << loadKg << " кг\n";
}

void Truck::drive() const {
    std::cout << "Вантажівка перевозить вантаж.\n";
}

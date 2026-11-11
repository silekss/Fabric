#include "Bus.h"
#include <iostream>

Bus::Bus() : Vehicle("Автобус", 120), passengerSeats(42) {}

void Bus::showDetails() const {
    std::cout << "Місць для пасажирів: " << passengerSeats << '\n';
}

void Bus::drive() const {
    std::cout << "Автобус перевозить пасажирів.\n";
}

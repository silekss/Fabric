#include "Car.h"
#include <iostream>

Car::Car() : Vehicle("Легковий автомобіль", 180), seats(5) {}

void Car::showDetails() const {
    std::cout << "Кількість місць: " << seats << '\n';
}

void Car::drive() const {
    std::cout << "Автомобіль їде дорогою.\n";
}

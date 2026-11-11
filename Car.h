#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
private:
    int seats;

public:
    Car();
    void showDetails() const override;
    void drive() const override;
};

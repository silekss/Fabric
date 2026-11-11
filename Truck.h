#pragma once
#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int loadKg;

public:
    Truck();
    void showDetails() const override;
    void drive() const override;
};

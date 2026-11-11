#pragma once
#include "Vehicle.h"

class Bus : public Vehicle {
private:
    int passengerSeats;

public:
    Bus();
    void showDetails() const override;
    void drive() const override;
};

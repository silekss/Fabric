#pragma once
#include "Vehicle.h"

class VehicleFactory {
public:
    Vehicle* create(int choice) const;
};

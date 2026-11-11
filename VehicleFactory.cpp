#include "VehicleFactory.h"
#include "Bus.h"
#include "Car.h"
#include "Truck.h"

Vehicle* VehicleFactory::create(int choice) const {
    switch (choice) {
    case 1:
        return new Car();
    case 2:
        return new Truck();
    case 3:
        return new Bus();
    default:
        return nullptr;
    }
}

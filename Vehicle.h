#pragma once
#include <string>

class Vehicle {
private:
    std::string type;
    int maxSpeed;

public:
    Vehicle(const std::string& type, int maxSpeed);
    virtual ~Vehicle() = default;
    const std::string& getType() const;
    int getMaxSpeed() const;
    virtual void showDetails() const = 0;
    virtual void drive() const = 0;
};

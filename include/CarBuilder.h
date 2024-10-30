#pragma once 
#include <string>

#include "VehicleBuilder.h"
#include "Car.h"

class CarBuilder : public VehicleBuilder<CarBuilder>
{
private:
    CarBuilder() = default;
    unsigned int mNumberOfDoors{0};
    bool mHasSunroof{false};
public:
    static CarBuilder Construct();
    CarBuilder& setNumberOfDoors(const unsigned int numberOfDoors);
    CarBuilder& setSunroof(const bool hasSunRoof);
    Car build();
};

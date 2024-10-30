#pragma once
#include <iostream>
#include <string>

#include "Vehicle.h"

class Car : public VehicleCRTP<Car>
{
public:
    void showInfo() override;
    Car(const Car& other);
private:
    Car(const std::string& maker, 
        const std::string model, 
        const unsigned short year,
        const unsigned int numberOfDoors,
        bool hasSunroof) : mMaker(maker), mModel(model), mYear(year), mNumberOfDoors(numberOfDoors), mHasSunroof(hasSunroof)
    {}

    friend class CarBuilder;
    std::string mMaker{};
    std::string mModel{};
    unsigned short mYear{0};
    unsigned int mNumberOfDoors;
    bool mHasSunroof;
};
#pragma once 
#include <string>
#include <iostream>

#include "Vehicle.h"


class Motorcycle : public VehicleCRTP<Motorcycle>
{
public:
    void showInfo() override;
    Motorcycle(const Motorcycle& other);

private:
    Motorcycle(const std::string& maker, 
        const std::string model, 
        const unsigned short year,
        const std::string& engineType,
        bool hasSidecar) : mMaker(maker), mModel(model), mYear(year), mEngineType(engineType), mHasSidecar(hasSidecar)
    {}

    friend class MotorcycleBuilder;
    std::string mMaker{};
    std::string mModel{};
    unsigned short mYear{0};
    std::string mEngineType{};
    bool mHasSidecar;
};

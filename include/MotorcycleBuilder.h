#pragma once 
#include <string>

#include "VehicleBuilder.h"
#include "Motorcycle.h" 


class MotorcycleBuilder : public VehicleBuilder<MotorcycleBuilder>
{
private:
    MotorcycleBuilder() = default;
    std::string mEngineType{};
    bool mHasSidecar{false};
public:
    static MotorcycleBuilder Construct();
    MotorcycleBuilder& setEngineType(const std::string& engineType);
    MotorcycleBuilder& setHasSidecar(const bool hasSidecar);
    Motorcycle build();
};

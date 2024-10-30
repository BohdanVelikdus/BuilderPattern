#include "MotorcycleBuilder.h"

MotorcycleBuilder MotorcycleBuilder::Construct()
{
    return MotorcycleBuilder();
}

MotorcycleBuilder &MotorcycleBuilder::setEngineType(const std::string &engineType)
{
    this->mEngineType = engineType;
    return *this;
}

MotorcycleBuilder &MotorcycleBuilder::setHasSidecar(const bool hasSidecar)
{
    this->mHasSidecar = hasSidecar;
    return *this;
}

Motorcycle MotorcycleBuilder::build()
{
    return Motorcycle(this->mMaker, this->mModel, this->mYear, this->mEngineType, this->mHasSidecar);
}
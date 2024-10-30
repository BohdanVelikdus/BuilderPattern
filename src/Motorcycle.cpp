#include "Motorcycle.h"

void Motorcycle::showInfo()
{
    std::cout << "The car with such a parameters:\n" 
              << "\tMaker: " << mMaker << "\n" 
              << "\tModel: " << mModel << "\n" 
              << "\tYear: "  << mYear << "\n" 
              << "\tType of engine: " << mEngineType << "\n"
              << "\tHas sidecar: " << mHasSidecar << "\n";
}

Motorcycle::Motorcycle(const Motorcycle& other)
{
    this->mMaker = other.mMaker;
    this->mModel = other.mModel;
    this->mYear  = other.mYear;
    this->mEngineType = other.mEngineType;
    this->mHasSidecar = other.mHasSidecar;
}
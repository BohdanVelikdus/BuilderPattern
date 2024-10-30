#include "Car.h"

void Car::showInfo() 
{
    std::cout << "The car with such a parameters:\n" 
              << "\tMaker: " << mMaker << "\n" 
              << "\tModel: " << mModel << "\n" 
              << "\tYear: "  << mYear << "\n" 
              << "\tNumberOfDoors: " << mNumberOfDoors << "\n"
              << "\tHas sunroof: " << mHasSunroof << "\n";
}
Car::Car(const Car& other)
{
    this->mMaker = other.mMaker;
    this->mModel = other.mModel;
    this->mYear  = other.mYear;
    this->mNumberOfDoors = other.mNumberOfDoors;
    this->mHasSunroof = other.mHasSunroof;
}


#include "CarBuilder.h"

/* static */CarBuilder CarBuilder::Construct()
{
    return CarBuilder();
}

CarBuilder& CarBuilder::setNumberOfDoors(const unsigned int numberOfDoors)
{
    this->mNumberOfDoors = numberOfDoors;
    return *this;
}

CarBuilder& CarBuilder::setSunroof(const bool hasSunRoof)
{
    this->mHasSunroof = hasSunRoof;
    return *this;
}

Car CarBuilder::build()
{
    return Car(this->mMaker, this->mModel, this->mYear, this->mNumberOfDoors, this->mHasSunroof);
}
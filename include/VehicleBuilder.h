#pragma once 
#include <string>

template<typename T>
class VehicleBuilder
{
public:
    T& setMaker(const std::string& maker);
    T& setModel(const std::string& model);
    T& setYear(unsigned short year);
protected:
    std::string mMaker{};
    std::string mModel{};
    unsigned short mYear{};
};

template<typename T>
T& VehicleBuilder<T>::setMaker(const std::string& maker)
{
    this->mMaker = maker;
    return static_cast<T&>(*this);
}

template<typename T>
T& VehicleBuilder<T>::setModel(const std::string& model)
{
    this->mModel = model;
    return static_cast<T&>(*this);
}
template<typename T>
T& VehicleBuilder<T>::setYear(unsigned short year)
{
    this->mYear = year;
    return static_cast<T&>(*this);
}
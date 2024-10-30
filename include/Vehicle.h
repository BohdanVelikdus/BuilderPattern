#pragma once

class Vehicle
{
public: 
    virtual Vehicle* Clone() = 0;
    virtual ~Vehicle() = default;
};

template <typename T>
class VehicleCRTP : public Vehicle
{
public:
    virtual void showInfo() = 0;
    Vehicle* Clone() override 
    {
        return new T(*static_cast<T*>(this));
    }
};

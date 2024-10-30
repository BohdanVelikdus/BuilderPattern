#include <vector>
#include <memory>

#include "Vehicle.h"
#include "Car.h"
#include "CarBuilder.h"
#include "Motorcycle.h"
#include "MotorcycleBuilder.h"


int main()
{
    Car* car = new Car(CarBuilder::Construct().setMaker("Maker1").setModel("Bugatti").setYear(1998).setNumberOfDoors(2).setSunroof(true).build());
    car->showInfo();
    Motorcycle* motorc = new Motorcycle(MotorcycleBuilder::Construct().setMaker("Maker1").setModel("Bugatti").setYear(1998).setEngineType("Twin").setHasSidecar(true).build());
    motorc->showInfo();

    std::vector<Vehicle*> v ;
    v.push_back(car);
    v.push_back(motorc);
    Vehicle* tts = v[0]->Clone();  
    return 0;
}
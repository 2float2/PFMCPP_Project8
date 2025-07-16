#include "Highway.h"
#include "Vehicle.h"
#include "Car.h"
#include "HighwayPatrol.h"
#include "Motorcycle.h"
#include "SemiTruck.h"


#include <cassert>



void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    assert(false);

    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    do not call `setSpeed`.  Pick a different function.
    */
    if( auto* ch1 = dynamic_cast<Car*>(v) )
        {
            ch1->closeWindows();
        }
        else if( auto* ch2 = dynamic_cast<HighwayPatrol*>(v) )
        {
            ch2->scanHighway(this);
        }
        else if( auto* ch3 = dynamic_cast<Motorcycle*>(v))
        {
            ch3->lanesplitAndRace();
        }
        else if( auto* ch = dynamic_cast<SemiTruck*>(v) )
        {
            //
        }  
    
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    assert(false);

    /*
    depending on the derived type, call the member function that tries to evade the cops. 
    do not call `setSpeed`.  Pick a different function.
    trucks pull over, but cars and bikes try to evade!!
    */
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}

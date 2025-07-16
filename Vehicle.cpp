#include "Vehicle.h"
#include <iostream>

Vehicle(const std::string& n) : name(n)
{
}

void Vehicle::setSpeed(int s)
{
    std::cout << "\nHighway is adjusting " << name << "'s speed to " << s << " mph" << std::endl;
    speed = s;
}

Vehicle::void tryToEvade()
{
    std::cout << name << ": you'll never take me alive, ya dirty coppers!" << std::endl;
    setSpeed(100);
}
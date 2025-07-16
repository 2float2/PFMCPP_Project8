#include "SemiTruck.h"
#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::activateGovernor()
{
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": Oh! Did I drive too fast?" << std::endl;
}

void SemiTruck::setSpeed(int s)
{
    Vehicle::setSpeed(s);
}

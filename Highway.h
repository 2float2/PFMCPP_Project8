#pragma once

#include <vector>
#include <algorithm>

struct Vehicle;

struct HighwayPatrol;
struct Highway
{
    void changeSpeed(int newSpeed);
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
private:
    void addVehicleInternal(Vehicle* v);
    void removeVehicleInternal(Vehicle* v);
    int speedLimit = 65;
    std::vector<Vehicle*> vehicles;

    friend HighwayPatrol; // Step 2: let HightwayPatrol access Highway's private member without changing access identifiers or adding getters
};

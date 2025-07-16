#pragma once
#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& n);

    ~SemiTruck() override = default;
    SemiTruck(const SemiTruck&) = default;
    SemiTruck& operator=(const SemiTruck&) = default;

    void activateGovernor();
    void pullOver();
    void setSpeed(int s) override;
};

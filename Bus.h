#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"
#include <ctime>
#include <iostream>

class Bus : public Vehicle {
    public:
        using Vehicle::Vehicle;
        int getParkingDuration() override;
};

#endif
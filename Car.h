#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <ctime>
#include <iostream>

class Car : public Vehicle {
    public:
        using Vehicle::Vehicle;
        int getParkingDuration() override;
};

#endif
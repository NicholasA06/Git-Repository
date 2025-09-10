#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"
#include <ctime>
#include <iostream>

class Motorbike : public Vehicle {
public:
    using Vehicle::Vehicle;
    int getParkingDuration() override;
};

#endif

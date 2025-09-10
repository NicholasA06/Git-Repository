#include "Motorbike.h"
#include <ctime>
#include <iostream>

int Motorbike::getParkingDuration() {
    return (Vehicle::getParkingDuration() * 0.85);
}

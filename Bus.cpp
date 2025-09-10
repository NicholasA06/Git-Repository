#include "Bus.h"
#include <ctime>
#include <iostream>

int Bus::getParkingDuration() {
    return (Vehicle::getParkingDuration() * 0.75);
}
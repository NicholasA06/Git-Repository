#include "Car.h"
#include <ctime>
#include <iostream>

int Car::getParkingDuration() {
    return (Vehicle::getParkingDuration() * 0.9);
}
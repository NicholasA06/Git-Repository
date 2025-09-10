#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>
#include <iostream>

class ParkingLot {
private:
    std::vector<Vehicle*> vehicles;
    int capacity;

public:
    // Constructors
    ParkingLot();
    ParkingLot(int capacity);

    // Functions
    void parkVehicle(Vehicle* v);
    bool unparkVehicle(int remove_ID);
    void printAll();

    // Getter
    int getCount();
};

#endif

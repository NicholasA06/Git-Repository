#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
#include <iostream>

class Vehicle {
private:
    std::time_t timeOfEntry;
    int ID;

public:
    // Constructors
    Vehicle();
    Vehicle(int id);
    Vehicle(std::time_t timeOfEntry, int id);

    // Getters
    int get_ID();
    virtual int getParkingDuration();
    std::time_t getTimeofEntry();

    // Print
    void Print();
};

#endif

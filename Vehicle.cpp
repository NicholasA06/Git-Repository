#include "Vehicle.h"
#include <ctime>

using namespace std;

Vehicle::Vehicle() {
    timeOfEntry = std::time(nullptr);
    ID = 0;
}

Vehicle::Vehicle(int id) {
    this->ID = id;
    timeOfEntry = std::time(nullptr);
}

Vehicle::Vehicle(std::time_t timeOfEntry, int id) {
    this->timeOfEntry = timeOfEntry;
    this->ID = id;
}

std::time_t Vehicle::getTimeofEntry() {
    return timeOfEntry;
}

int Vehicle::getParkingDuration() {
    std::time_t now = std::time(nullptr);
    int real_time = now - getTimeofEntry();
    return real_time;
}

int Vehicle::get_ID() {
    return ID;
}

void Vehicle::Print() {
    cout << "Vehicle ID: " << ID << " | Time inside: " << getParkingDuration() << endl;
}

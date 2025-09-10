#include "ParkingLot.h"

ParkingLot::ParkingLot() {
    capacity = 0;
}

ParkingLot::ParkingLot(int capacity) {
    this->capacity = capacity;
}

void ParkingLot::parkVehicle(Vehicle* v) {
    if (vehicles.size() < capacity) {
        vehicles.push_back(v);
        std::cout << "Vehicle parked with ID: " << v->get_ID() << std::endl;
    } else {
        std::cout << "Lot is full" << std::endl;
    }
}

bool ParkingLot::unparkVehicle(int remove_ID) {
    if (!vehicles.empty()) {
        for (int i = 0; i < vehicles.size(); i++) {
            if (vehicles[i]->get_ID() == remove_ID) {
                vehicles.erase(vehicles.begin() + i);
                std::cout << "Vehicle with ID " << remove_ID << " has been unparked." << std::endl;
                return true;
            }
        }
    }
    return false; 
}

int ParkingLot::getCount() {
    return vehicles.size();
}

void ParkingLot::printAll() {
    std::cout << "Vehicles currently in the parking lot: " << std::endl;
    for (auto vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->get_ID() << " | Time inside: " << vehicle->getParkingDuration() << " seconds" << std::endl;
    }
}

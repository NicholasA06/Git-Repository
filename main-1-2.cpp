#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"   
#include "Bus.h"      
#include "Motorbike.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    int m = 10;
    int id = 0;
    int remove_id;
    std::string v_type = "null";
    ParkingLot lot(m);

    for (int i = 0; i < m; i++) {
        std::cout << "Enter vehicle type you want to add ";
        std::cin >> v_type;
        std::cout << "Enter vehicle ID: ";
        std::cin >> id;

        Vehicle* v = nullptr;

        if (v_type == "Car") {
            v = new Car(id);
        } else if (v_type == "Bus") {
            v = new Bus(id);
        } else if (v_type == "Motorbike") {
            v = new Motorbike(id);
        }

        lot.parkVehicle(v);
    }

    std::cout << "Enter ID of vehicle to unpark: ";
    std::cin >> remove_id;
    lot.unparkVehicle(remove_id);

    lot.printAll();

    return 0;
}
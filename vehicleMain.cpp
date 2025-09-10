#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include <vector>
#include <string>
#include <iostream> 
#include <chrono>
#include <thread>

int main() {
    int n = 0;
    std::cout << "How many entries? ";
    std::cin >> n;

    std::vector<Vehicle*> lot;

    for (int i = 0; i < n; i++){
        std::string type = "null";
        std::cout << "Type of vehicle (Car, Bus, Motorbike):  ";
        std::cin >> type;

        int id = 0;
        std::cout << "Vehicle ID: ";
        std::cin >> id;

        if (type == "Car"){
            lot.push_back(new Car(id));
        }   else if ( type == "Bus") {
            lot.push_back(new Bus(id));
        }   else if ( type == "Motorbike") {
            lot.push_back(new Motorbike(id));
        } else {
            return 0;
        }
    }

    std::this_thread::sleep_for(std::chrono::seconds(5));
    for (Vehicle* v : lot) {
        std::cout << "Vehicle ID " << v->get_ID() << " Duration of park: " << v->getParkingDuration() << " seconds" << std::endl;
    }
}
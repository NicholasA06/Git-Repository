#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

// Base class
class Vehicle {
private:
    time_t timeOfEntry;
    int ID;

public:
    Vehicle(int id) : ID(id) {
        timeOfEntry = time(nullptr);
    }

    int getID() const {
        return ID;
    }

    virtual int getParkingDuration() const = 0;

protected:
    int getRawDuration() const {
        time_t now = time(nullptr);
        return static_cast<int>(difftime(now, timeOfEntry));
    }
};

class Car : public Vehicle {
public:
    Car(int id) : Vehicle(id) {}

    int getParkingDuration() const override {
        int duration = getRawDuration();
        return duration - (duration * 10 / 100);
    }
};

class Bus : public Vehicle {
public:
    Bus(int id) : Vehicle(id) {}

    int getParkingDuration() const override {
        int duration = getRawDuration();
        return duration - (duration * 25 / 100);
    }
};

class Motorbike : public Vehicle {
public:
    Motorbike(int id) : Vehicle(id) {}

    int getParkingDuration() const override {
        int duration = getRawDuration();
        return duration - (duration * 15 / 100);
    }
};

int main() {
    int n;
    cout << "Enter number of vehicles: ";
    cin >> n;

    vector<Vehicle*> vehicles;
    for (int i = 0; i < n; i++) {
        cout << "Enter type of vehicle (1=Car, 2=Bus, 3=Motorbike): ";
        int type;
        cin >> type;

        if (type == 1) {
            vehicles.push_back(new Car(i + 1));
        } else if (type == 2) {
            vehicles.push_back(new Bus(i + 1));
        } else if (type == 3) {
            vehicles.push_back(new Motorbike(i + 1));
        } else {
            cout << "Invalid type. Skipping.\n";
        }
    }

    cout << "\nParking durations:\n";
    for (auto v : vehicles) {
        cout << "Vehicle ID " << v->getID()
             << " - Duration: " << v->getParkingDuration() << " seconds\n";
    }

    for (auto v : vehicles) {
        delete v;
    }

    return 0;
}

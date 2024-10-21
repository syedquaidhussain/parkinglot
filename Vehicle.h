#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle {
private:
    string licensePlate;
    string type; // e.g., Car, Motorcycle, Truck

public:
    Vehicle(const string &plate, const string &t) : licensePlate(plate), type(t) {}

    string getLicensePlate() const {
        return licensePlate;
    }

    string getType() const {
        return type;
    }
};

#endif

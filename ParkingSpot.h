#ifndef PARKINGSPOT_H
#define PARKINGSPOT_H

#include <iostream>
#include "Vehicle.h"

using namespace std;
class ParkingSpot {
private:
    string spotID;
    string type; // e.g., Compact, Large, Handicapped, Motorcycle, Electric
    bool available;
    Vehicle *vehicle; // Pointer to the vehicle parked in this spot (nullptr if empty)

public:
    ParkingSpot(const string &id, const string &t) : spotID(id), type(t), available(true), vehicle(nullptr) {}

    string getID() const {
        return spotID;
    }

    string getType() const {
        return type;
    }

    bool isAvailable() const {
        return available;
    }

    bool canFitVehicle(const Vehicle &v) const {
        // Logic to check if the vehicle can fit in this spot type
        // e.g., motorcycle in compact spot, car in large spot, etc.
        return true; // Simplified
    }

    void assignVehicle(const Vehicle &v) {
        vehicle = new Vehicle(v);
        available = false;
    }

    void removeVehicle() {
        delete vehicle;
        vehicle = nullptr;
        available = true;
    }

    Vehicle* getVehicle() const {
        return vehicle;
    }
};

#endif

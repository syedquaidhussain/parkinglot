#ifndef PARKINGFLOOR_H
#define PARKINGFLOOR_H

#include <iostream>
#include <vector>
#include "ParkingSpot.h"
#include "Vehicle.h"
using namespace std;

class ParkingFloor {
private:
    string floorID;
    vector<ParkingSpot> spots;

public:
    ParkingFloor(const string &id) : floorID(id) {}

    string getID() const {
        return floorID;
    }

    void addSpot(const ParkingSpot &spot) {
        spots.push_back(spot);
        cout << "Parking spot " << spot.getID() << " added on floor.\n";
    }

    bool parkVehicle(const Vehicle &vehicle) {
        for (auto &spot : spots) {
            if (spot.isAvailable() && spot.canFitVehicle(vehicle)) {
                spot.assignVehicle(vehicle);
                cout << "Vehicle parked in spot " << spot.getID() << ".\n";
                return true;
            }
        }
        return false;
    }

    bool removeVehicle(const Vehicle &vehicle) {
        for (auto &spot : spots) {
            if (spot.getVehicle() && spot.getVehicle()->getLicensePlate() == vehicle.getLicensePlate()) {
                spot.removeVehicle();
                cout << "Vehicle removed from spot " << spot.getID() << ".\n";
                return true;
            }
        }
        return false;
    }

    // void displayAvailableSpots() {
    //     cout << "Available spots on floor " << floorID << ": \n";
    //     for (auto &spot : spots) {
    //         if (spot.isAvailable()) {
    //             cout << "Spot ID: " << spot.getID() << " (Type: " << spot.getType() << ")\n";
    //         }
    //     }
    // }
    void displayAvailableSpots() const {  // Add 'const' here
    cout << "Available spots on floor " << floorID << ": \n";
    for (const auto &spot : spots) { // Use const reference to avoid unnecessary copies
        if (spot.isAvailable()) {
            cout << "Spot ID: " << spot.getID() << " (Type: " << spot.getType() << ")\n";
        }
    }
}

   int getParkedVehicleCount() const {  // Add this method
        int count = 0;
        for (const auto &spot : spots) {
            if (!spot.isAvailable()) {
                count++;  // Count how many spots are occupied
            }
        }
        return count;
    }

};

#endif

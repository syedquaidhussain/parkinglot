#ifndef PARKINGFLOOR_H
#define PARKINGFLOOR_H

#include <map>
#include "ParkingSpot.h"
using namespace std;
#include<iostream>

class ParkingFloor {
    string floorId;
    map<string, ParkingSpot> spots;  // Key is spot type
public:
    ParkingFloor(string floorId) : floorId(floorId) {}

    void addSpot(ParkingSpot spot) {
        spots[spot.getType()] = spot;
    }

    bool isSpotFree(string type) {
        return spots[type].getStatus();
    }

    bool assignSpot(string type) {
        return spots[type].assignSpot();
    }

    void displayFreeSpots() {
        for (auto &spot : spots) {
            if (spot.second.getStatus()) {
                cout << "Spot: " << spot.first << " is free." << endl;
            }
        }
    }
};

#endif

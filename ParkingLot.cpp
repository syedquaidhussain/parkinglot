#include "ParkingLot.h"
#include <iostream>
using namespace std;

ParkingLot::ParkingLot(string lotId) : lotId(lotId), authorizedAdmin(nullptr) {}

void ParkingLot::authorizeAdmin(Admin* admin, string password) {
    if (admin->validate(password)) {
        authorizedAdmin = admin;
        cout << "Admin authorized." << endl;
    } else {
        cout << "Authorization failed!" << endl;
    }
}

void ParkingLot::addFloor(ParkingFloor floor) {
    if (authorizedAdmin) {
        floors.push_back(floor);
        cout << "Floor added successfully by " << authorizedAdmin->name << endl;
    } else {
        cout << "Unauthorized Admin. Operation denied." << endl;
    }
}

void ParkingLot::displayAvailableSpots() {
    for (auto &floor : floors) {
        floor.displayFreeSpots();
    }
}

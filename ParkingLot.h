#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include "Admin.h"
#include "ParkingFloor.h"
using namespace std;

class ParkingLot {
    string lotId;
    vector<ParkingFloor> floors;
    Admin* authorizedAdmin;  // Pointer to the currently authorized admin

public:
    ParkingLot(string lotId);
    void authorizeAdmin(Admin* admin, string password);
    void addFloor(ParkingFloor floor);
    void displayAvailableSpots();
};

#endif

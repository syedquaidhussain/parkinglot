#ifndef PARKING_ATTENDANT_H
#define PARKING_ATTENDANT_H

#include "User.h"
#include <iostream>

class ParkingAttendant : public User {
public:
    ParkingAttendant(string id, string name) : User(id, name) {}

    void displayInfo() override {
        cout << "Parking Attendant: " << name << " (ID: " << id << ")" << endl;
    }
};

#endif

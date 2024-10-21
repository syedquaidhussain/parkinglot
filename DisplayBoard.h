#ifndef DISPLAYBOARD_H
#define DISPLAYBOARD_H

#include <iostream>
#include "ParkingFloor.h"

using namespace std;

class DisplayBoard {
private:
    string boardID;
    ParkingFloor &floor;

public:
    DisplayBoard(const string &id, ParkingFloor &f) : boardID(id), floor(f) {}

    void showAvailableSpots() {
        cout << "Displaying available spots for floor " << floor.getID() << ":\n";
        floor.displayAvailableSpots();
    }
};

#endif

#ifndef PARKINGATTENDANT_H
#define PARKINGATTENDANT_H

#include <string>
using namespace std;

class ParkingAttendant {
private:
    string attendantID;
    string name;

public:
    ParkingAttendant(const string &id, const string &attendantName) 
        : attendantID(id), name(attendantName) {}

    string getName() const {
        return name;
    }

    string getID() const {
        return attendantID;
    }
};

#endif

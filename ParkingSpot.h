#ifndef PARKINGSPOT_H
#define PARKINGSPOT_H

#include <string>

class ParkingSpot {
    string spotId;
    string type;
    bool isFree;
public:
   ParkingSpot() : spotId("unknown"), type("unknown"), isFree(true) {}
    ParkingSpot(string spotId, string type) : spotId(spotId), type(type), isFree(true) {}

    bool assignSpot() {
        if (isFree) {
            isFree = false;
            return true;
        }
        return false;
    }

    bool removeSpot() {
        if (!isFree) {
            isFree = true;
            return true;
        }
        return false;
    }

    bool getStatus() const {
        return isFree;
    }

    string getType() const {
        return type;
    }
};

#endif

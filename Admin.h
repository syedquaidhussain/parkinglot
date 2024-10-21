// #ifndef ADMIN_H
// #define ADMIN_H

// #include <iostream>
// #include <vector>
// #include "ParkingFloor.h"
// #include "ParkingAttendant.h"

// using namespace std;
// class Admin {
// private:
//     string adminID;
//     string name;
//     string password;
//     vector<ParkingAttendant> attendants;
//     vector<ParkingFloor> floors;
//     double parkingRate;

// public:
//     Admin(const string &id, const string &n, const string &pwd) 
//         : adminID(id), name(n), password(pwd), parkingRate(4.0) {}

//     void addFloor(const ParkingFloor &floor) {
//         floors.push_back(floor);
//         cout << "Floor " << floor.getID() << " added successfully.\n";
//     }

//     void removeFloor(const string &floorID) {
//         for (auto it = floors.begin(); it != floors.end(); ++it) {
//             if (it->getID() == floorID) {
//                 floors.erase(it);
//                 cout << "Floor " << floorID << " removed successfully.\n";
//                 return;
//             }
//         }
//         cout << "Floor not found.\n";
//     }

//     void addAttendant(const ParkingAttendant &attendant) {
//         attendants.push_back(attendant);
//         cout << "Parking Attendant " << attendant.getName() << " added successfully.\n";
//     }

//     void removeAttendant(const string &attendantID) {
//         for (auto it = attendants.begin(); it != attendants.end(); ++it) {
//             if (it->getID() == attendantID) {
//                 attendants.erase(it);
//                 cout << "Parking Attendant " << attendantID << " removed successfully.\n";
//                 return;
//             }
//         }
//         cout << "Attendant not found.\n";
//     }

//     void setParkingRate(double rate) {
//         parkingRate = rate;
//         cout << "Parking rate updated to " << rate << " successfully.\n";
//     }

//     double getParkingRate() const {
//         return parkingRate;
//     }

//     void displayFloors() {
//         cout << "Displaying all floors: \n";
//         for (const auto &floor : floors) {
//             cout << "Floor: " << floor.getID() << "\n";
//         }
//     }
// };

// #endif














#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <vector>
#include "ParkingFloor.h"
#include "ParkingAttendant.h"

using namespace std;

class Admin {
private:
    string adminID;
    string name;
    string password;
    vector<ParkingAttendant> attendants;
    vector<ParkingFloor> floors;
    double parkingRate;

public:
    Admin(const string &id, const string &n, const string &pwd) 
        : adminID(id), name(n), password(pwd), parkingRate(4.0) {}

    // Method to validate the admin password
    bool validate(const string& pwd) const {
        return password == pwd;
    }

    string getName() const {
        return name;
    }

    void addFloor(const ParkingFloor &floor) {
        floors.push_back(floor);
        cout << "Floor " << floor.getID() << " added successfully.\n";
    }

    void removeFloor(const string &floorID) {
        for (auto it = floors.begin(); it != floors.end(); ++it) {
            if (it->getID() == floorID) {
                floors.erase(it);
                cout << "Floor " << floorID << " removed successfully.\n";
                return;
            }
        }
        cout << "Floor not found.\n";
    }

    void addAttendant(const ParkingAttendant &attendant) {
        attendants.push_back(attendant);
        cout << "Parking Attendant " << attendant.getName() << " added successfully.\n";
    }

    void removeAttendant(const string &attendantID) {
        for (auto it = attendants.begin(); it != attendants.end(); ++it) {
            if (it->getID() == attendantID) {
                attendants.erase(it);
                cout << "Parking Attendant " << attendantID << " removed successfully.\n";
                return;
            }
        }
        cout << "Attendant not found.\n";
    }

    void setParkingRate(double rate) {
        parkingRate = rate;
        cout << "Parking rate updated to " << rate << " successfully.\n";
    }

    double getParkingRate() const {
        return parkingRate;
    }

    void displayFloors() {
        cout << "Displaying all floors: \n";
        for (const auto &floor : floors) {
            cout << "Floor: " << floor.getID() << "\n";
        }
    }
};

#endif

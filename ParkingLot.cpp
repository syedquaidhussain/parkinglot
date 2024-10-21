// // // #include "ParkingLot.h"
// // // #include <iostream>
// // // #include "Admin.h"

// // // using namespace std;

// // // ParkingLot::ParkingLot(string lotId) : lotId(lotId), authorizedAdmin(nullptr) {}

// // // void ParkingLot::authorizeAdmin(Admin* admin, string password) {
// // //     if (admin->validate(password)) {
// // //         authorizedAdmin = admin;
// // //         cout << "Admin authorized." << endl;
// // //     } else {
// // //         cout << "Authorization failed!" << endl;
// // //     }
// // // }

// // // void ParkingLot::addFloor(ParkingFloor floor) {
// // //     if (authorizedAdmin) {
// // //         floors.push_back(floor);
// // //         cout << "Floor added successfully by " << authorizedAdmin->name << endl;
// // //     } else {
// // //         cout << "Unauthorized Admin. Operation denied." << endl;
// // //     }
// // // }

// // // void ParkingLot::displayAvailableSpots() {
// // //     for (auto &floor : floors) {
// // //         floor.displayFreeSpots();
// // //     }
// // // }



// // // #include "ParkingLot.h"
// // // #include <iostream>
// // // #include "Admin.h"
// // // #include "ParkingFloor.h"

// // // using namespace std;

// // // ParkingLot::ParkingLot(string lotId, int cap) : lotID(lotId), capacity(cap), authorizedAdmin(nullptr) {}
// // // ParkingLot lot("Lot1", 100); // Provide both a string and an integer


// // // void ParkingLot::authorizeAdmin(Admin* admin, const string& password) {
// // //     if (admin->validate(password)) {
// // //         authorizedAdmin = admin;
// // //         cout << "Admin authorized." << endl;
// // //     } else {
// // //         cout << "Authorization failed!" << endl;
// // //     }
// // // }

// // // void ParkingLot::addFloor(const ParkingFloor &floor) {
// // //     if (authorizedAdmin) {
// // //         floors.push_back(floor);
// // //         cout << "Floor added successfully by " << authorizedAdmin->name << endl;
// // //     } else {
// // //         cout << "Unauthorized Admin. Operation denied." << endl;
// // //     }
// // // }

// // // void ParkingLot::displayAvailableSpots() {
// // //     for (auto &floor : floors) {
// // //         floor.displayFreeSpots();
// // //     }
// // // }



// // #include "ParkingLot.h"
// // #include <iostream>
// // #include "Admin.h"
// // #include "ParkingFloor.h"
// // #include<vector>

// // using namespace std;

// // // Constructor implementation: Initializes the lotID and capacity, sets authorizedAdmin to nullptr
// // ParkingLot::ParkingLot(const string &lotId, int cap) 
// //     : lotID(lotId), capacity(cap), authorizedAdmin(nullptr) {}

// // // Authorize the admin for the parking lot
// // void ParkingLot::authorizeAdmin(Admin* admin, const string& password) {
// //     if (admin->validate(password)) {
// //         authorizedAdmin = admin;
// //         cout << "Admin authorized." << endl;
// //     } else {
// //         cout << "Authorization failed!" << endl;
// //     }
// // }

// // // Add a new parking floor
// // void ParkingLot::addFloor(const ParkingFloor &floor) {
// //     if (authorizedAdmin) {

// //         floors.push_back(floor);

// //         cout << "Floor added successfully by " << authorizedAdmin->name << endl;

// //     } 
// //     else
// //      {
// //         cout << "Unauthorized Admin. Operation denied." << endl;
// //     }
// // }

// // // Display available parking spots on each floor
// // void ParkingLot::displayAvailableSpots() {
// //     for (auto &floor : floors) {
             
// //         floor.displayFreeSpots();


// //     }
// // }


// /*
// #include "ParkingLot.h"
// #include <iostream>
// #include <vector> // Ensure vector is included
// #include "Admin.h"
// #include "ParkingFloor.h"

// using namespace std;

// // Constructor implementation: Initializes the lotID and capacity, sets authorizedAdmin to nullptr
// ParkingLot::ParkingLot(const string &lotId, int cap) 
//     : lotID(lotId), capacity(cap), authorizedAdmin(nullptr) {}

// // Authorize the admin for the parking lot
// void ParkingLot::authorizeAdmin(Admin* admin, const string& password) {
//     if (admin->validate(password)) {  // Ensure Admin has a validate method
//         authorizedAdmin = admin;
//         cout << "Admin authorized." << endl;
//     } else {
//         cout << "Authorization failed!" << endl;
//     }
// }

// // Add a new parking floor
// void ParkingLot::addFloor(const ParkingFloor &floor) {
//     if (authorizedAdmin) {
//         floors.push_back(floor);  // Add the floor to the list

//         cout << "Floor added successfully by " << authorizedAdmin->getName() << endl;  // Ensure Admin has getName()
//     } else {
//         cout << "Unauthorized Admin. Operation denied." << endl;
//     }
// }

// // Display available parking spots on each floor
// void ParkingLot::displayAvailableSpots() const {
//     for (const auto &floor : floors) {
//         floor.displayFreeSpots();  // Ensure ParkingFloor has displayFreeSpots() and is marked const
//     }
// }

// */



// #include "ParkingLot.h"
// #include <iostream>
// #include <vector> // Ensure vector is included
// #include "Admin.h"
// #include "ParkingFloor.h"

// using namespace std;

// // Constructor implementation: Initializes the lotID and capacity, sets authorizedAdmin to nullptr
// ParkingLot::ParkingLot(const string &lotId, int cap) 
//     : lotID(lotId), capacity(cap), authorizedAdmin(nullptr) {}

// // Authorize the admin for the parking lot
// void ParkingLot::authorizeAdmin(Admin* admin, const string& password) {
//     if (admin->validate(password)) {  // Ensure Admin has a validate method
//         authorizedAdmin = admin;
//         cout << "Admin authorized." << endl;
//     } else {
//         cout << "Authorization failed!" << endl;
//     }
// }

// // Add a new parking floor
// void ParkingLot::addFloor(const ParkingFloor &floor) {
//     if (authorizedAdmin) {
//         floors.push_back(floor);  // Add the floor to the list

//         cout << "Floor added successfully by " << authorizedAdmin->getName() << endl;  // Use getName() for Admin
//     } else {
//         cout << "Unauthorized Admin. Operation denied." << endl;
//     }
// }

// // Display available parking spots on each floor
// // void ParkingLot::displayAvailableSpots() const {
// //     for (const auto &floor : floors) {
// //         floor.displayAvailableSpots();  // Ensure ParkingFloor has displayFreeSpots() and is marked const
// //     }
// // }

// void ParkingLot::displayAvailableSpots() const {
//     for (const auto &floor : floors) {
//         floor.displayAvailableSpots();  // Now this will work since displayAvailableSpots is const
//     }
// }

// int ParkingFloor::getParkedVehicleCount() const {
//     int count = 0;
//     for (const auto& spot : spots) {
//         if (!spot.isAvailable()) {
//             count++;  // If the spot is occupied, increase the count
//         }
//     }
//     return count;
// }
// bool ParkingFloor::parkVehicle(const Vehicle& vehicle) {
//     for (auto& spot : spots) {
//         if (spot.isAvailable() && spot.canFitVehicle(vehicle)) {
//             spot.assignVehicle(vehicle);  // Assuming `ParkingSpot` has this method
//             return true;  // Vehicle parked successfully
//         }
//     }
//     return false;  // No available spot for the vehicle
// }

// bool ParkingFloor::removeVehicle(const Vehicle& vehicle) {
//     for (auto& spot : spots) {
//         if (spot.getVehicle() && spot.getVehicle()->getLicensePlate() == vehicle.getLicensePlate()) {
//             spot.removeVehicle();  // Assuming `ParkingSpot` has this method
//             return true;  // Vehicle removed successfully
//         }
//     }
//     return false;  // Vehicle not found
// }





#include "ParkingLot.h"
#include <iostream>
#include <vector>  // Include vector as you use it for storing floors
#include "Admin.h"  // Include Admin as you interact with admin in this class
#include "ParkingFloor.h"

using namespace std;

// Constructor implementation: Initializes the lotID and capacity, sets authorizedAdmin to nullptr
ParkingLot::ParkingLot(const string& lotId, int cap) 
    : lotID(lotId), capacity(cap), authorizedAdmin(nullptr) {}

// Authorize the admin for the parking lot
void ParkingLot::authorizeAdmin(Admin* admin, const string& password) {
    if (admin->validate(password)) {  // Ensure Admin has a validate method
        authorizedAdmin = admin;
        cout << "Admin authorized." << endl;
    } else {
        cout << "Authorization failed!" << endl;
    }
}

// Add a new parking floor
void ParkingLot::addFloor(const ParkingFloor &floor) {
    if (authorizedAdmin) {
        floors.push_back(floor);  // Add the floor to the list
        cout << "Floor added successfully by " << authorizedAdmin->getName() << endl;  // Ensure Admin has getName()
    } else {
        cout << "Unauthorized Admin. Operation denied." << endl;
    }
}

// Check if the parking lot is full
bool ParkingLot::isFull() const {
    int totalVehicles = 0;
    for (const auto& floor : floors) {
        totalVehicles += floor.getParkedVehicleCount();  // Assuming ParkingFloor has this method
    }
    return totalVehicles >= capacity;
}

// Park a vehicle in the parking lot
bool ParkingLot::parkVehicle(const Vehicle& vehicle) {
    for (auto& floor : floors) {
        if (floor.parkVehicle(vehicle)) {  // Assuming ParkingFloor has this method
            return true;  // Vehicle parked successfully
        }
    }
    return false;  // No available spot
}

// Remove a vehicle from the parking lot
bool ParkingLot::removeVehicle(const Vehicle& vehicle) {
    for (auto& floor : floors) {
        if (floor.removeVehicle(vehicle)) {  // Assuming ParkingFloor has this method
            return true;  // Vehicle removed successfully
        }
    }
    return false;  // Vehicle not found
}

// Display available parking spots on each floor
void ParkingLot::displayAvailableSpots() const {
    for (const auto& floor : floors) {
        floor.displayAvailableSpots();  // Assuming ParkingFloor has this method
    }
}

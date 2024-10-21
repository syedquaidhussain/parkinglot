// // #ifndef PARKINGLOT_H
// // #define PARKINGLOT_H

// // #include <string>
// // #include <vector>
// // #include "Admin.h"
// // #include "ParkingFloor.h"

// // using namespace std;

// // class ParkingLot {
// // private:
// //     string lotID;
// //     int capacity;
// //     int currentVehicles;
// //     Admin* authorizedAdmin;

// // public:
// //     ParkingLot(const string &id, int cap); // Constructor declaration

// //     void authorizeAdmin(Admin* admin, const string& password); // Function declaration

// //     void addFloor(const ParkingFloor &floor); // Function declaration

// //     void displayAvailableSpots(); // Function declaration
// // };

// // #endif


// #ifndef PARKINGLOT_H
// #define PARKINGLOT_H

// #include <iostream>
// #include <vector>  // Include vector for storing floors
// #include "ParkingFloor.h"
// #include "Admin.h"

// class ParkingLot {
// private:
//     std::string lotID;             // Unique identifier for the parking lot
//     int capacity;                  // Total parking capacity
//     Admin* authorizedAdmin;        // Authorized admin for the parking lot
//     std::vector<ParkingFloor> floors; // List of parking floors in the lot

// public:
//     // Constructor
//     ParkingLot(const std::string &lotId, int cap);

//     // Authorize an admin
//     void authorizeAdmin(Admin* admin, const std::string& password);

//     // Add a parking floor
//     void addFloor(const ParkingFloor &floor);

//     // Display available parking spots on each floor
//     void displayAvailableSpots() const;


// };

// #endif





// #ifndef PARKINGLOT_H
// #define PARKINGLOT_H

// #include <vector>
// #include "ParkingFloor.h"
// #include "Vehicle.h"

// class ParkingLot {
// private:
//     std::string lotID;
//     int capacity;
//     std::vector<ParkingFloor> floors;  // Collection of parking floors
//     Admin* authorizedAdmin;

// public:
//     ParkingLot(const std::string& lotId, int cap);
    
//     // Declare these functions:
//     bool isFull() const;
//     bool parkVehicle(const Vehicle& vehicle);
//     bool removeVehicle(const Vehicle& vehicle);
    
//     void addFloor(const ParkingFloor& floor);
//     void displayAvailableSpots() const;
// };

// #endif


#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include <string>
#include "ParkingFloor.h"
#include "Vehicle.h"
#include "Admin.h"  // Include this header file as it's being used

class ParkingLot {
private:
    std::string lotID;
    int capacity;
    std::vector<ParkingFloor> floors;  // Collection of parking floors
    Admin* authorizedAdmin;

public:
    // Constructor
    ParkingLot(const std::string& lotId, int cap);

    // Function declarations
    bool isFull() const;
    bool parkVehicle(const Vehicle& vehicle);
    bool removeVehicle(const Vehicle& vehicle);
    
    void addFloor(const ParkingFloor& floor);
    void displayAvailableSpots() const;
    void authorizeAdmin(Admin* admin, const std::string& password);  // Declare the function

};

#endif

// #ifndef ENTRANCEPANEL_H
// #define ENTRANCEPANEL_H

// #include <iostream>
// #include "Ticket.h"
// #include "ParkingLot.h"

// using namespace std;

// class EntrancePanel {
// private:
//     string panelID;

// public:
//     EntrancePanel(const string &id) : panelID(id) {}

//     // Ticket* issueTicket(ParkingLot &lot, const Vehicle &vehicle, double rate) 
//     {
//         if (lot.isFull()) {
//             cout << "Parking lot is full. No more vehicles allowed.\n";
//             return nullptr;
//         }

//         Ticket* newTicket = new Ticket(vehicle.getLicensePlate(), rate);
//         if (lot.parkVehicle(vehicle)) {
//             cout << "Ticket issued: " << newTicket->getTicketID() << "\n";
//             return newTicket;
//         }

//         cout << "Failed to issue ticket.\n";
//         delete newTicket;
//         return nullptr;
//     }
// };

// #endif




#ifndef ENTRANCEPANEL_H
#define ENTRANCEPANEL_H

#include <iostream>
#include "Ticket.h"
#include "ParkingLot.h"

using namespace std;

class EntrancePanel {
private:
    string panelID;

public:
    EntrancePanel(const string &id) : panelID(id) {}

    Ticket* issueTicket(ParkingLot &lot, const Vehicle &vehicle, double rate) {
        if (lot.isFull()) {
            cout << "Parking lot is full. No more vehicles allowed.\n";
            return nullptr;
        }

        Ticket* newTicket = new Ticket(vehicle.getLicensePlate(), vehicle, rate);
        if (lot.parkVehicle(vehicle)) {
            cout << "Ticket issued: " << newTicket->getTicketID() << "\n";
            return newTicket;
        }

        cout << "Failed to issue ticket.\n";
        delete newTicket;
        return nullptr;
    }
};

#endif

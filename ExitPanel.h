#ifndef EXITPANEL_H
#define EXITPANEL_H

#include <iostream>
#include "Ticket.h"
#include "ParkingLot.h"
#include "Payment.h"

using namespace std;
class ExitPanel {
private:
    string panelID;

public:
    ExitPanel(const string &id) : panelID(id) {}

    bool processExit(ParkingLot &lot, Ticket *ticket, Payment *payment) {
        if (ticket == nullptr) {
            cout << "No ticket found. Cannot exit.\n";
            return false;
        }

        double totalAmount = ticket->calculateTotalAmount();
        if (payment->processPayment(totalAmount)) {
            lot.removeVehicle(ticket->getVehicle());
            cout << "Payment successful. Vehicle removed from parking lot.\n";
            return true;
        } else {
            cout << "Payment failed. Cannot exit.\n";
            return false;
        }
    }
};

#endif

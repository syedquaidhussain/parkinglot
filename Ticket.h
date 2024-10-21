#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Ticket {
private:
    string ticketID;
    time_t entryTime;
    double hourlyRate;
    Vehicle vehicle; // Store the vehicle object
    int hoursParked;
    time_t exitTime;
    bool paid;

public:
// Assuming 'vehicle' is the Vehicle object being passed to this method
// Ticket* newTicket = new Ticket(vehicle.getLicensePlate(), vehicle, rate);

    Ticket(const string &id, const Vehicle &v, double rate) 
        : ticketID(id), vehicle(v), hourlyRate(rate), hoursParked(0), paid(false) {
        entryTime = time(0); // Set the current time as entry
    }

    string getTicketID() const {
        return ticketID;
    }

    Vehicle getVehicle() const { // Add this method
        return vehicle;
    }

    double calculateTotalAmount() {
        time_t currentTime = time(0);
        hoursParked = static_cast<int>(difftime(currentTime, entryTime) / 3600);

        // Example rate model: $4 for first hour, $3.5 for second and third hours, $2.5 for subsequent hours
        if (hoursParked == 1) return 4.0;
        if (hoursParked == 2 || hoursParked == 3) return 4.0 + 3.5 * (hoursParked - 1);
        return 4.0 + 7.0 + 2.5 * (hoursParked - 3);
    }

    void markAsPaid() {
        paid = true;
    }

    bool isPaid() const {
        return paid;
    }
};

#endif

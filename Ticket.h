#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>

class Ticket {
    string ticketId;
    double hourlyRate;
    double totalAmount;
    int hours;

public:
    Ticket(string ticketId, double hourlyRate, int hours)
        : ticketId(ticketId), hourlyRate(hourlyRate), hours(hours), totalAmount(0) {}

    void calculateTotal() {
        if (hours == 1) totalAmount = 4.0;
        else if (hours == 2 || hours == 3) totalAmount = 3.5 * hours;
        else totalAmount = 2.5 * hours;
    }

    double getTotalAmount() {
        calculateTotal();
        return totalAmount;
    }

    void displayTicket() {
        cout << "Ticket ID: " << ticketId << ", Hours: " << hours
             << ", Total Amount: $" << getTotalAmount() << endl;
    }
};

#endif

#include <iostream>
#include "Admin.h"
#include "Customer.h"
#include "ParkingAttendant.h"
#include "ParkingLot.h"
#include "CreditCardPayment.h"
#include "CashPayment.h"
#include "Ticket.h"

int main() {
    // Creating users
    Admin admin1("A001", "AdminOne", "admin123");
    Customer customer1("C001", "CustomerOne");
    ParkingAttendant attendant1("P001", "AttendantOne");

    // Creating parking lot and floors
    ParkingLot lot("Lot1");
    ParkingFloor floor1("F001");

    // Adding spots to the floor
    floor1.addSpot(ParkingSpot("S001", "Compact"));
    floor1.addSpot(ParkingSpot("S002", "Large"));

    // Authorizing admin and adding a floor
    lot.authorizeAdmin(&admin1, "admin123");  // Successful authorization
    lot.addFloor(floor1);

    // Display available spots
    lot.displayAvailableSpots();

    // Creating ticket and processing payment
    Ticket ticket1("T001", 3.5, 4);  // Parking for 4 hours
    ticket1.displayTicket();

    Payment *payment = new CreditCardPayment();
    payment->processPayment(ticket1.getTotalAmount());

    delete payment;  // Clean up
    return 0;
}

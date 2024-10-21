
#include <iostream>
#include "Admin.h"
#include "Customer.h"
#include "ParkingAttendant.h"
#include "ParkingLot.h"
#include "CreditCardPayment.h"
#include "CashPayment.h"
#include "ELectricParkingSpot.h"
#include "EntrancePanel.h"
#include "ExitPanel.h"
#include "DisplayBoard.h"


// #include <iostream>
// #include "Admin.h"
// #include "Customer.h"
// #include "ParkingAttendant.h"
// #include "ParkingLot.h"
// #include "CreditCardPayment.h"
// #include "CashPayment.h"
// #include "Ticket.h"


using namespace std;
int main() {

    // Create parking lot
    ParkingLot lot("Lot1", 100);

    // Create floors and add them to the lot
    ParkingFloor floor1("Floor1");
    ParkingFloor floor2("Floor2");
    lot.addFloor(floor1);
    lot.addFloor(floor2);

    // Create electric spot and add it to floor1
    ElectricParkingSpot electricSpot("E1", 10.0);
    floor1.addSpot(electricSpot);

    // Create entrance and exit panels
    EntrancePanel entrance("Entrance1");
    ExitPanel exit("Exit1");

    // Create customer and their vehicle
    Customer customer("C001", "CustomerOne");
    Vehicle vehicle("123-ABC", "Car");

    // Customer enters and gets a ticket
    double parkingRate = 4.0; // Initial rate
    Ticket *ticket = entrance.issueTicket(lot, vehicle, parkingRate);

    // Customer charges their electric vehicle
    CashPayment cashPayment;
    electricSpot.chargeVehicle(&cashPayment, 2.5); // Charging for 2.5 hours

    // Customer exits and pays for parking
    CreditCardPayment cardPayment;
    exit.processExit(lot, ticket, &cardPayment);

    return 0;
}

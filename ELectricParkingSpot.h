#ifndef ELECTRICPARKINGSPOT_H
#define ELECTRICPARKINGSPOT_H

#include <iostream>
#include "ParkingSpot.h"
#include "Payment.h"

using namespace std;

class ElectricParkingSpot : public ParkingSpot {
private:
    double chargingRate; // Rate for electric charging

public:
    ElectricParkingSpot(const string &id, double rate) 
        : ParkingSpot(id, "Electric"), chargingRate(rate) {}

    void chargeVehicle(Payment *payment, double hoursCharged) {
        double totalCharge = chargingRate * hoursCharged;
        payment->processPayment(totalCharge);
        cout << "Charged $" << totalCharge << " for electric charging.\n";
    }
};

#endif

#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H

#include "Payment.h"

using namespace std;
class CashPayment : public Payment {
public:
    bool processPayment(double amount) override {
        cout << "Processing cash payment of $" << amount << "\n";
        // Assuming all cash payments are successful for now
        return true;
    }
};

#endif

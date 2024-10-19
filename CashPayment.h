#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H

#include "Payment.h"
#include <iostream>

using namespace std;
class CashPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing cash payment of $" << amount << endl;
    }
};

#endif

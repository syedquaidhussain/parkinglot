#ifndef CREDITCARDPAYMENT_H
#define CREDITCARDPAYMENT_H

#include "Payment.h"
#include <iostream>
using namespace std;

class CreditCardPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing credit card payment of $" << amount << endl;
    }
};

#endif

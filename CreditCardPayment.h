#ifndef CREDITCARDPAYMENT_H
#define CREDITCARDPAYMENT_H

#include "Payment.h"
using namespace std;

class CreditCardPayment : public Payment {
public:
    bool processPayment(double amount) override {
        cout << "Processing credit card payment of $" << amount << "\n";
        // Assuming all credit card payments are successful for now
        return true;
    }
};

#endif

#ifndef PAYMENT_H
#define PAYMENT_H

class Payment {
public:
    virtual void processPayment(double amount) = 0;  // Pure virtual function
};

#endif

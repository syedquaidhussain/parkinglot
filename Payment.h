#ifndef PAYMENT_H
#define PAYMENT_H

class Payment {
public:
    virtual bool processPayment(double amount) = 0; // return true/false based on success
    virtual ~Payment() {}
};

#endif

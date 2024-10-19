#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "User.h"
#include <iostream>

class Customer : public User {
public:
    Customer(string id, string name) : User(id, name) {}

    void displayInfo() override {
        cout << "Customer: " << name << " (ID: " << id << ")" << endl;
    }
};

#endif

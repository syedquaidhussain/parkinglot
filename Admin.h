#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include <string>
#include<iostream>
class Admin : public User {
    string adminPassword;
public:
    Admin(string id, string name, string password) : User(id, name), adminPassword(password) {}

    bool validate(string password) {
        return password == adminPassword;
    }

    void displayInfo() override {
        cout << "Admin: " << name << " (ID: " << id << ")" << endl;
    }
};

#endif

#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
public:
    string id;
    string name;
public:
    User(string id, string name) : id(id), name(name) {}
    virtual void displayInfo() = 0;  // Pure virtual function
    virtual ~User() {}  // Virtual destructor
};

#endif

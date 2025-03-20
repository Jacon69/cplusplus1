#pragma once 

#include <string>
#include <iostream>

using std::endl;
using std::cin;
using std::cout;
using std::cerr;
using std::string;

class Animal {
protected:
    string type;

public:
    Animal();
    virtual ~Animal();  // Virtual destructor

    virtual void makeSound() const;  // Virtual method
    string getType() const;
};

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

    virtual void makeSound() const = 0;  // 🔹 Método virtual puro (clase abstracta)
    virtual Animal* clone() const = 0;   // 🔹 Nuevo método virtual puro
    string getType() const;
};

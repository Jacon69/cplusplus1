#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat& other);          // Constructor de copia
    ~Cat();
    Cat& operator=(const Cat& other);   //Operador de asignacion

    void makeSound() const;  // Obligate method
    Animal* clone() const;  // 🔹 Implementamos clone()
};
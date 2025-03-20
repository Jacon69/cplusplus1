#pragma once 

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain* brain;
public:
    Dog();
    Dog(const Dog &other);              // Constructor de copia
    ~Dog();
    Dog& operator=(const Dog &other);  //Operador de asignacion

    void makeSound() const;  // Obligate method
    Animal* clone() const;  // 🔹 Implementamos clone() vamos a usar el constructor copia en este método
};

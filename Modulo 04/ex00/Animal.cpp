#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    cout << "Animal created" << endl;
}

Animal::~Animal() {
    cout << "Animal destroyed" << endl;
}

void Animal::makeSound() const {
    cout << "Generic animal sound" << endl;
}

std::string Animal::getType() const {
    return type;
}
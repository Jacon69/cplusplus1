#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    cout << "Dog created" << endl;
}

Dog::~Dog() {
    cout << "Dog destroyed" << endl;
}

void Dog::makeSound() const {
    cout << "Woof Woof! 🐶" << endl;
}
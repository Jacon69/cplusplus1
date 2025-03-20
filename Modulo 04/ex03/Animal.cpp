#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    cout << "Animal created" << endl;
}

Animal::~Animal() {
    cout << "Animal destroyed" << endl;
}

string Animal::getType() const {
    return type;
}
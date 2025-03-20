#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    brain = new Brain();  // Se reserva memoria para Brain
    cout << "Dog created 🐶" << endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    brain = new Brain(*other.brain);  // Copia profunda del Brain
    cout << "Dog copied 🧬🐶" << endl;
}
Dog::~Dog() {
    delete brain;  // Liberamos la memoria del Brain
    cout << "Dog destroyed ⚰️🐶" << endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);  // Copia los atributos de Animal
        delete brain;  // Eliminamos el Brain actual
        brain = new Brain(*other.brain);  // Copia profunda
    }
    cout << "Dog assigned 🐶=🐶" << endl;
    return *this;
}

void Dog::makeSound() const {
    cout << "Woof Woof! 🐶" << endl;
}

Animal* Dog::clone() const {
    return new Dog(*this);  // Con el constructor copia mandamos el propio objeto como referencia
}

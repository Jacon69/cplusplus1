#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain();  // Se reserva memoria para Brain
		cout << "Cat created 🐱" << endl;
}

Cat::~Cat() {
	delete brain;  // Liberamos la memoria del Brain
	cout << "Cat destroyed ⚰️🐱" << endl;
}

Cat::Cat(const Cat& other) : Animal(other) {	// Constructor de copia
    brain = new Brain(*other.brain);  // Copia profunda del Brain
    cout << "Cat copied 🧬🐱" << endl;
}

Cat& Cat::operator=(const Cat& other) {		//Operador de asignacion
    if (this != &other) {  // Evita autoasignación
        Animal::operator=(other);  // Copia los atributos de Animal
        delete brain;  // Eliminamos el Brain actual
        brain = new Brain(*other.brain);  // Copia profunda
    }
    cout << "Cat assigned 🐱=🐱" << endl;
    return *this;
}

void Cat::makeSound() const {
		cout << "Meow Meow! 🐱" << endl;
}

Animal* Cat::clone() const {
    return new Cat(*this);  // Con el constructor copia mandamos el propio objeto como referencia
    //devuelvo un puntero animal para poder mantener el polimorfirmo. los puntero animal nos sirvenpara todas las subclases y
}
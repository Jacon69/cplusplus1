#include "Cat.hpp"
Cat::Cat() {
	type = "Cat";
		cout << "Cat created" << endl;
}

Cat::~Cat() {
		cout << "Cat destroyed" << endl;
}

void Cat::makeSound() const {
		cout << "Meow Meow! 🐱" << endl;
}
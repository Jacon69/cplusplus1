#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    cout << "--- Creating Animals ---" << endl;
    Animal* dog1 = new Dog();  // ✅ Un Animal* apuntando a un Dog
    Animal* cat1 = new Cat();  // ✅ Un Animal* apuntando a un Cat

    cout << "\n--- Cloning Animals ---" << endl;
    Animal* dog2 = dog1->clone();  // 🔹 Clonamos el perro
    Animal* cat2 = cat1->clone();  // 🔹 Clonamos el gato

    cout << "\n--- Testing makeSound() ---" << endl;
    dog1->makeSound();  // 🐶 "Woof Woof!"
    dog2->makeSound();  // 🐶 "Woof Woof!" (clon correcto)
    cat1->makeSound();  // 🐱 "Meow Meow!"
    cat2->makeSound();  // 🐱 "Meow Meow!" (clon correcto)

    cout << "\n--- Deleting Objects ---" << endl;
    delete dog1;
    delete dog2;
    delete cat1;
    delete cat2;

    return 0;

}

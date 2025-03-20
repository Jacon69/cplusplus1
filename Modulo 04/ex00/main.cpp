#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    cout << j->getType() << endl;  // "Dog" //ejecutan el metodo de Animal
    cout << i->getType() << endl;  // "Cat"

    i->makeSound(); // 🐱 "Meow Meow!"
    j->makeSound(); // 🐶 "Woof Woof!"
    meta->makeSound(); // ❓ "Generic animal sound"

    delete meta;
    delete j;
    delete i;

    return 0;
}

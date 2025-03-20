#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
       std::cout << "--- Creating Dogs ---" << std::endl;
    Dog dog1;
    Dog dog2 = dog1;  // Constructor de copia
    Dog dog3;
    dog3 = dog1;  // Operador de asignación

    std::cout << "--- Creating Cats ---" << std::endl;
    Cat cat1;
    Cat cat2 = cat1;  // Constructor de copia

    std::cout << "--- Destruction starts ---" << std::endl;
    return 0;
}

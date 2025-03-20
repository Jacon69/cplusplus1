#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;   // Más vida que ClapTrap
    energyPoints = 100; // Más energía que ClapTrap
    attackDamage = 30;  // Más daño que ClapTrap
    std::cout << "FragTrap " << name << " ha sido creado!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " ha sido destruido!" << std::endl;
}

void FragTrap::highFivesGuys() const {
    std::cout << "FragTrap " << name << " quiere un choque de manos! 🖐️" << std::endl;
}
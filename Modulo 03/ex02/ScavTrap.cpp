#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;   // Más vida
    energyPoints = 50; // Más energía
    attackDamage = 20; // Más daño
    std::cout << "ScavTrap " << name << " ha sido creado!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " ha sido destruido!" << std::endl;
}

void ScavTrap::guardGate() const {
    std::cout << "ScavTrap " << name << " ha activado el MODO GUARDIA!" << std::endl;
}
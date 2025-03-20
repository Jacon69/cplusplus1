#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"), ScavTrap(n), FragTrap(n) {
    name = n;
    hitPoints = FragTrap::hitPoints;  // Usa vida de FragTrap (100)
    energyPoints = ScavTrap::energyPoints;  // Usa energía de ScavTrap (50)
    attackDamage = FragTrap::attackDamage;  // Usa daño de FragTrap (30)

    std::cout << "DiamondTrap " << name << " ha sido creado!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " ha sido destruido!" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "Soy " << name << " y mi ClapTrap name es " << ClapTrap::name << std::endl;
}
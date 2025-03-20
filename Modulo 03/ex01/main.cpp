#include "ScavTrap.hpp"

int main() {
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");

    clap.attack("Enemigo 1");
    scav.attack("Enemigo 2");

    clap.takeDamage(5);
    scav.takeDamage(30);

    clap.beRepaired(3);
    scav.beRepaired(20);

    scav.guardGate();

    return 0;
}

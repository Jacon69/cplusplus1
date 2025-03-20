#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main() {
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");
    FragTrap frag("Fraggy");

    clap.attack("Enemigo 1");
    scav.attack("Enemigo 2");
    frag.attack("Enemigo 3");

    clap.takeDamage(5);
    scav.takeDamage(30);
    frag.takeDamage(50);

    clap.beRepaired(3);
    scav.beRepaired(20);
    frag.beRepaired(40);

    scav.guardGate();
    frag.highFivesGuys();
    return 0;
}

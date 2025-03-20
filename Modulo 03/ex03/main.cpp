#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap dt("Diamondy");

    dt.attack("Enemigo");
    dt.takeDamage(20);
    dt.beRepaired(10);
    dt.whoAmI();

    return 0;
}

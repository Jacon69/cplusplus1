#include "ClapTrap.hpp"

int main() {
    ClapTrap robot("Clappy");

    robot.attack("Enemigo 1");
    robot.takeDamage(5);
    robot.beRepaired(3);
    robot.attack("Enemigo 2");
    robot.takeDamage(10);
    robot.beRepaired(5);

    return 0;
}
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string n) : name(n), hitPoints(10), energyPoints(10), attackDamage(0) {
	cout << "ClapTrap " << name << " creado!" << endl;
}

ClapTrap::~ClapTrap() {
	cout << "ClapTrap " << name << " destruido!" << endl;
}

void ClapTrap::attack(const string& target) {
	if (energyPoints <= 0 || hitPoints <= 0) {
		cout << "ClapTrap " << name << " no puede atacar, está sin energía o sin vida!" << endl;
		return;
	}
	energyPoints--;
	cout << "ClapTrap " << name << " ataca a " << target 
			  << ", causando " << attackDamage << " puntos de daño!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	hitPoints -= amount;
	if (hitPoints < 0) hitPoints = 0;
	cout << "ClapTrap " << name << " recibe " << amount 
			  << " puntos de daño! Vida restante: " << hitPoints << endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints <= 0 || hitPoints <= 0) {
    	cout << "ClapTrap " << name << " no puede repararse, está sin energía o sin vida!" << endl;
        return;
    }
    energyPoints--;
    hitPoints += amount;
    cout << "ClapTrap " << name << " se repara, recuperando " << amount 
              << " puntos de vida! Vida actual: " << hitPoints << endl;
}

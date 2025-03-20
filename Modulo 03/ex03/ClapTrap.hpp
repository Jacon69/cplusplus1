#pragma once 

#include <string>
#include <iostream>

using std::endl;
using std::cin;
using std::cout;
using std::cerr;
using std::string;

class ClapTrap {
protected:
	string name;
	int hitPoints;    //la vida ->10 
	int energyPoints; //La energía ->10 
	int attackDamage; //fuerza al atacar ->0

public:
	ClapTrap(string name);  // Constructor
	~ClapTrap();  // Destructor

	void attack(const string& target) ; //modifica energyPoints--
	void takeDamage(unsigned int amount); //modifica atributo  hitPoints - amount
	void beRepaired(unsigned int amount); //modifica atributo  energyPoints--  y hitPoints + amount
};



#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(std::string name); // Constructor
    ~ScavTrap(); // Destructor

    void guardGate() const; // Nueva habilidad
};

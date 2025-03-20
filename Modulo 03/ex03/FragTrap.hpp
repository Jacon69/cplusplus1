#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap(std::string name);  // Constructor
    ~FragTrap();  // Destructor

    void highFivesGuys() const;  // Método exclusivo
};
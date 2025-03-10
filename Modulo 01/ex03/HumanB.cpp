/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:22:00 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/02 22:45:24 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon (NULL) {}
HumanB::~HumanB()
{
	std::cerr << "DEBUG " << "el humano " << name << " ha sido dado de baja" << std::endl;
}

void HumanB::attack()const {
    if (weapon){
         std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
    else{
        std::cout << name << " has no weapon to attack with!" << std::endl;
    }
   
}

void HumanB::setWeapon(Weapon& newWeapon){
    weapon = &newWeapon; 
}


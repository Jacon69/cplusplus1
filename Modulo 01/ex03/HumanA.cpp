/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:22:00 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/02 22:45:13 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}
HumanA::~HumanA()
{
	std::cerr << "DEBUG " << "el humano " << name << " ha sido dado de baja" << std::endl;
}


void HumanA::attack()const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}



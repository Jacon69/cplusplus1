/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:43:07 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/02 06:57:35 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("") {}      //Constructor
Zombie::Zombie(std::string name) : name(name) {} // Constructor con nombre (opcional)

Zombie::~Zombie()                              //destructor
{
    std::cerr << "DEBUG " << name << " ha sido destruido 💀" << std::endl;
}

void  Zombie::announce() const 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}
void Zombie::setName(std::string newName){
    name = newName;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:42:55 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/01 18:43:02 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>


class Zombie 
{
private:
   std::string name; //Atributos
public:             //Metodos publicos  
    Zombie(std::string name);  // Constructor  
    ~Zombie();                 // Destructor
    void announce() const;     // Método que anuncia el zombie
};
// Externas  Estas funciones usan la clase pero no modifican atributos no tiene acceso a private
    Zombie *newZombie( const std::string &name );
    void randomChump( const std::string &name );


#endif



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:42:55 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/03/13 14:09:48 by jaimecondea      ###   ########.fr       */
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
		Zombie(); //Constructor sin nombre
		Zombie(std::string name);  // Constructor  con nombre

		~Zombie();                 // Destructor
		void announce() const;     // Método que anuncia el zombie
		void setName(std::string newName); 
};


// Externas  Estas funciones usan la clase pero no modifican atributos no tiene acceso a private. aunque a través de los metodos publicos si modifican atributos
   Zombie* zombieHorde( int N, std::string name );

#endif



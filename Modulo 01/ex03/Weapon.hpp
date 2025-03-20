/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:08:18 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/03/14 11:40:59 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string type; //Atributos
	
public:
	Weapon(); // Constructor sin tipo
	Weapon(std::string type); // constructor con typo
	~Weapon();
	const std::string& getType() const;
	void setType(const std::string& newType);
};


#endif
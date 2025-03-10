/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:19:01 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/02 22:38:35 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon weapon;
public:
	HumanA(std::string name, Weapon& weapon); //Se inicaliza con un arma
	~HumanA();
	void attack() const;
};

#endif

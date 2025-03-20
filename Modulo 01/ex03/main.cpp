/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:23:15 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/03/14 11:51:16 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int main(){
	Weapon club("crude spiked club"); //hago la instancia club de la clase weapon y inicializo tipo nombrado "crude spiked club"

	HumanB jim("Jim");  // No tiene arma al inicio
	jim.attack();
	jim.setWeapon(club);  
	jim.attack();  // Jim attacks with their crude spiked club

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.setWeapon(club);  // 🔹 Asegurar que `HumanA` ve el cambio
	bob.attack();
}

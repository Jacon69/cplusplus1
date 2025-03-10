/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 07:48:54 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/02 07:58:52 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>  // Para atoi()

Zombie* zombieHorde( int N, std::string name ){

    if (N <=  0) {
        std::cerr <<"Error el numero de zombis tiene que se mayor que cero";
        return NULL;
    }
    Zombie* horde= new Zombie[N];   
    for (  int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;

}
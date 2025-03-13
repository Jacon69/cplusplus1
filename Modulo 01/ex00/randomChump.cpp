/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:43:25 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/03/10 19:29:08 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( const std::string &name )
{
    Zombie z(name); // creo el objeto pero no saco el puntero . cuando salgo se elimina
    z.announce();
}
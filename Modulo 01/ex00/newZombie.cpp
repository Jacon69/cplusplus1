/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:43:13 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/01 18:43:20 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie( const std::string &name )
{
   return new Zombie( name);  //creo el zombie e inicializo al mismo tiempo con name Se devuelve el puntero con la dir del zombie creado

 }
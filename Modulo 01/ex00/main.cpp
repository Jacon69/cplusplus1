/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:43:38 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/01 18:43:50 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    // 1️⃣ Crear un Zombie en el heap con newZombie() y eliminarlo manualmente
    Zombie* heapZombie= newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;
     std::cout << "--------------------------" << std::endl;

    // 2️⃣ Crear un Zombie en el stack con randomChump()
    randomChump("ramdomZombie");

  std::cout << "--------------------------" << std::endl;


    // 3️⃣ Crear un Zombie en el stack de forma manual
    Zombie stackZombie("ManualZombie");
    stackZombie.announce();
    
    return 0;
} // Aquí se llama al destructor de stackZombie automáticamente

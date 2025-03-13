/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:59:13 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/03/13 17:32:09 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){} 

void Harl::debug( void ){
    std::cout << "mensaje debug" << std:: endl;
}

void Harl::info( void ){
    std::cout << "mensaje info" << std:: endl;
}

void Harl::warning( void ){
    std::cout << "mensaje warning" << std:: endl;
}

void Harl::error( void ){
    std::cout << "mensaje error" << std:: endl;
}

void Harl::complain(std::string level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"}; //creamos un array string con los niveles de queja
    void (Harl::*actions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    /*Esto es un array de punteros a metodos de la clase Harl.
        Cada elemento apunta a uno de los métodos privados (debug(), info(), etc.).
        una vez hecho es lo mismo llamar al elemento del array harl.*actions[2])() que llamar a la función harl.warning()
    */

    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) { /*Aqui se compara el string que se ha pasado en la llamada a complain con el array string
     que se ha definido para obtener el nº (i) del metodo  que hay que ejecutar*/
            (this->*actions[i])(); // Llama a la función correspondiente lo hace con this-> para que se aplique en la istancia(objeto intanciado) donde se está llamando
            return;
        }
    }
    std::cout << "[ UNKNOWN ]\nHarl doesn't know what to say.\n";
}

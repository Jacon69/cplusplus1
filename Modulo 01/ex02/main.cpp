/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:28:21 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/02 11:58:25 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(){
    
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Dirección de la cadena original:" << &brain << std::endl;
    std::cout << "Dirección almacenada en stringPTR:" << stringPTR << std::endl;
    std::cout << "Dirección almacenada en stringPTR:" << &stringREF << std::endl;
    std::cout << "Valor de la cadena original:" << brain << std::endl;
    std::cout << "Valor apuntado por stringPTR:" << *stringPTR << std::endl;
    std::cout << "Valor referenciado por stringREF:" << stringREF << std::endl;

    return 0;
}
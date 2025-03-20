/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:03:38 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/03/14 18:13:17 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// 1. Constructor por defecto
Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// 4. Constructor de copia
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    value = other.getRawBits();
}

// 5. Operador de asignación
Fixed& Fixed::operator=(const Fixed& other) 
{
    std::cout << " Copy assignment operator called" << std::endl;
    if (this != &other) {  // Evitar autoasignación
        value = other.getRawBits();
    }
    return *this;
}

// 6. Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// 7. Métodos Getters y Setters para obtener y modificar el valor en punto fijo
int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

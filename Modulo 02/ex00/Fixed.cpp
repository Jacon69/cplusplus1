#include "Fixed.hpp"

// 1. Constructor por defecto
Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// 2. Constructor con enteros (Convierte un int a punto fijo)
Fixed::Fixed(int num) {
    std::cout << "Int constructor called" << std::endl;
    value = num << nBit;  // Multiplica por 2^8 (256)
}

// 3. Constructor con flotantes (Convierte un float a punto fijo)
Fixed::Fixed(float num) {
    std::cout << "Float constructor called" << std::endl;
    value = static_cast<int>(roundf(num * (1 << nBit)));  // Multiplica por 2^8 y redondea . no se puede aplicar el desplazamiento de bit con num no enteros
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

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{


private:
int value;
static const  int nBit= 8;

public:
    // 1. Constructor por defecto
    Fixed();

    // 2. Constructor con parámetros
    Fixed(int num);

    Fixed(float num);

    // 3. Constructor de copia
    Fixed(const Fixed& other);

    // 4. Operador de asignación    
    Fixed& operator=(const Fixed& other);

    // 5. Destructor
    ~Fixed();

    // 6. Métodos Getters
    // 7. Obtener y asignar el valor crudo en punto fijo
    int getRawBits() const;
    void setRawBits(int raw);
};

#endif
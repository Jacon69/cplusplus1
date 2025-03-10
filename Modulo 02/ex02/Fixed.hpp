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

        // 8. Conversión a flotante y entero
    float toFloat() const;
    int toInt() const;

        // 9. Sobrecarga del operador de salida
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
    // 10. operadores //10 . Operadores <, >, =>, =<, !=, ==
    bool operator<(const Fixed& other)const;
    bool operator>(const Fixed& other)const;
    bool operator<=(const Fixed& other)const;
    bool operator>=(const Fixed& other)const;
    bool operator==(const Fixed& other)const;
    bool operator!=(const Fixed& other)const;
//11 Operadores aritméricos
    Fixed operator+(const Fixed& other) const ;
    Fixed operator-(const Fixed& other) const ;
    Fixed operator*(const Fixed& other) const ;
    Fixed operator/(const Fixed& other) const ;




//12 Operadores de Incremento y Decremento

Fixed& operator++();
Fixed operator++(int);
Fixed& operator--();
Fixed operator--(int); 



//13 Métodos min() y max()

static Fixed& min(Fixed& a, Fixed& b);
static const Fixed& min(const Fixed& a, const Fixed& b);
static Fixed& max(Fixed& a, Fixed& b);
static const Fixed& max(const Fixed& a, const Fixed& b);

};
#endif
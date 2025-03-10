#include "Fixed.hpp"

// 1. Constructor por defecto
Fixed::Fixed() : value(0) {
}

// 2. Constructor con enteros (Convierte un int a punto fijo)
Fixed::Fixed(int num) {
    value = num << nBit;  // Multiplica por 2^8 (256)
}

// 3. Constructor con flotantes (Convierte un float a punto fijo)
Fixed::Fixed(float num) {
    value = static_cast<int>(roundf(num * (1 << nBit)));  // Multiplica por 2^8 y redondea . no se puede aplicar el desplazamiento de bit con num no enteros
}

// 4. Constructor de copia
Fixed::Fixed(const Fixed& other) {
    value = other.value;
}

// 5. Operador de asignación
Fixed& Fixed::operator=(const Fixed& other) 
{
    if (this != &other) {  // Evitar autoasignación
        value = other.value;
    }
    return *this;
}

// 6. Destructor
Fixed::~Fixed() {
}

// 7. Métodos Getters y Setters para obtener y modificar el valor en punto fijo
int Fixed::getRawBits() const {
    return value;
}

void Fixed::setRawBits(int raw) {
    value = raw;
}

// 8. Conversión a flotante y entero
float Fixed::toFloat() const {
    return static_cast<float>(value) / (1 << nBit);  // Divide por 2^8
}

int Fixed::toInt() const {
    return value >> nBit;  // Divide por 2^8 (desplazamiento de bits)
}

// 9. Sobrecarga del operador de salida `<<`
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

//10 . Operadores <, >, >=, <=, !=, ==

bool Fixed::operator<(const Fixed& other) const{
    return value < other.value;
}

bool Fixed::operator>(const Fixed& other)const{
    return value > other.value;
}

bool Fixed::operator<=(const Fixed& other)const{
    return value <= other.value;
}

bool Fixed::operator>=(const Fixed& other)const{
    return value >= other.value;
}
bool Fixed::operator==(const Fixed& other)const{
    return value == other.value;
}
bool Fixed::operator!=(const Fixed& other)const{
    return value != other.value;
}
//10 operaciones + - * /

Fixed Fixed::operator+(const Fixed& other) const {
Fixed result;
result.value= value + other.value;
return result;
}
Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.value= value - other.value;
    return result;

}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.value = static_cast<int>((this->toFloat() * other.toFloat()) * (1 << nBit));  
    /*Para multiplicarlo convierto a flotantes, los multiplico y luego
     con  * (1 << nBit) y static_cast<int>() Lo paso a punto fijo*/
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    if (other.value == 0) {
        std::cerr << "Error: División por 0" << std::endl;
        return Fixed(0);
    }
    Fixed result;
    result.value = static_cast<int>((this->toFloat() / other.toFloat()) * (1 << nBit));  
    return result;
}

//12 Operadores de Incremento y Decremento

// Pre-incremento
Fixed& Fixed::operator++() {
    this->value++;   //this es un puntero y *this es el objeto.
    return *this;  //devuelvo el objeto modificado las operascviones que se hagan ya van con la moidificación
}

// Post-incremento
Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->value++;  //
    return temp;  //devuelvo la copia del objeto antes de modificarse las operaciones que se hagan van sin la moidificación
}

// Pre-decremento
Fixed& Fixed::operator--() {
    this->value--;
    return *this;
}

// Post-decremento
Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    this->value--;
    return temp;
}

//Métodos min() y max()

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

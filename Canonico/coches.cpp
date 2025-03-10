#include "coches.hpp"

// 1. Constructor por defecto
Coche::Coche() : modelo("Desconocido"), motor("Desconocido"), color("Desconocido") {
    std::cout << "Constructor por defecto llamado" << std::endl;
}

// 2. Constructor con parámetros
Coche::Coche(const std::string& modelo, const std::string& motor, const std::string& color)
    : modelo(modelo), motor(motor), color(color) {
    std::cout << "Constructor con parámetros llamado" << std::endl;
}

// 3. Constructor de copia
Coche::Coche(const Coche& other)
    : modelo(other.modelo), motor(other.motor), color(other.color) {
    std::cout << "Constructor de copia llamado" << std::endl;
}

// 4. Operador de asignación
Coche& Coche::operator=(const Coche& other) {
    std::cout << "Operador de asignación llamado" << std::endl;
    if (this != &other) {  // Evitar autoasignación
        modelo = other.modelo;
        motor = other.motor;
        color = other.color;
    }
    return *this;  // Retorna el objeto actual
}

// 5. Destructor
Coche::~Coche() {
    std::cout << "Destructor llamado para el coche " << modelo << std::endl;
}

// 6. Métodos Getters
std::string Coche::getModelo() const {
    return modelo;
}

std::string Coche::getMotor() const {
    return motor;
}

std::string Coche::getColor() const {
    return color;
}

// 7. Métodos Setters
void Coche::setModelo(const std::string& modelo) {
    this->modelo = modelo;
}

void Coche::setMotor(const std::string& motor) {
    this->motor = motor;
}

void Coche::setColor(const std::string& color) {
    this->color = color;
}

// 8. Método para mostrar información del coche
void Coche::mostrarInfo() const {
    std::cout << "Modelo: " << modelo << ", Motor: " << motor << ", Color: " << color << std::endl;
}

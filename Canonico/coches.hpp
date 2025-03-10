#ifndef COCHE_HPP
#define COCHE_HPP


#include <iostream>
#include <string>

class Coche {
private:
    std::string modelo;  // Modelo del coche
    std::string motor;   // Tipo de motor
    std::string color;   // Color del coche

public:
    // 1. Constructor por defecto
    Coche(); //la clase string al diferencia de usar punteros dinámicos no necesitamos inicializarlo.Se gestiona la mem de forma dinámica

    // 2. Constructor con parámetros
    Coche(const std::string& modelo, const std::string& motor, const std::string& color); 
    /*Cuando nos pasan los parámetros con & lo que nos está pasando 
       es la referencia a la cadena original que no podemos modificar. */
    
    // 3. Constructor de copia
    Coche(const Coche& other);

    // 4. Operador de asignación
    Coche& operator=(const Coche& other); 

    // 5. Destructor
    ~Coche();

    // 6. Métodos Getters
    std::string getModelo() const;
    std::string getMotor() const;
    std::string getColor() const;

    // 7. Métodos Setters
    void setModelo(const std::string& modelo);
    void setMotor(const std::string& motor);
    void setColor(const std::string& color);

    // 8. Método para mostrar información del coche
    void mostrarInfo() const;
};

#endif // COCHE_HPP

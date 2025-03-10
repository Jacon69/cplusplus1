#include"Point.hpp"

//Constructor por defecto
Point::Point(): x(0),y(0){}

//Constructor por parámetro
Point::Point(Fixed x, Fixed y): x(x),y(y) {}

//Constructor de copia

//Point::Point(const Point& other): x(other.x),y(other.y){}

/*Point& Point::operator=(const Point& other){
   (void) other; //casteo con void para hacer algo ya que al ser const las cordenadas no puede haber modificación 
   return *this;
    }*/
    //porque se ha ha puesto un operador de asignación si no va a funcionar. 
    //Pues porque la forma ortodoxa canónoca exige que se defina el operador

    // Operador de asignación (no puede modificar const)

//Getters
    Fixed Point::getX() const{return x;}
    Fixed Point::getY() const{return y;}

    // ✅ Implementación vacía del destructor
Point::~Point() {}



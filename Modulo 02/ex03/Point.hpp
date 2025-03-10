#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include"Fixed.hpp"

class Point{
private: 
    const Fixed x;
    const Fixed y;
public:
    //constructores
    Point();
    Point(const Fixed x, const Fixed y);
        //destructor
    ~Point();
private:    
    Point(const Fixed& other);
    //operador de asignación
    Point& operator=(const Point& other);
public:

    //Getters

    Fixed getX() const;
    Fixed getY() const;

};
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
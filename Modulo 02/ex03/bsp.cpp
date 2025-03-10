#include"Point.hpp"

bool bsp(Point a, Point b, Point c, Point p){
    Fixed x1 = a.getX(), y1 = a.getY();
    Fixed x2 = b.getX(), y2 = b.getY();
    Fixed x3 = c.getX(), y3 = c.getY();
    Fixed px = p.getX(), py = p.getY();

    // Cálculo del área del triángulo usando determinantes
    Fixed detT = (y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3);
    Fixed alpha = ((y2 - y3) * (px - x3) + (x3 - x2) * (py - y3)) / detT;
    Fixed beta = ((y3 - y1) * (px - x3) + (x1 - x3) * (py - y3)) / detT;
    Fixed gamma = Fixed(1) - alpha - beta;
    // El punto está dentro si 0 < α < 1, 0 < β < 1, 0 < γ < 1
    return (alpha > 0 && alpha < 1) &&
           (beta > 0 && beta < 1) &&
           (gamma > 0 && gamma < 1);
}

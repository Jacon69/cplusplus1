/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:48:13 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/12 22:16:41 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main() {
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);
    Point p1(5, 5);  // Dentro del triángulo
    Point p2(10, 10); // Fuera del triángulo

    std::cout << "¿p1 está dentro? " << (bsp(a, b, c, p1) ? "Sí" : "No") << std::endl;
    std::cout << "¿p2 está dentro? " << (bsp(a, b, c, p2) ? "Sí" : "No") << std::endl;

    }
